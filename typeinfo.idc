//      This file contains the user-defined type definitions.
//      To use it press F2 in IDA and enter the name of this file.
//

#define UNLOADED_FILE   1
#include <idc.idc>

extern ltf;  // load_type flags

static main(void)
{
  ltf = ARGV.count > 1 ? ARGV[1] : LOADTYPE_DEFAULT;
  LocalTypes();
}

static LocalTypes_0() 
{
  auto p_type, p_fields, p_cmt, p_fldcmts;

  p_type = "\x0D1\xF1\x80\x04$\x02\x09I\x08\x90I\x02\x01\x81\x08\"\x01\"\x01#\x01%"
    "\x02\x09I\x01\x01\x81\x08%\x01";
  p_fields = "\x08st_name\x08st_info\x09st_other\x09st_shndx\x09st_value\x08st_size";
  load_type(ltf, 1, "Elf64_Sym", p_type, p_fields);
  p_type = "\x0D\x19%%\x05";
  p_fields = "\x09r_offset\x07r_info\x09r_addend";
  load_type(ltf, 2, "Elf64_Rela", p_type, p_fields);
  p_type = "\x0D\x11%%";
  p_fields = "\x06d_tag\x05d_un";
  load_type(ltf, 3, "Elf64_Dyn", p_type, p_fields);
  p_type = "\x0D)\xF1\x80\x04#\x01#\x01$\x02\x09I\x08\x90I\x02\x01\x81\x08$\x01$\x01";
  p_fields = "\x0Bvn_version\x07vn_cnt\x08vn_file\x07vn_aux\x08vn_next";
  load_type(ltf, 4, "Elf64_Verneed", p_type, p_fields);
  p_type = "\x0D)\xF1\x80\x04$\x01#\x01#\x01$\x02\x09I\x08\x90I\x02\x01\x81\x08$\x01";
  p_fields = "\x09vna_hash\x0Avna_flags\x0Avna_other\x09vna_name\x09vna_next";
  load_type(ltf, 5, "Elf64_Vernaux", p_type, p_fields);
  p_type = "%";
  load_type(ltf, 6, "size_t", p_type);
  p_type = "\x0Dy=\x08__dev_t=\x08__ino_t=\x0A__nlink_t=\x09__mode_t=\x08__uid_t=\x08"
    "__gid_t\x07=\x08__dev_t=\x08__off_t=\x0C__blksize_t=\x0B__blkcnt_t\x0D"
    "\x01\x09timespec\x0D\x01\x09timespec\x0D\x01\x09timespec\x1B\x04=\x12_"
    "_syscall_slong_t";
  p_fields = "\x07st_dev\x07st_ino\x09st_nlink\x08st_mode\x07st_uid\x07st_gid\x07__p"
    "ad0\x08st_rdev\x08st_size\x0Bst_blksize\x0Ast_blocks\x08st_atim\x08st_"
    "mtim\x08st_ctim\x09__unused";
  load_type(ltf, 7, "stat", p_type, p_fields);
  p_type = "%";
  load_type(ltf, 8, "__dev_t", p_type);
  p_type = "=\x0F__kernel_ino_t";
  load_type(ltf, 9, "__ino_t", p_type);
  p_type = "=\x11__kernel_ulong_t";
  load_type(ltf, 10, "__kernel_ino_t", p_type);
  p_type = "%";
  load_type(ltf, 11, "__kernel_ulong_t", p_type);
  p_type = "=\x09uint32_t";
  load_type(ltf, 12, "__nlink_t", p_type);
  p_type = "=\x0B__uint32_t";
  load_type(ltf, 13, "uint32_t", p_type);
  p_type = "'";
  load_type(ltf, 14, "__uint32_t", p_type);
  p_type = "=\x10__kernel_mode_t";
  load_type(ltf, 15, "__mode_t", p_type);
  p_type = "'";
  load_type(ltf, 16, "__kernel_mode_t", p_type);
  p_type = "=\x11__kernel_uid32_t";
  load_type(ltf, 17, "__uid_t", p_type);
  p_type = "'";
  load_type(ltf, 18, "__kernel_uid32_t", p_type);
  p_type = "=\x11__kernel_gid32_t";
  load_type(ltf, 19, "__gid_t", p_type);
  p_type = "'";
  load_type(ltf, 20, "__kernel_gid32_t", p_type);
  p_type = "\x05";
  load_type(ltf, 21, "__off_t", p_type);
  p_type = "\x05";
  load_type(ltf, 22, "__blksize_t", p_type);
  p_type = "\x05";
  load_type(ltf, 23, "__blkcnt_t", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 24, "timespec", p_type);
  p_type = "\x05";
  load_type(ltf, 25, "__syscall_slong_t", p_type);
  p_type = "=\x0A_G_fpos_t";
  load_type(ltf, 26, "fpos_t", p_type);
  p_type = "\x0D\x01\"$9E637E3D30D4EE6DC2F7DCF094554036";
  load_type(ltf, 27, "_G_fpos_t", p_type);
  p_type = "\x0D\x11=\x08__off_t=\x0C__mbstate_t";
  p_fields = "\x06__pos\x08__state";
  load_type(ltf, 28, "$9E637E3D30D4EE6DC2F7DCF094554036", p_type, p_fields);
  p_type = "\x0D\x01\"$E9F5FE92D7DB981290475B0A784F5155";
  load_type(ltf, 29, "__mbstate_t", p_type);
  p_type = "\x0D\x11\x07\x1D\x01E$E9F5FE92D7DB981290475B0A784F5155::$BADCA52C29225"
    "A708D9C0115E5B974AC";
  p_fields = "\x08__count\x08__value";
  load_type(ltf, 30, "$E9F5FE92D7DB981290475B0A784F5155", p_type, p_fields);
  p_type = "\x1D\x11'\x1B\x052";
  p_fields = "\x06__wch\x07__wchb";
  load_type(ltf, 31, "$E9F5FE92D7DB981290475B0A784F5155::$BADCA52C29225A708D9C0115E5B974AC", p_type, p_fields);
  p_type = "\x07";
  load_type(ltf, 32, "wchar_t", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 33, "mtxc::CLibUtil", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 34, "CGame", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 35, "IGameBase", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 36, "JNILib", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 37, "mtxc::FpsCounting", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 38, "mtxc::FpsCalc", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 39, "mtxc::ZipFileInterface", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 40, "mtxc::ZipFile", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 41, "mtxc::ObbFile", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 42, "tinyxml2::XMLNode", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 43, "tinyxml2::XMLDocument", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 44, "TuneLog::CLine", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 45, "TuneLog", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 46, "TuneMicrophone", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 47, "TuneTouchLine", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 48, "TuneWebViewClient", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 49, "tinyxml2::StrPair", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 50, "tinyxml2::XMLUtil", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 51, "tinyxml2::XMLComment", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 52, "tinyxml2::XMLDeclaration", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 53, "tinyxml2::XMLUnknown", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 54, "tinyxml2::XMLElement", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 55, "tinyxml2::XMLPrinter", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 56, "tinyxml2::XMLText", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 57, "mtxc::MtxcGlyphAndroid", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 58, "mtxc::MtxcSoundCoreOpenSL", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 59, "mtxc::MtxcSoundPlayerOpenSL", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 60, "mtxc::MtxcDevice", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 61, "mtxc::MtxcDevice::GL", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 62, "mtxc::MtxcFont", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 63, "mtxc::MtxcGLTBuffer", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 64, "mtxc::MtxcGLVBO", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 65, "MtxcTouchLine::LineStat", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 66, "MtxcTouchLine", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 67, "mtxc::CMutex", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 68, "tuneAppDelegate", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 69, "tuneViewController", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 70, "TuneWebViewListener", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 71, "StageDifficultyParam", p_type);
  p_type = "\x0D!\x1B9=\x08uint8_t\x1B\x07=\x09uint32_t\x1B\x04=\x09uint32_t\x1B\x04"
    "=\x09uint32_t";
  p_fields = "\x05data\x0FmodeDifficulty\x0CarcadeScore\x06Score";
  p_fldcmts = "\x04\x053.\x04\x054.\x04\x055.\x04\x056.";
  load_type(ltf, 72, "StageParam", p_type, p_fields, "", p_fldcmts);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 73, "PlayerParam", p_type);
  p_type = "\x0D\x09\x1B}=\x08uint8_t";
  p_fields = "\x05data";
  p_fldcmts = "\x04\x052.";
  load_type(ltf, 74, "StageSaveParam", p_type, p_fields, "", p_fldcmts);
  p_type = "\x0D\x09\x1B\x0D=\x08uint8_t";
  p_fields = "\x05data";
  p_fldcmts = "\x04\x052.";
  load_type(ltf, 75, "PlayerSaveParam", p_type, p_fields, "", p_fldcmts);
  p_type = "\x0D\x11\xF1@=\x09uint64_t=\x09uint32_t";
  p_fields = "\x06data1\x06data2";
  p_fldcmts = "\x04\x053.\x04\x054.";
  load_type(ltf, 76, "ItemSaveParam", p_type, p_fields, "", p_fldcmts);
  p_type = "\x0D\x09\x1B\x09=\x08uint8_t";
  p_fields = "\x05data";
  p_fldcmts = "\x04\x052.";
  load_type(ltf, 77, "SkinSaveParam", p_type, p_fields, "", p_fldcmts);
  p_type = "\x0D\x11\xF1@=\x09uint16_t=\x08uint8_t";
  p_fields = "\x06data0\x06data1";
  p_fldcmts = "\x04\x053.\x04\x054.";
  load_type(ltf, 78, "MyAchievementSaveParam", p_type, p_fields, "", p_fldcmts);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 79, "TuneMarkData", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 80, "TuneTimingData", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 81, "TuneTimingList", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 82, "SComStageClearParam", p_type);
  p_type = "\x0D\xD1\x02\x1B\x03=\x09uint64_t\x1B\x09=\x08uint8_t\x0A=\x0EMtxTouch"
    "Panel\x1B\x81\x01=\x0BMtxTexture\x1B\x81\x18=\x08uint8_t=\x11MtxEffect"
    "Manager\x1B5=\x08uint8_t=\x12MtxMessageManager=\x0FMtxFileManager=\x0F"
    "MtxFileManager=\x0FMtxFileManager\x1B!=\x08uint8_t=\x14MtxModelDataMan"
    "ager=\x09uint32_t=\x09uint32_t\x1B\x11=\x08uint8_t\x0A=\x0BTitleScene\x0A"
    "=\x0AGameScene\x0A=\x0AMenuScene\x1B\xBD\x02=\x08uint8_t=\x09uint32_t\x0A"
    "\x01\x1BQ=\x08uint8_t\x1B\x81\x10=\x0FStageSaveParam\x1B\x81\x02=\x10P"
    "layerSaveParam\x1BA=\x0EItemSaveParam\x1B!=\x0ESkinSaveParam\x1B\x81\x01"
    "=\x17MyAchievementSaveParam\x0B\x80\x80\x80\x80\x80\x80\x82\xB9\xBC=\x08"
    "uint8_t=\x09uint32_t\x1B\x19=\x08uint8_t=\x09uint32_t\x1B\xAE\x04=\x08"
    "uint8_t\x1B\x81\x022\x1B\x81\x022\x1B1=\x08uint8_t\x1B\xD1\x03=\x08uin"
    "t8_t\x1B\xE0\x03=\x08uint8_t\x1B&=\x09uint32_t=\x09uint32_t\x1B\x90\x10"
    "=\x09uint32_t\x1B\x0A=\x09uint32_t";
  p_fields = "\x07vtable\x06data0\x0BtouchPanel\x0Atextures_\x09textures\x0EeffectMa"
    "nager\x06data1\x0FmessageManager\x11modelFileManager\x14preStageFileMa"
    "nager\x10skinFileManager\x06data3\x11modelDataManager\x06data4\x0Ccurr"
    "SceneID\x06data5\x0BtitleScene\x0AgameScene\x0AmenuScene\x06data6\x0Am"
    "axSongID\x08unknown\x06data7\x10stageSaveParams\x11playerSaveParams\x0F"
    "itemSaveParams\x0FskinSaveParams\x17myAchivementSaveParams\x06data8\x0C"
    "playerLevel\x06data9\x0BlanguageID\x07data10\x08m4aPath\x0AstagePath\x07"
    "data11\x07data12\x07data13\x07data14\x0EsoundEffectID\x07data15\x0Fsta"
    "geClearInfo";
  p_fldcmts = "\x04\x053.\x04\x054.\x04\x055.\x04\x056.\x04\x057.\x04\x058.\x04\x059."
    "\x05\x0510.\x05\x0511.\x05\x0512.\x05\x0513.\x05\x0514.\x05\x0515.\x05"
    "\x0516.\x05\x0517.\x05\x0518.\x05\x0519.\x05\x0520.\x05\x0521.\x05\x05"
    "22.\x05\x0523.\x05\x0524.\x05\x0525.\x05\x0526.\x05\x0527.\x05\x0528.\x05"
    "\x0529.\x05\x0530.\x05\x0531.\x05\x0532.\x05\x0533.\x05\x0534.\x05\x05"
    "35.\x05\x0536.\x05\x0537.\x05\x0538.\x05\x0539.\x05\x0540.\x05\x0541.\x05"
    "\x0542.\x05\x0543.\x05\x0544.";
  load_type(ltf, 83, "TuneAppMain", p_type, p_fields, "", p_fldcmts);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 84, "MtxGameCenterDelegate", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 85, "TuneOptionSetting", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 86, "SOptionSetting", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 87, "FlowItemInfo", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 88, "StaffRollItemInfo", p_type);
  p_type = "\x0D\x09\x0B\x80\x80\x80\x80\x80\x80\x82\xCB\xE0=\x08uint8_t";
  p_fields = "\x05data";
  p_fldcmts = "\x04\x052.";
  load_type(ltf, 89, "GameScene", p_type, p_fields, "", p_fldcmts);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 90, "MtxSceneBase", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 91, "MarkInfo", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 92, "BuyMenu", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 93, "MenuBase", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 94, "DataBuckupMenu", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 95, "DeleteAccountMenu", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 96, "EventEndMenu", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 97, "EventStartMenu", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 98, "MenuWidget", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 99, "LevelUpMenu", p_type);
  p_type = "\x0D\x09\x1B\x19=\x08uint8_t";
  p_fields = "\x05data";
  p_fldcmts = "\x04\x052.";
  load_type(ltf, 100, "MenuScene", p_type, p_fields, "", p_fldcmts);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 101, "MenuPurchaseDelegate", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 102, "MenuPurchaseNewDelegate", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 103, "MenuOutsideData", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 104, "MenuContext", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 105, "MenuSystem", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 106, "MenuEffect", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 107, "MenuIcon", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 108, "MenuButton", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 109, "MenuBuyButton", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 110, "MenuPointIcon", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 111, "MenuSelectIcon", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 112, "MenuReplayIcon", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 113, "MenuMainBarIcon", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 114, "MenuHeadNode", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 115, "MenuRestoreNode", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 116, "MenuScrollText", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 117, "MenuPlayNode", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 118, "MenuUpgradeNode", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 119, "MenuEventRankNode", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 120, "MenuEventRankMoreNode", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 121, "MenuHelpNode", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 122, "MenuNoticeNode", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 123, "MenuNodeList", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 124, "MenuSlideList", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 125, "MenuHelpPageList", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 126, "MenuMainBar", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 127, "MenuLevelGauge", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 128, "MenuRouteView", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 129, "MenuNodeWidget", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 130, "MicSettingMenu", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 131, "ModeSelectMenu", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 132, "LogInBonusMenu", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 133, "OptionMenu", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 134, "SpecialEventEndMenu", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 135, "SpecialEventStartMenu", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 136, "StartMenu", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 137, "MenuDialog", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 138, "MenuDialogYesNo", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 139, "MenuOptionSelectList", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 140, "MenuTitleBar", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 141, "MenuDifficulyInfo", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 142, "ModeSelectBuyButton", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 143, "LabelWidget", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 144, "GaugeWidget", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 145, "SlideBarWidget", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 146, "SlideBarControlWidget", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 147, "CheckBoxWidget", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 148, "RadioButtonWidget", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 149, "StartMenuSelectIcon", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 150, "StartMenuButtonBase", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 151, "StartMenuTaitoIdButton", p_type);
  p_type = "\x0D!=\x09uint64_t=\x09uint64_t=\x09uint64_t=\x09uint64_t";
  p_fields = "\x03a1\x03a2\x03a3\x03a4";
  p_fldcmts = "\x04\x053.\x04\x054.\x04\x055.\x04\x056.";
  load_type(ltf, 152, "TitleScene", p_type, p_fields, "", p_fldcmts);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 153, "ogIniFileParser", p_type);
  p_type = "\x0DI\xF1@=\x08uint8_t\x1B\x04=\x08uint8_t=\x09uint64_t=\x09uint64_t=\x09"
    "uint64_t\x1B\x05=\x08uint8_t=\x09uint64_t=\x09uint64_t=\x09uint64_t";
  p_fields = "\x07byte_0\x09padding1\x08qword_4\x09qword_12\x09qword_20\x09padding2\x09"
    "qword_32\x09qword_40\x09qword_48";
  p_fldcmts = "\x04\x053.\x04\x054.\x04\x055.\x04\x056.\x04\x057.\x04\x058.\x04\x059."
    "\x05\x0510.\x05\x0511.";
  load_type(ltf, 154, "MtxFileManager", p_type, p_fields, "", p_fldcmts);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 155, "MtxGameCenterManager", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 156, "EffectData", p_type);
  p_type = "\x0D\x09\x1B]=\x08uint8_t";
  p_fields = "\x05data";
  p_fldcmts = "\x04\x052.";
  load_type(ltf, 157, "MtxEffectManager", p_type, p_fields, "", p_fldcmts);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 158, "MtxFont", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 159, "MtxGraphics3D", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 160, "MtxModelLayer", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 161, "MtxModelEnvelopeInfo", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 162, "MtxModelSceneItem", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 163, "MtxModelScene", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 164, "MtxModelData", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 165, "MtxModelControl", p_type);
  p_type = "\x0DQ=\x09uint32_t=\x09uint32_t=\x09uint64_t=\x09uint64_t=\x09uint64_t"
    "=\x09uint32_t=\x09uint32_t=\x09uint64_t=\x09uint64_t=\x09uint64_t";
  p_fields = "\x03a1\x03a2\x03a3\x03a4\x03a5\x03a6\x03a7\x03a8\x03a9\x04a10";
  p_fldcmts = "\x04\x053.\x04\x054.\x04\x055.\x04\x056.\x04\x057.\x04\x058.\x04\x059."
    "\x05\x0510.\x05\x0511.\x05\x0512.";
  load_type(ltf, 166, "MtxModelDataManager", p_type, p_fields, "", p_fldcmts);
  p_type = "\x0D\x09\x1B\x08=\x09uint64_t";
  p_fields = "\x05data";
  p_fldcmts = "\x04\x053.";
  load_type(ltf, 167, "MtxTexture", p_type, p_fields, "", p_fldcmts);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 168, "UVList", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 169, "rfUnzipCpp", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 170, "MtxPurchaseNewManager", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 171, "vector2", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 172, "vector3", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 173, "vector4", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 174, "matrix44", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 175, "spherePolar", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 176, "camera3D", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 177, "RotateHPB", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 178, "Quaternion", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 179, "ScaleRotateTranslate", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 180, "color4f", p_type);
  p_type = "\x0D\x09\x1B\x19=\x08uint8_t";
  p_fields = "\x05data";
  p_fldcmts = "\x04\x052.";
  load_type(ltf, 181, "MtxMessageManager", p_type, p_fields, "", p_fldcmts);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 182, "rfNetworkCpp", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 183, "base64", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 184, "WebViewController", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 185, "WebViewSource", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 186, "MtxSoundBuffer", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 187, "MtxSoundManager", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 188, "MtxSoundSource", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 189, "MtxThread", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 190, "MtxTouchPanel", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 191, "HSBColor", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 192, "MtxView", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 193, "std::__Named_exception", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 194, "std::ios_base", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 195, "std::locale::facet", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 196, "std::_Locale_impl", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 197, "std::__malloc_alloc", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 198, "std::__node_alloc", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 199, "std::priv", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 200, "std::_Filebuf_base", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 201, "ogXmlTreeManager", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 202, "CGame::CCore::TouchEventReceiver", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 203, "UserPreferences", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 204, "mtxc::MtxcDecodeVorbis", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 205, "mtxc::MtxMMapFile", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 206, "mtxc::MtxcTexture", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 207, "mtxc::MtxcTouchPad", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 208, "mtxc::MtxcTouchPad::EventPool", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 209, "mtxc::CFileManager", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 210, "TuneGameData", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 211, "TuneMarkSet", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 212, "HelpMenu", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 213, "MenuOptionNode", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 214, "MenuDifficulyTab", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 215, "aesManager", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 216, "MtxBoneInfo", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 217, "MtxModelPointInfo", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 218, "rfServerManager", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 219, "bytearray", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 220, "intarray", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 221, "std::ios_base::failure", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 222, "std::locale", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 223, "NoahManager", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 224, "mtxc::ZipDeflate", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 225, "tinyxml2::XMLAttribute", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 226, "IniFileElement", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 227, "StageProduct", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 228, "MenuSelectList", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 229, "MenuFacebookButton", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 230, "SystemClass", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 231, "WebViewWithIAP", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 232, "std::logic_error", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 233, "std::runtime_error", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 234, "std::domain_error", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 235, "std::invalid_argument", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 236, "std::length_error", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 237, "std::out_of_range", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 238, "std::range_error", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 239, "std::overflow_error", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 240, "std::underflow_error", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 241, "std::_Locale_impl::Init", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 242, "mtxc::MtxTextureUtil", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 243, "MtxModelMesh", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 244, "GameMain", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 245, "UIDevice", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 246, "std::istream", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 247, "std::ostream", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 248, "std::string", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 249, "std::ios_base::Init", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 250, "std::iostream", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 251, "std::priv::_Pthread_alloc", p_type);
  p_type = "\x1DQ\xD1\x1B\x02%\x1B\x03$\x1B\x05#\x1B\x09\"\x1B\x02\x05\x1B\x03\x04"
    "\x1B\x05\x03\x1B\x09\x02\x1B\x03\x09\x1B\x02\x19";
  p_fields = "\x08n64_u64\x08n64_u32\x08n64_u16\x07n64_u8\x08n64_i64\x08n64_i32\x08n"
    "64_i16\x07n64_i8\x08n64_f32\x08n64_f64";
  load_type(ltf, 252, "__n64", p_type, p_fields);
  p_type = "\x1DQ\xD1\x1B\x03%\x1B\x05$\x1B\x09#\x1B\x11\"\x1B\x03\x05\x1B\x05\x04"
    "\x1B\x09\x03\x1B\x11\x02\x1B\x05\x09\x1B\x03\x19";
  p_fields = "\x09n128_u64\x09n128_u32\x09n128_u16\x08n128_u8\x09n128_i64\x09n128_i3"
    "2\x09n128_i16\x08n128_i8\x09n128_f32\x09n128_f64";
  load_type(ltf, 253, "__n128", p_type, p_fields);
  p_type = "=\x06__n64";
  load_type(ltf, 254, "int8x8_t", p_type);
  p_type = "=\x06__n64";
  load_type(ltf, 255, "uint8x8_t", p_type);
  p_type = "=\x06__n64";
  load_type(ltf, 256, "int16x4_t", p_type);
  p_type = "=\x06__n64";
  load_type(ltf, 257, "int32x2_t", p_type);
  p_type = "=\x06__n64";
  load_type(ltf, 258, "uint16x4_t", p_type);
  p_type = "=\x06__n64";
  load_type(ltf, 259, "uint32x2_t", p_type);
  p_type = "=\x07__n128";
  load_type(ltf, 260, "int8x16_t", p_type);
  p_type = "=\x07__n128";
  load_type(ltf, 261, "int16x8_t", p_type);
  p_type = "=\x07__n128";
  load_type(ltf, 262, "int32x4_t", p_type);
  p_type = "=\x07__n128";
  load_type(ltf, 263, "int64x2_t", p_type);
  p_type = "=\x07__n128";
  load_type(ltf, 264, "uint8x16_t", p_type);
  p_type = "=\x07__n128";
  load_type(ltf, 265, "uint16x8_t", p_type);
  p_type = "=\x07__n128";
  load_type(ltf, 266, "uint32x4_t", p_type);
  p_type = "=\x07__n128";
  load_type(ltf, 267, "uint64x2_t", p_type);
  p_type = "=\x06__n64";
  load_type(ltf, 268, "poly8x8_t", p_type);
  p_type = "=\x06__n64";
  load_type(ltf, 269, "poly16x4_t", p_type);
  p_type = "=\x07__n128";
  load_type(ltf, 270, "poly16x8_t", p_type);
  p_type = "=\x07__n128";
  load_type(ltf, 271, "poly8x16_t", p_type);
  p_type = "=\x06__n64";
  load_type(ltf, 272, "float16x4_t", p_type);
  p_type = "=\x06__n64";
  load_type(ltf, 273, "float32x2_t", p_type);
  p_type = "=\x07__n128";
  load_type(ltf, 274, "float16x8_t", p_type);
  p_type = "=\x07__n128";
  load_type(ltf, 275, "float32x4_t", p_type);
  p_type = "=\x07__n128";
  load_type(ltf, 276, "float64x2_t", p_type);
  p_type = "=\x07__n128";
  load_type(ltf, 277, "poly128_t", p_type);
  p_type = "=\x0Aint16x4_t";
  load_type(ltf, 278, "int16x2_t", p_type);
  p_type = "=\x0Buint16x4_t";
  load_type(ltf, 279, "uint16x2_t", p_type);
  p_type = "=\x0Cfloat16x4_t";
  load_type(ltf, 280, "float16x2_t", p_type);
  p_type = "\x0D)\x0A\x01\x0A\x01\x0A\x01\x07\x07";
  p_fields = "\x08__stack\x09__gr_top\x09__vr_top\x0A__gr_offs\x0A__vr_offs";
  load_type(ltf, 281, "__va_list_tag", p_type, p_fields);
  p_type = "\x1B\x02=\x0E__va_list_tag";
  load_type(ltf, 282, "gcc_va_list", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 283, "_guard_variable_for_UserPreferences", p_type);
  p_type = "=\x0A__uint8_t";
  load_type(ltf, 284, "uint8_t", p_type);
  p_type = "\"";
  load_type(ltf, 285, "__uint8_t", p_type);
  p_type = "=\x0B__uint64_t";
  load_type(ltf, 286, "uint64_t", p_type);
  p_type = "%";
  load_type(ltf, 287, "__uint64_t", p_type);
  p_type = "\x0D\x09\x1B\x05=\x0Cfloat32x4_t";
  p_fields = "\x04val";
  load_type(ltf, 288, "float32x4x4_t", p_type, p_fields);
  p_type = "=\x0B__uint16_t";
  load_type(ltf, 289, "uint16_t", p_type);
  p_type = "#";
  load_type(ltf, 290, "__uint16_t", p_type);
  p_type = "\x0D\x01\x01";
  load_type(ltf, 291, "_guard_variable_for_rfServerManager", p_type);
  p_type = "-\x0D\xC0@A\x88\x80@ABB\x9F\xFF\xF7\xFFz\x9F\xFF\xFF\xFF\x7F\x9F\xFF\xFF"
    "\xFF\x7F\x9F\xFF\xFF\xFF\x7FDA";
  p_fields = "\x0AJNI_FALSE\x09JNI_TRUE\x10JNI_VERSION_1_1\x10JNI_VERSION_1_2\x10JNI"
    "_VERSION_1_4\x10JNI_VERSION_1_6\x07JNI_OK\x08JNI_ERR\x0EJNI_EDETACHED\x0D"
    "JNI_EVERSION\x0BJNI_COMMIT\x0AJNI_ABORT";
  load_type(ltf, 292, "MACRO_JNI", p_type, p_fields);
  p_type = "MA\x0A\x01\x0A\x01\x0A\x01\x0A\x0C\x11=\x05jint\x02\x0A=\x07JavaVM\x0A"
    "\x0C\x11=\x05jint\x04\x0A=\x07JavaVM\x0A\x0A=\x07JNIEnv\x0A\x01\x0A\x0C"
    "\x11=\x05jint\x02\x0A=\x07JavaVM\x0A\x0C\x10=\x05jint\x04\x0A=\x07Java"
    "VM\x0A\x0A=\x07JNIEnv=\x05jint\x0A\x0C\x11=\x05jint\x04\x0A=\x07JavaVM"
    "\x0A\x0A=\x07JNIEnv\x0A\x01";
  p_fields = "\x0Areserved0\x0Areserved1\x0Areserved2\x0EDestroyJavaVM\x01\x14Attach"
    "CurrentThread\x01\x01\x01\x14DetachCurrentThread\x01\x07GetEnv\x01\x01"
    "\x01\x1CAttachCurrentThreadAsDaemon";
  load_type(ltf, 293, "JNIInvokeInterface", p_type, p_fields);
}

//------------------------------------------------------------------------
// Information about local types

static LocalTypes()
{
  LocalTypes_0();
}

// End of file.
