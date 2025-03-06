/*
    This only compiles (and runs) on AArch64 LE.
    It could be (trivially) ported to remove the platform requirement but why bother?
    Considering all platforms that runs the game are AArch64 LE already. 

    The algorithm is for the "33303034" variant (last gen) of save.bin format, which could be identified by using an hex editor to see the header of it.
*/
#include <iostream>
#include <fstream>
#include <vector>
#include <arm_neon.h>


int main(int argc, const char * argv[]) {
    std::ifstream file("/PATH/TO/save.bin", std::ios::binary | std::ios::ate);
        if (!file) {
            throw std::runtime_error("Failed to open file");
        }

        std::streamsize size = file.tellg();
        file.seekg(0, std::ios::beg);

        std::vector<char> buffer(size);
        if (!file.read(buffer.data(), size)) {
            throw std::runtime_error("Failed to read file");
        }
    int32_t correctChecksum = *reinterpret_cast<int32_t*>(buffer.data() + 4);
    printf("Correct Checksum: %x\n",correctChecksum);
    int32x4_t checksum_lhs = {0x34303033,0,0,0};
    int32x4_t checksum_rhs = {0};
    for(uint32_t offset = 0;offset<=0x4BFE0;offset = offset+32){
        int32x4_t lhs_v = *reinterpret_cast<int32x4_t*>(buffer.data() + offset + 12);
        int32x4_t rhs_v = *reinterpret_cast<int32x4_t*>(buffer.data() + offset + 28);
        checksum_lhs = vaddq_s32(lhs_v, checksum_lhs);
        checksum_rhs = vaddq_s32(rhs_v, checksum_rhs);
    }
    int32_t calcChecksum =
    *reinterpret_cast<uint32_t*>(buffer.data() + 0x4BFFC)
    +*reinterpret_cast<uint32_t*>(buffer.data() + 0x4BFF8)
    +*reinterpret_cast<uint32_t*>(buffer.data() + 0x4BFF4)
    +*reinterpret_cast<uint32_t*>(buffer.data() + 0x4BFF0)
    +*reinterpret_cast<uint32_t*>(buffer.data() + 0x4BFEC)
    +vaddvq_s32(vaddq_s32(checksum_rhs, checksum_lhs));

    printf("Calculated Checksum: %x\n",calcChecksum);
    return 0;
}
