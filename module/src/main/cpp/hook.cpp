
#include <cstring>
#include <cstdio>
#include <unistd.h>
#include <sys/system_properties.h>
#include <dlfcn.h>
#include <dobby.h>
#include "KittyMemory/MemoryPatch.h"
#include <dlfcn.h>
#include <cstdlib>
#include <cinttypes>
#include <string>
#include <vector>
#include <sstream>
#include <fstream>
#include <EGL/egl.h>
#include <GLES2/gl2.h>
#include "imgui.h"
#include "imgui_internal.h"
#include "backends/imgui_impl_opengl3.h"
#include "backends/imgui_impl_android.h"
#include "Chams.h"
#include "Includes/Roboto-Regular.h"
#include "Includes/autoicons.h"
int glHeight, glWidth;
bool setupimg;
#include "hook.h"
#include "Substrate/SubstrateHook.h"
#include "Substrate/CydiaSubstrate.h"
const char *libName = "libil2cpp.so";
#include <chrono>
#include <thread>
#include "Includes/autofont.h"
float fjdis;

#include "Unity/Vectorr3.h"
#include "Unity/Vector2.h"
#include "Unity/Rect.h"
#include "Unity/Vector3.h"
#include "Unity/Quaternion.h"
#include "Includes/obfuscate.h"
#define RGBA_TO_FLOAT(r,g,b,a) (float)r/255.0f, (float)g/255.0f, (float)b/255.0f, (float)a/255.0f
#include <time.h>

#include "Unity/Color.h"
uint32_t getTick() {
    struct timespec ts;
    unsigned theTick = 0U;
    clock_gettime( CLOCK_REALTIME, &ts );
    theTick  = ts.tv_nsec / 1000000;
    theTick += ts.tv_sec * 1000;
    return theTick;
}

bool svaston = false;
ImVec4 svclr;
using namespace KittyMemory;
enum skini// TypeDefIndex: 1467
{

    None = 0,
    MedalAssistanceBronze = 100,
    MedalAssistanceSilver = 101,
    MedalAssistanceGold = 102,
    MedalAssistancePlatinum = 103,
    MedalAssistanceBrilliant = 104,
    MedalVeteran2018Bronze = 105,
    MedalVeteran2018Silver = 106,
    MedalVeteran2018Gold = 107,
    MedalVeteran2018Platinum = 108,
    MedalVeteran2019Bronze = 109,
    MedalVeteran2019Silver = 110,
    MedalVeteran2019Gold = 111,
    MedalVeteran2019Platinum = 112,
    Medal2YearsSilver = 113,
    Medal2YearsGold = 114,
    MedalCompetitiveBronze = 115,
    MedalCompetitiveSilver = 116,
    MedalCompetitiveGold = 117,
    MedalCompetitivePlatinum = 118,
    MedalCompetitiveBrilliant = 119,
    MedalNewYearMadness2020Bronze = 120,
    MedalNewYearMadness2020Silver = 121,
    MedalNewYearMadness2020Gold = 122,
    MedalNewYearMadness2020Platinum = 123,
    MedalNewYearMadness2020Brilliant = 124,
    MedalVeteran2020Bronze = 125,
    MedalVeteran2020Silver = 126,
    MedalVeteran2020Gold = 127,
    MedalVeteran2020Platinum = 128,
    OriginCase = 301,
    FuriousCase = 302,
    RivalCase = 303,
    FableCase = 304,
    OriginBox = 401,
    FuriousBox = 402,
    RivalBox = 403,
    FableBox = 404,
    GiftNewYear2019 = 501,
    TwoYearsEventGoldPass = 601,
    NewYearMadness2020GoldPass = 602,
    ProjectZ9GoldPass = 603,
    Halloween2019StickersPack = 701,
    XP_500Xp = 801,
    XP_1000Xp = 802,
    G22PixelCamouflage = 11001,
    G22Nest = 11002,
    G22Pattern = 11005,
    G22Inferno = 11006,
    G22FrostWyrm = 11008,
    G22NestStatTrack = 1011002,
    G22FrostWyrmStatTrack = 1011008,
    USP_2Years = 12002,
    USP_2YearsRed = 12003,
    P350Cyber = 13001,
    P350Savannah = 13002,
    P350ForestSpirit = 13003,
    P350Rally = 13004,
    P350Skull = 13005,
    P350CyberStatTrack = 1013001,
    P350ForestSpiritStatTrack = 1013003,
    P350RallyStatTrack = 1013004,
    UMP45Cyberpunk = 32001,
    UMP45Pixel = 32002,
    UMP45Shark = 32003,
    UMP45Winged = 32004,
    UMP45Beast = 32005,
    UMP45Iron = 32006,
    UMP45CyberpunkStatTrack = 1032001,
    UMP45SharkStatTrack = 1032003,
    UMP45WingedStatTrack = 1032004,
    UMP45BeastStatTrack = 1032005,
    MP7Offroad = 34001,
    MP7Arcade = 34002,
    MP7_2Years = 34003,
    MP7_2YearsRed = 34004,
    MP7OffroadStatTrack = 1034001,
    MP7ArcadeStatTrack = 1034002,
    P90Radiation = 35001,
    P90Ghoul = 35002,
    P90Fury = 35003,
    P90Pilot = 35004,
    P90GhoulStatTrack = 1035002,
    DeagleCaptainMorgan = 15001,
    DeagleBlood = 15002,
    DeaglePredator = 15003,
    DeagleRedDragon = 15004,
    DeagleWinner = 15005,
    DeagleDragonGlass = 15006,
    DeagleThunder = 15007,
    DeaglePredatorStatTrack = 1015003,
    DeagleRedDragonStatTrack = 1015004,
    DeagleDragonGlassStatTrack = 1015006,
    AKRTreasureHunter = 44002,
    AKRTiger = 44003,
    AKRSport = 44004,
    AKRNecromancer = 44005,
    AKRCarbon = 44006,
    AKR_2Years = 44007,
    AKRTreasureHunterStatTrack = 1044002,
    AKRSportStatTrack = 1044004,
    AKRCarbonStatTrack = 1044006,
    AKRNecromancerStatTrack = 1044005,
    AKR12Railgun = 45001,
    AKR12PixelCamouflage = 45002,
    AKR12Mechanic = 45003,
    AKR12Aurora = 45004,
    AKR12RailgunStatTrack = 1045001,
    AKR12PixelCamouflageStatTrack = 1045002,
    M4Predator = 46001,
    M4Necromancer = 46002,
    M4Tiger = 46003,
    M4Pro = 46006,
    M4GrandPrix = 46007,
    M4NecromancerStatTrack = 1046002,
    M4ProStatTrack = 1046006,
    M4GrandPrixStatTrack = 1046007,
    M16Camouflage = 47001,
    M16Winged = 47002,
    M16Facet = 47003,
    M16WingedStatTrack = 1047002,
    FamasBeagle = 48001,
    FamasFury = 48002,
    FamasHull = 48003,
    FamasBeagleStatTrack = 1048001,
    FamasFuryStatTrack = 1048002,
    FamasHullStatTrack = 1048003,
    AWMSport = 51001,
    AWMPhoenix = 51002,
    AWMGear = 51003,
    AWMScratch = 51004,
    AWMGenesis = 51007,
    AWM_2YearsRed = 51008,
    AWMPhoenixStatTrack = 1051002,
    AWMGearStatTrack = 1051003,
    AWMScratchStatTrack = 1051004,
    AWMGenesisStatTrack = 1051007,
    M40Quake = 52001,
    M40Pro = 52002,
    M40Beagle = 52003,
    M40QuakeStatTrack = 1052001,
    M40BeagleStatTrack = 1052003,
    SM1014Facet = 62001,
    SM1014Pathfinder = 62002,
    SM1014Necromancer = 62003,
    SM1014NorthernCamouflage = 62004,
    SM1014Quake = 62005,
    SM1014Branches = 62006,
    SM1014PathfinderStatTrack = 1062002,
    SM1014NecromancerStatTrack = 1062003,
    M9BayonetBlueBlood = 71001,
    M9BayonetAncient = 71002,
    M9BayonetScratch = 71003,
    M9BayonetUniverse = 71004,
    M9ByonetDragonGlass = 71005,
    KarambitClaw = 72002,
    KarambitIceDragon = 72004,
    KarambitScratch = 72006,
    KarambitUniverse = 72007,
    jKommandoAncient = 73002,
    jKommandoReaper = 73003,
    jKommandoFloral = 73004,
    jKommandoLuxury = 73006,
    FnFAL_Leather = 44901,
    G22_Relic = 41101,
    KarambitGold = 72003,
    AWMSportV2 = 51006,
    USPGenesis = 12001,
    DaggerKnife_Harmony = 180000,
    GoldSkull = 1101,
    Punisher = 1102,
    MadBat = 1103,
    InfernalSkull = 1104,
    Ghoul = 1105,
    Batrider = 1106,
    GangstaPumpkin = 1107,
    Snot = 1108,
    Devilish = 1109,
    HurryGhost = 1110,
    Feed = 1111,
    Anticamper = 1112,
    S1001 = 1113,
    BloodyClown = 1114,
    Ghosty = 1115,
    Mummy = 1116,
    Rush = 1117,
    EvilPumpkin = 1118,
    Zombie = 1119,
    Dracula = 1120,
    AKR_Worm = 44401,
    Butterfly_Gold = 47502,
    Butterfly_DragonGlass = 47503,
    Butterfly_Red = 47504,
    Butterfly_Starfall = 47505,
    Deagle_Ace = 41502,
    Deagle_Ace_StatTrack = 1041502,
    FiveSeven_Venom = 41701,
    FiveSeven_Venom_StatTrack = 1041701,
    FiveSeven_Tactical = 41703,
    FiveSeven_Tactical_StatTrack = 1041703,
    FnFAL_AcidCarbon = 44902,
    FnFAL_Tactical = 44903,
    FnFAL_Tactical_StatTrack = 1044903,
    G22_Starfall = 41102,
    G22_Starfall_StatTrack = 1041102,
    M4_Lizard = 44601,
    M4_Lizard_StatTrack = 1044601,
    M4_Samurai = 44603,
    M4_Samurai_StatTrack = 1044603,
    M110_Cyber = 45301,
    M110_Cyber_StatTrack = 1045301,
    SM1014_Blaster = 45302,
    MP7_Thorn = 43401,
    MP7_Lich = 43402,
    MP7_Lich_StatTrack = 1043402,
    P90_Jungle = 43502,
    Tec9_Aurora = 41601,
    Tec9_Fable = 41605,
    Tec9_Fable_StatTrack = 1041605,
    UMP45_PixelV2 = 43201,
    UMP45_Cerberus = 43202,
    UMP45_Cerberus_StatTrack = 1043202,
    USP_Fiend = 41201,
    USP_Pisces = 41212,
    USP_Pisces_StatTrack = 1041212,
    FiveSeven_New2 = 51701,
    Tec9_New3 = 51601,
    AKR_New2 = 54401,
    M4_New2 = 54601,
    Butterfly_New1 = 57501,
    FlipKnife_New1 = 67701,
    FlipKnife_New2 = 67702,
    FlipKnife_New3 = 67703,
    FlipKnife_New4 = 67704,
    FlipKnife_New5 = 67705,
    AMW_New1 = 65101,
    AMW_New1_StatTrack = 1065101,
    G22_New1 = 61101,
    G22_New1_StatTrack = 1061101,
    M40_New1 = 65201,
    M40_New1_StatTrack = 1065201,
    M40_New2 = 65202,
    M40_New2_StatTrack = 1065202,
    MP7_New1 = 63401,
    MP7_New1_StatTrack = 1063401,
    SM1014_New1 = 66201,
    SM1014_New1_StatTrack = 1066201,
    Tec9_New1 = 61601,
    Tec9_New1_StatTrack = 1061601,
    USP_New1 = 61201,
    USP_New1_StatTrack = 1061201,
    Sticker_New1 = 1121,
    Sticker_New2 = 1122,
    Sticker_New3 = 1123,
    Sticker_New4 = 1124,
    Sticker_New5 = 1125,
    Sticker_New6 = 1126,
    Sticker_New7 = 1127,
    Sticker_New8 = 1128,
    Sticker_New9 = 1129,
    Sticker_New10 = 1130,
    Sticker_New11 = 1131,
    Sticker_New12 = 1132,
    FAMAS_Monster = 74800,
    FAMAS_Monster_StatTrack = 1074800,
    FiveSeven_Poison = 71701,
    FiveSeven_Poison_StatTrack = 1071701,
    FiveSeven_Zone = 71702,
    FiveSeven_Zone_StatTrack = 1071702,
    G22_Monster = 71103,
    G22_Monster_StatTrack = 1071103,
    G22_WhiteCarbon = 71104,
    G22_WhiteCarbon_StatTrack = 1071104,
    M40_Monster = 75205,
    M40_Monster_StatTrack = 1075205,
    P350_Poison = 71306,
    P350_Poison_StatTrack = 1071306,
    Tec9_Reactor = 71607,
    Tec9_Reactor_StatTrack = 1071607,
    UMP45_Gas = 73208,
    UMP45_Gas_StatTrack = 1073208,
    UMP45_WhiteCarbon = 73209,
    UMP45_WhiteCarbon_StatTrack = 1073209,
    MP5_ProjectZ9 = 73610,
    MP5_ProjectZ9_StatTrack = 1073610,
    MP5_Reactor = 73611,
    MP5_Reactor_StatTrack = 1073611,
    MP5_Zone = 73612,
    MP5_Zone_StatTrack = 1073612,
    FabM_Reactor = 76218,
    FabM_Reactor_StatTrack = 1076218,
    Kunai_Bone = 77813,
    Kunai_Luxury = 77814,
    Kunai_Poison = 77815,
    Kunai_Radiation = 77816,
    Kunai_Reaper = 77817,
    Sticker_Biohazard = 1133,
    Sticker_Danger = 1134,
    Sticker_DangerZone = 1135,
    Sticker_DropTheBomb = 1136,
    Sticker_GasMask = 1137,
    Sticker_Z9Mask = 1138,
    Sticker_Z9MaskColor = 1139,
    Sticker_Murder = 1140,
    Sticker_RadiateHeat = 1141,
    Sticker_Radiation = 1142,
    Sticker_SmokeGrenade = 1143,
    Sticker_Toxic = 1144,
    Sticker_ToxicColor = 1145,
    Sticker_Z9Project = 1146,
    Sticker_Z9ProjectGold = 1147,
    ProjectZ9Bronze = 129,
    ProjectZ9Silver = 130,
    ProjectZ9Gold = 131,
    ProjectZ9Platinum = 132,
    ProjectZ9Brilliant = 133,
    CharmProjectZ9Bronze = 5000,
    CharmProjectZ9Silver = 5001,
    CharmProjectZ9Gold = 5002,
    CharmProjectZ9EliteGold = 5003,
    CharmProjectZ9Platinum = 5004,
    CharmProjectZ9Diamond = 5005,
    ScorpionCase = 305,
    ScorpionBox = 405,
    AKR12_Carbon = 84500,
    AKR12_Carbon_StatTrack = 1084500,
    AKR12_Spring = 84501,
    AKR_Dragon = 84402,
    AKR_Dragon_StatTrack = 1084402,
    AKR_Nano = 84403,
    AKR_Nano_StatTrack = 1084403,
    AWM_TreasureHunter = 85104,
    Deagle_Pro = 81505,
    FnFal_Green = 84906,
    G22_Carbon = 81107,
    G22_Carbon_StatTrack = 1081107,
    G22_YellowLine = 81108,
    MP7_Girl = 83409,
    MP7_Graffity = 83410,
    MP7_Graffity_StatTrack = 1083410,
    MP7_Monkey = 83411,
    MP7_Monkey_StatTrack = 1083411,
    P90_Samurai = 83512,
    P90_Samurai_StatTrack = 1083512,
    Tec9_Spot = 81613,
    USP_Line = 81214,
    USP_Yellow = 81215,
    SM1014_Shark = 86216,
    SM1014_Shark_StatTrack = 1086216,
    FabM_Green = 86317,
    FabM_Parrot = 86318,
    FabM_Parrot_StatTrack = 1086318,
    Scorpion_Camouflage = 87919,
    Scorpion_Green = 87920,
    Scorpion_Scratch = 87921,
    Scorpion_Sky = 87922,
    P350_Nano = 81323,
    M4_Wolf = 84624,
    M4_Wolf_StatTrack = 1084624,
    FiveSeven_SightRed = 81725,
    FiveSeven_SightGrey = 81726,
    FiveSeven_SightGrey_StatTrack = 1081726,
    AWM_Dragon = 85127,
    AWM_Dragon_StatTrack = 1085127,
    RainbowStickerPack = 702,
    Sticker_Minus28 = 1200,
    Sticker_AWPMaster = 1201,
    Sticker_AWPMasterColor = 1202,
    Sticker_Dragon = 1203,
    Sticker_EntryKill = 1204,
    Sticker_GrenadeWithLove = 1205,
    Sticker_HeadshotZone = 1206,
    Sticker_King = 1207,
    Sticker_NiceSkill = 1208,
    Sticker_NiceSkillColor = 1209,
    Sticker_Pro = 1210,
    Sticker_Samurai = 1211,
    Sticker_SpareGold = 1212,
    Sticker_StrikeColor = 1213,
    Sticker_V2 = 1214,
    Sticker_V2Pro = 1215,
    Sticker_DeagleMaster = 1216,
    Sticker_DeagleMasterColor = 1217,
    Sticker_LuckyStar = 1218,
    RevivalGoldPass = 604,
    GlovesPhoenix = 3000,
    GlovesAutumn = 3001,
    GlovesGeometric = 3002,
    GlovesRetroWave = 3003,
    GlovesLivingFlame = 3004,
    GlovesNeuro = 3005,
    CharmRevivalBronze = 5006,
    CharmRevivalSilver = 5007,
    CharmRevivalGold = 5008,
    CharmRevivalEliteGold = 5009,
    CharmRevivalPlatinum = 5010,
    CharmRevivalDiamond = 5011,
    Shield_RevivalBronze = 1282,
    Shield_RevivalSilver = 1283,
    Shield_RevivalGold = 1284,
    Shield_RevivalEliteGold = 1285,
    Shield_RevivalPlatinum = 1286,
    Shield_RevivalDiamond = 1287,
    ChibiPsychoCaptured = 5012,
    CharmV2 = 5013,
    Charm3Deleted = 5014,
    Charm4Deleted = 5015,
    CharmCuttingPliers = 5016,
    Charm6Deleted = 5017,
    ChibiPsycho = 5018,
    Charm8Deleted = 5019,
    CharmOchpochmak = 5020,
    CharmSamurai = 5021,
    CharmKarambitGold = 5022,
    ChibiDummy = 5023,
    ChibiJoy = 5024,
    CharmGrenade = 5025,
    ChibiEsperto = 5026,
    ChibiPhoenix = 5027,
    Charm17Deleted = 5028,
    CharmFeather = 5029,
    CharmFlame = 5030,
    CharmClaw = 5031,
    CharmAmmunition = 5032,
    CharmWing = 5033,
    AKR12_Geometric = 84400,
    AKR12_Geometric_StatTrack = 1084400,
    FabM_Flight = 86300,
    FabM_Flight_StatTrack = 1086300,
    Famas_Autumn = 84800,
    Famas_Autumn_StatTrack = 1084800,
    FiveSeven_Rush = 81700,
    FiveSeven_Rush_StatTrack = 1081700,
    FnFal_Phoenix = 84900,
    FnFal_Phoenix_StatTrack = 1084900,
    M4_Revival = 84600,
    M4_Revival_StatTrack = 1084600,
    M110_Transition = 85300,
    M110_Transition_StatTrack = 1085300,
    MP7_Revival = 83400,
    MP7_Revival_StatTrack = 1083400,
    P350_Autumn = 81300,
    P350_Autumn_StatTrack = 1081300,
    UMP45_Geometric = 83200,
    UMP45_Geometric_StatTrack = 1083200,
    UMP45_Spirit = 83201,
    UMP45_Spirit_StatTrack = 1083201,
    USP_Geometric = 81200,
    USP_Geometric_StatTrack = 1081200,
    StickerBigBoy = 1220,
    StickerFireColor = 1221,
    StickerHotGunColor = 1222,
    StickerInfernalMachineColor = 1223,
    StickerNeonColor = 1224,
    StickerNotToday = 1225,
    StickerPhoenixBlazonColor = 1226,
    StickerPhoenixBlazonGold = 1227,
    StickerPhoenixColor = 1228,
    StickerRage = 1229,
    StickerRebirthColor = 1230,
    StickerShooter = 1231,
    BadgeRevivalBronze = 134,
    BadgeRevivalSilver = 135,
    BadgeRevivalGold = 136,
    BadgeRevivalEliteGold = 137,
    BadgeRevivalPlatinum = 138,
    BadgeRevivalDiamond = 139,
    Halloween2020CharmsPack = 901,
    CharmHalloweenSpirit = 5040,
    CharmVampireBat = 5041,
    CharmReaperScythe = 5042,
    CharmSpookyLantern = 5043,
    CharmSuspiciousSpider = 5044,
    CharmHorsemansHead = 5045,
    CharmBrainless = 5046,
    CharmFriendlySpecter = 5047,
    CharmScarecrow = 5048,
    CharmCrunch = 5049,
    CharmMeteor = 5050,
    CharmWitchcraft = 5051,
    CharmCrookedBroom = 5052,
    NewYear2021GoldPass = 605,
    BadgeNewYear2021Bronze = 140,
    BadgeNewYear2021Silver = 141,
    BadgeNewYear2021Gold = 142,
    BadgeNewYear2021EliteGold = 143,
    BadgeNewYear2021Platinum = 144,
    BadgeNewYear2021Diamond = 145,
    StickerPewnguin = 1232,
    StickerGreenSinister = 1233,
    StickerCandyCane = 1234,
    StickerCandyCaneColor = 1235,
    StickerFrostyStorm = 1236,
    StickerFlake = 1237,
    StickerFlakeHolo = 1238,
    StickerPolarClarity = 1239,
    StickerIronOx = 1240,
    StickerGoldenOx = 1241,
    StickerWinterFun = 1242,
    StickerWinterFunColor = 1243,
    CharmSnowBear = 5053,
    CharmYearOfOx = 5054,
    CharmIceCrystalDeleted = 5056,
    CharmCone = 5057,
    CharmSnowflake = 5058,
    CharmBabyPenguin = 5059,
    CharmGingerbread = 5060,
    CharmMrBowler = 5061,
    CharmGiftCatcher = 5062,
    CharmChristmasTree = 5063,
    CharmSantaGlobe = 5064,
    CharmSantaHelper = 5065,
    CharmGiftThief = 5066,
    AKA12_Flow = 94400,
    AKA12_Flow_StatTrack = 1094400,
    AWM_PolarNight = 95100,
    AWM_PolarNight_StatTrack = 1095100,
    M16_IronWill = 94700,
    M16_IronWill_StatTrack = 1094700,
    M110_Flow = 95300,
    M110_Flow_StatTrack = 1095300,
    MP5_NorthernFury = 93600,
    MP5_NorthernFury_StatTrack = 1093600,
    MP7_Blizzard = 93400,
    MP7_Blizzard_StatTrack = 1093400,
    P90_IronWill = 93500,
    P90_IronWill_StatTrack = 1093500,
    P350_Blizzard = 91300,
    P350_Blizzard_StatTrack = 1091300,
    KnifeButterfly_ColdFlam = 97500,
    jKommando_Frozen = 97300,
    KnifeKarambit_ColdFlame = 97200,
    KnifeKarambit_Frozen = 97201,
    KnifeKarambit_SnowCamo = 97203,
    KunaiKnife_ColdFlame = 97800,
    KunaiKnife_SnowCamo = 97801,
    KnifeBayonet_Frozen = 97100,
    FlipKnife_SnowCamo = 97700,
    ScorpionKnife_ColdFlame = 97900,
    MedalVeteran2021Bronze = 146,
    MedalVeteran2021Silver = 147,
    MedalVeteran2021Gold = 148,
    MedalVeteran2021Platinum = 149,
    MedalVeteran2021Diamond = 150,
    FourYearGoldPass = 606,
    AKR12_4Years = 104400,
    M16_4Years = 104700,
    MP5_4Years = 103500,
    UMP45_4Years = 103200,
    P350_4Years = 101300,
    Sticker_4Years = 1244,
    Sticker_4YearsColor = 1245,
    Sticker_4YearsMetallic = 1246,
    Charm_4YearsSilver = 5067,
    Charm_4YearsGold = 5068,
    Medal4YearsSilver = 151,
    Medal4YearsGold = 152,
    Sticker_Brick = 1247,
    Sticker_Carpet = 1248,
    Sticker_Grapes = 1249,
    Sticker_Humvee = 1250,
    Sticker_Pizza = 1251,
    Sticker_Province = 1252,
    Sticker_ProvinceGold = 1253,
    Sticker_Rust = 1254,
    Sticker_RustMetallic = 1255,
    Sticker_Sandstone = 1256,
    Sticker_SandstoneGold = 1257,
    Sticker_SectorB = 1258,
    Sticker_Target = 1259,
    Sticker_Zone9 = 1260,
    Sticker_Zone9Color = 1261,
    EmpireCase = 306,
    EmpireBox = 406,
    AKR_Scale = 124400,
    AKR12_Roar = 124500,
    AWM_BOOM = 125100,
    AWM_BOOM_StatTrack = 1125100,
    Deagle_Orochi = 121500,
    Deagle_Orochi_StatTrack = 1121500,
    Famas_Anger = 124800,
    Famas_Anger_StatTrack = 1124800,
    G22_Scale = 121100,
    M4_Demon = 124600,
    M4_Demon_StatTrack = 1124600,
    M4A1_Bubblegum = 124300,
    M4A1_Bubblegum_StatTrack = 1124300,
    M60_Grunge = 126400,
    M60_Grunge_StatTrack = 1126400,
    MP7_Empire = 123400,
    MP7_Empire_StatTrack = 1123400,
    AWM_Elevation = 125101,
    FabM_CursedFire = 126300,
    M4A1_Kitsune = 124301,
    M4A1_Kitsune_StatTrack = 1124301,
    M40_CursedFire = 125200,
    M60_SteamBeast = 126401,
    M60_SteamBeast_StatTrack = 1126401,
    SM1014_Tropic = 126201,
    P350_Oni = 121300,
    P350_Oni_StatTrack = 1121300,
    Tec9_Tropic = 121600,
    Tec9_Tropic_StatTrack = 1121600,
    UMP45_PeacefulDream = 123200,
    USP_Chameleon = 121200,
    USP_Chameleon_StatTrack = 1121200,
    GlovesBurningFists = 3006,
    GlovesPun = 3007,
    GlovesChampion = 3008,
    GlovesSteamRider = 3009,
    DragonRiseGoldPass = 607,
    Sticker_Ambush = 1262,
    Sticker_Koi = 1263,
    Sticker_KoiColor = 1264,
    Sticker_Akuma = 1265,
    Sticker_Kunoichi = 1266,
    Sticker_Kitsune = 1267,
    Sticker_NeonDragon = 1268,
    Sticker_NeonDragonColor = 1269,
    Sticker_FluffyAssassin = 1270,
    Sticker_SunsetGold = 1271,
    Sticker_EmperorsGuard = 1272,
    Sticker_ZenChipColor = 1273,
    AKR12_Armored = 134500,
    AKR12_Armored_StatTrack = 1134500,
    Deagle_Mafia = 131500,
    Deagle_Mafia_StatTrack = 1131500,
    FiveSeven_Enforcer = 131700,
    FiveSeven_Enforcer_StatTrack = 1131700,
    M4_RONINmk56 = 134600,
    M4_RONINmk56_StatTrack = 1134600,
    M4A1_KINGv703 = 134300,
    M4A1_KINGv703_StatTrack = 1134300,
    M16_Triumphant = 134700,
    M16_Triumphant_StatTrack = 1134700,
    M60_Mecha = 136400,
    M60_Mecha_StatTrack = 1136400,
    M110_Z07MARKSMAN = 135300,
    M110_Z07MARKSMAN_StatTrack = 1135300,
    P90_RONINmk9 = 133500,
    P90_RONINmk9_StatTrack = 1133500,
    AKR12_Transistor = 134501,
    AKR12_Transistor_StatTrack = 1134501,
    M60_Y20RAIJIN = 136401,
    M60_Y20RAIJIN_StatTrack = 1136401,
    P90_Z50FUJIN = 133501,
    P90_Z50FUJIN_StatTrack = 1133501,
    KnifeTanto_Dojo = 138000,
    KnifeTanto_Mafia = 138001,
    KnifeTanto_Malachite = 138002,
    KnifeTanto_PearlAbyss = 138003,
    KnifeTanto_Transistor = 138004,
    KnifeTanto_Flow = 138005,
    Charm_ImperialCoin = 5069,
    Charm_Daruma = 5070,
    Charm_SecretData = 5071,
    Charm_GoldenDragon = 5072,
    Charm_Katana = 5073,
    Charm_Kitsune = 5074,
    Charm_Chochin = 5075,
    Charm_BallisticMask = 5076,
    Charm_Shuriken = 5077,
    Charm_Sale = 5078,
    Charm_Shinobi = 5079,
    Charm_Zen = 5080,
    BadgeDragonRiseBronze = 153,
    BadgeDragonRiseSilver = 154,
    BadgeDragonRiseGold = 155,
    BadgeDragonRiseEliteGold = 156,
    BadgeDragonRisePlatinum = 157,
    BadgeDragonRiseRubin = 158,
    Charm_DragonRise5v5Bronze = 5122,
    Charm_DragonRise5v5Silver = 5123,
    Charm_DragonRise5v5Gold = 5124,
    Charm_DragonRise5v5EliteGold = 5125,
    Charm_DragonRise5v5Platinum = 5126,
    Charm_DragonRise5v5Diamond = 5127,
    Charm_DragonRise2v2Bronze = 5128,
    Charm_DragonRise2v2Silver = 5129,
    Charm_DragonRise2v2Gold = 5130,
    Charm_DragonRise2v2EliteGold = 5131,
    Charm_DragonRise2v2Platinum = 5132,
    Charm_DragonRise2v2Diamond = 5133,
    Shield_DragonRiseBronze = 1331,
    Shield_DragonRiseSilver = 1332,
    Shield_DragonRiseGold = 1333,
    Shield_DragonRiseEliteGold = 1334,
    Shield_DragonRisePlatinum = 1335,
    Shield_DragonRiseDiamond = 1336,
    Sticker_Sakura = 1274,
    Sticker_SakuraColor = 1275,
    Sticker_Endurance = 1276,
    Sticker_Sushi = 1277,
    Sticker_Bonsai = 1278,
    Sticker_Luck = 1279,
    Sticker_EnduranceColor = 1280,
    Sticker_SushiColor = 1281,
    CursedSoulsGoldPass = 608,
    Halloween2021_Spin = 201,
    Halloween2021_Spin_Reward1 = 202,
    Halloween2021_Spin_Reward2 = 203,
    Halloween2021_Spin_Reward3 = 204,
    Charm_Byakko = 5081,
    Charm_ChochinObake = 5082,
    Charm_CountPaperakula = 5083,
    Charm_Hannya = 5084,
    Charm_Haradashi = 5085,
    Charm_Inugami = 5086,
    Charm_KisuneMask = 5087,
    Charm_Mengu = 5088,
    Charm_Oni = 5089,
    Charm_Soul = 5090,
    Charm_Spirit = 5091,
    Charm_Yokai = 5092,
    Charm_Zombiegiri = 5093,
    Charm_Zombiemaki = 5094,
    Sticker_DemonFlame = 1288,
    Sticker_DemonFlameColor = 1289,
    Sticker_DemonicBeastColor = 1290,
    Sticker_GhostLanternColor = 1291,
    Sticker_Ogre = 1292,
    Sticker_ShadowKitsune = 1293,
    Sticker_ShadowKitsuneColor = 1294,
    Sticker_SpiritHouseColor = 1295,
    Sticker_VampirisushiColor = 1296,
    BadgeCursedSoulsBronze = 159,
    BadgeCursedSoulsSilver = 160,
    BadgeCursedSoulsGold = 161,
    BadgeCursedSoulsEliteGold = 162,
    BadgeCursedSoulsPlatinum = 163,
    BadgeCursedSoulsDiamond = 164,
    AKR_Noname = 144400,
    AKR_Noname_StatTrack = 1144400,
    FabM_DeathHerald = 146300,
    FabM_DeathHerald_StatTrack = 1146300,
    FiveSeven_DemonicFog = 141700,
    FiveSeven_DemonicFog_StatTrack = 1141700,
    KnifeTanto_Restless = 148000,
    M4A1_Noname = 144300,
    M4A1_Noname_StatTrack = 1144300,
    M60_DemonicFog = 146400,
    M60_DemonicFog_StatTrack = 1146400,
    M110_CelestialBeast = 145300,
    M110_CelestialBeast_StatTrack = 1145300,
    Tec9_Restless = 141600,
    Tec9_Restless_StatTrack = 1141600,
    WinterFun2022GoldPass = 609,
    NewYear2022_Spin = 205,
    NewYear2022_Spin_Reward1 = 206,
    NewYear2022_Spin_Reward2 = 207,
    NewYear2022_Spin_Reward3 = 208,
    BadgeWinterFun2022Bronze = 165,
    BadgeWinterFun2022Silver = 166,
    BadgeWinterFun2022Gold = 167,
    BadgeWinterFun2022EliteGold = 168,
    BadgeWinterFun2022Platinum = 169,
    BadgeWinterFun2022Diamond = 170,
    Sticker_Becool = 1297,
    Sticker_BecoolColor = 1298,
    Sticker_ChristmasJoy = 1299,
    Sticker_ChristmasJoyColor = 1300,
    Sticker_NewYear2022 = 1301,
    Sticker_Rudolf = 1302,
    Sticker_StripedZodiac = 1303,
    Sticker_WinterFun = 1304,
    Sticker_WinterFunColor = 1305,
    FabM_ThiefOfTheChristmas = 156300,
    FabM_ThiefOfTheChristmas_StatTrack = 1156300,
    Famas_ChristmasSymbol = 154800,
    Famas_ChristmasSymbol_StatTrack = 1154800,
    FiveSeven_HolidayFrost = 151700,
    FiveSeven_HolidayFrost_StatTrack = 1151700,
    FnFal_ChristmasSymbol = 154900,
    FnFal_ChristmasSymbol_StatTrack = 1154900,
    M4A1_YearOfTheTiger = 154300,
    M4A1_YearOfTheTiger_StatTrack = 1154300,
    M40_ThiefOfTheChristmas = 155200,
    M40_ThiefOfTheChristmas_StatTrack = 1155200,
    M110_YearOfTheTiger = 155300,
    M110_YearOfTheTiger_StatTrack = 1155300,
    Tec9_HolidayFrost = 151600,
    Tec9_HolidayFrost_StatTrack = 1151600,
    Charm_CandyCane = 5095,
    Charm_CommanderClaus = 5096,
    Charm_GingerbreadHouse = 5097,
    Charm_ChristmasFireplace = 5098,
    Charm_MindBlowingGift = 5099,
    Charm_TraceOfTheNewYear = 5100,
    Charm_GiftBox = 5101,
    Charm_GrumpyTiger = 5102,
    ScorpionKnife_HolidayFrost = 157900,
    FlipKnife_HolidayFrost = 157700,
    KnifeButterfly_Kumo = 157500,
    KnifeBayonet_Kumo = 157100,
    KnifeTanto_YearOfTheTiger = 158000,
    KnifeKarambit_YearOfTheTiger = 157200,
    Kunai_ReaperKnife_Augustite = 157800,
    jKommando_Augustite = 157300,
    Gloves_YearOfTheTiger = 3010,
    MedalVeteran2022Bronze = 171,
    MedalVeteran2022Silver = 172,
    MedalVeteran2022Gold = 173,
    MedalVeteran2022Platinum = 174,
    MedalVeteran2022Diamond = 175,
    FiveYearGoldPass = 610,
    Graffiti_5YearsFree_Pack = 4000,
    Graffiti_5YearsFree = 4001,
    Graffiti_5YearsPass_Pack = 4002,
    Graffiti_5YearsPass = 4003,
    AWM_Stickerbomb = 165100,
    M40_Stickerbomb = 165200,
    M110_Stickerbomb = 165300,
    MP7_Stickerbomb = 163400,
    Tec9_Stickerbomb = 161600,
    USP_Stickerbomb = 161200,
    Charm_LongRun = 5103,
    Charm_LongRunGold = 5104,
    Charm_Spray5 = 5105,
    Charm_Spray5Gold = 5106,
    MedalFiveYearsSilver = 176,
    MedalFiveYearsGold = 177,
    Sticker_Jubilee5 = 1306,
    Sticker_Jubilee5Gold = 1307,
    Sticker_JubileeColor = 1308,
    Graffiti_High5_Packed = 4000,
    Graffiti_High5 = 4001,
    Graffiti_High5Splash_Packed = 4002,
    Graffiti_High5Splash = 4003,
    SharpCase = 307,
    SharpBox = 407,
    AKR_TagKing = 170001,
    AKR_TagKing_StatTrack = 1170001,
    AKR12_Steampunk = 170002,
    AKR12_Steampunk_StatTrack = 1170002,
    Deagle_Piranha = 170003,
    Deagle_Piranha_StatTrack = 1170003,
    Deagle_Glory = 170004,
    FabM_BOOM = 170005,
    FabM_BOOM_StatTrack = 1170005,
    Famas_Gunsmoke = 170006,
    FiveSeven_Zap = 170007,
    G22_Casual = 170008,
    G22_Casual_StatTrack = 1170008,
    M4A1_Sour = 170009,
    M4A1_Sour_StatTrack = 1170009,
    M16_Needl = 170010,
    M16_Needl_StatTrack = 1170010,
    M40_Grip = 170011,
    M40_Grip_StatTrack = 1170011,
    M60_Turret = 170012,
    M110_Pursuit = 170013,
    SM1014_Bolt = 170014,
    MP5_Dusk = 170015,
    MP7_Dawn = 170016,
    P90_Oops = 170017,
    P90_Oops_StatTrack = 1170017,
    P350_TagKing = 170018,
    P350_TagKing_StatTrack = 1170018,
    Tec9_Needle = 170019,
    Tec9_Needle_StatTrack = 1170019,
    USP_PurpleCamo = 170020,
    USP_PurpleCamo_StatTrack = 1170020,
    DaggerKnife_Acid = 170021,
    DaggerKnife_DemonicSteel = 170022,
    DaggerKnife_Grunge = 170023,
    DaggerKnife_Molten = 170024,
    Legends_Spin = 209,
    Legends_Spin_Shop_2 = 210,
    Legends_Spin_Shop_3 = 211,
    Legends_Spin_Shop_4 = 212,
    Legends_Spin_Shop_5 = 213,
    Legends_Spin_Shop_6 = 214,
    Legends_Spin_Shop_7 = 215,
    Legends_Spin_Silver_Available = 216,
    Legends_Spin_Gold_Available = 217,
    Legends_Spin_Diamond_Available = 218,
    LegendsGoldPass = 611,
    Charm_Chibi_Helicopter = 5107,
    Charm_Chibi_Pirate = 5108,
    Charm_Compass = 5109,
    Charm_Greek_Vase = 5110,
    Charm_Harp = 5111,
    Charm_Helmet = 5112,
    Charm_Legends_Gold = 5113,
    Charm_Legends_Silver = 5114,
    Charm_Lightning = 5115,
    Charm_Olive_Branch = 5116,
    Charm_Owl = 5117,
    Charm_Peripteros = 5118,
    Charm_Talaria = 5119,
    Charm_Trident = 5120,
    Charm_Windmill = 5121,
    AKR_Scylla = 180001,
    AKR_Scylla_StatTrack = 1180001,
    AWM_Poseidon = 180002,
    AWM_Poseidon_StatTrack = 1180002,
    FABM_Hercules = 180003,
    FABM_Hercules_StatTrack = 1180003,
    M4_Minotaur = 180004,
    M4_Minotaur_StatTrack = 1180004,
    M40_Constellations = 180005,
    M40_Constellations_StatTrack = 1180005,
    M60_Ares = 180006,
    M60_Ares_StatTrack = 1180006,
    M110_Themis = 180007,
    M110_Themis_StatTrack = 1180007,
    MAC10_Argo = 180008,
    MAC10_Argo_StatTrack = 1180008,
    MAC10_Constellations = 180009,
    MAC10_Constellations_StatTrack = 1180009,
    MP5_Gorgon = 180010,
    MP5_Gorgon_StatTrack = 1180010,
    SPAS_Griffin = 180011,
    SPAS_Griffin_StatTrack = 1180011,
    SPAS_Zeus = 180012,
    SPAS_Zeus_StatTrack = 1180012,
    FiveSeven_Octopus = 180013,
    FiveSeven_Octopus_StatTrack = 1180013,
    SM1014_Shark2 = 180014,
    SM1014_Shark2_StatTrack = 1180014,
    Tec9_Splash = 180015,
    Tec9_Splash_StatTrack = 1180015,
    AKR12_Carving = 180016,
    AKR12_Carving_StatTrack = 1180016,
    FnFal_Basilisk = 180017,
    FnFal_Basilisk_StatTrack = 1180017,
    M4A1_Mermaid = 180018,
    M4A1_Mermaid_StatTrack = 1180018,
    M16_Muraena = 180019,
    M16_Muraena_StatTrack = 1180019,
    MAC10_Shark = 180020,
    MAC10_Shark_StatTrack = 1180020,
    SPAS_Octopus = 180021,
    SPAS_Octopus_StatTrack = 1180021,
    Kukri_Ares = 180022,
    Kukri_Eagle = 180023,
    Kukri_Gold = 180024,
    Kukri_Silver = 180025,
    Kukri_Stars = 180026,
    Kukri_Stone = 180027,
    DaggerKnife_Jaws = 180028,
    Sticker_Bolt = 1309,
    Sticker_Bolt_Gold = 1310,
    Sticker_Cerberus = 1311,
    Sticker_Cyclop = 1312,
    Sticker_Gargona = 1313,
    Sticker_Minotaur = 1314,
    Sticker_Oblivion = 1315,
    Sticker_Season4_Gold = 1316,
    Sticker_Season4_Color = 1317,
    Sticker_Victory = 1318,
    Sticker_Zevs = 1319,
    Sticker_Breeze = 1320,
    Sticker_Cat = 1321,
    Sticker_Helicopter_Color = 1322,
    Sticker_Imserious = 1323,
    Sticker_Imserious_Color = 1324,
    Sticker_Lighthouse = 1325,
    Sticker_Jellyfish = 1326,
    Sticker_Jellyfish_Color = 1327,
    Sticker_Pirate_Color = 1328,
    Sticker_Squad = 1329,
    Sticker_Cerberus_Color = 1330,
    Graffiti_AppleTarget = 4004,
    Graffiti_AppleTarget_Packed = 4005,
    Graffiti_ChibiKT = 4006,
    Graffiti_ChibiKT_Packed = 4007,
    Graffiti_ChibiT = 4008,
    Graffiti_ChibiT_Packed = 4009,
    Graffiti_Cupidon = 4010,
    Graffiti_Cupidon_Packed = 4011,
    Graffiti_EatThis = 4012,
    Graffiti_EatThis_Packed = 4013,
    Graffiti_HeadShot = 4014,
    Graffiti_HeadShot_Packed = 4015,
    Graffiti_Lighting = 4016,
    Graffiti_Lighting_Packed = 4017,
    Graffiti_Minotaur = 4018,
    Graffiti_Minotaur_Packed = 4019,
    Graffiti_Olive = 4020,
    Graffiti_Olive_Packed = 4021,
    Graffiti_Owl = 4022,
    Graffiti_Owl_Packed = 4023,
    Graffiti_Pegus = 4024,
    Graffiti_Pegus_Packed = 4025,
    Graffiti_VictoryBubble = 4026,
    Graffiti_VictoryBubble_Packed = 4027,
    Graffiti_KillerShark = 4028,
    Graffiti_KillerShark_Packed = 4029,
    Graffiti_Octopus = 4030,
    Graffiti_Octopus_Packed = 4031,
    Graffiti_GoldSkull = 4032,
    Graffiti_GoldSkull_Packed = 4033,
    Badge_LegendsBronze = 178,
    Badge_LegendsSilver = 179,
    Badge_LegendsGold = 180,
    Badge_LegendsEliteGold = 181,
    Badge_LegendsPlatinum = 182,
    Badge_LegendsDiamond = 183,
    PandoraGoldPass = 612,
    Graffiti_ZombieAttack = 4034,
    Graffiti_ZombieAttack_Packed = 4035,
    Graffiti_YouInfected = 4036,
    Graffiti_YouInfected_Packed = 4037,
    Graffiti_Observer = 4038,
    Graffiti_Observer_Packed = 4039,
    Graffiti_ItsOK = 4040,
    Graffiti_ItsOK_Packed = 4041,
    Graffiti_Hazard = 4042,
    Graffiti_Hazard_Packed = 4043,
    Graffiti_BewareOfZombies = 4044,
    Graffiti_BewareOfZombies_Packed = 4045,
    Sticker_Infected = 1337,
    Sticker_OopsColor = 1338,
    Sticker_DrownedColor = 1339,
    Sticker_SeaOfDeath = 1340,
    Sticker_Hazard = 1341,
    Sticker_Oops = 1342,
    Badge_PandoraBronze = 184,
    Badge_PandoraSilver = 185,
    Badge_PandoraGold = 186,
    Badge_PandoraEliteGold = 187,
    Badge_PandoraPlatinum = 188,
    Badge_PandoraDiamond = 189,
    AKR12_Riot = 190001,
    AKR12_Riot_StatTrack = 1190001,
    Deagle_Infection = 190002,
    Deagle_Infection_StatTrack = 1190002,
    Famas_Handcraft = 190003,
    Famas_Handcraft_StatTrack = 1190003,
    Mac10_MeltAway = 190004,
    Mac10_MeltAway_StatTrack = 1190004,
    P350_Raider = 190005,
    P350_Raider_StatTrack = 1190005,
    SPAS_Raider = 190006,
    SPAS_Raider_StatTrack = 1190006,
    Gloves_Acid = 3011,
    Gloves_Camo = 3012,
    Gloves_Fossil = 3013,
    Gloves_Handcraft = 3014,
    Gloves_Raider = 3015,
    Gloves_Thug = 3016,
    Charm_Jugger = 5134,
    Charm_Shark = 5135,
    Charm_Barrel = 5136,
    Charm_Biohazard = 5137,
    Charm_Flask = 5138,
    Charm_TopSecret = 5139,
    Charm_BlackSpot = 5140,
    GraffitiPack_Splash = 703,
    Graffiti_Ochpochmak = 4046,
    Graffiti_Ochpochmak_Packed = 4047,
    Graffiti_LuckyNumber = 4048,
    Graffiti_LuckyNumber_Packed = 4049,
    Graffiti_Angel = 4050,
    Graffiti_Angel_Packed = 4051,
    Graffiti_Ban = 4052,
    Graffiti_Ban_Packed = 4053,
    Graffiti_Bull = 4054,
    Graffiti_Bull_Packed = 4055,
    Graffiti_Camper = 4056,
    Graffiti_Camper_Packed = 4057,
    Graffiti_Done = 4058,
    Graffiti_Done_Packed = 4059,
    Graffiti_Easy = 4060,
    Graffiti_Easy_Packed = 4061,
    Graffiti_ExplosionWarning = 4062,
    Graffiti_ExplosionWarning_Packed = 4063,
    Graffiti_GG = 4064,
    Graffiti_GG_Packed = 4065,
    Graffiti_GoldSkull2 = 4066,
    Graffiti_GoldSkull2_Packed = 4067,
    Graffiti_HeadShot2 = 4068,
    Graffiti_HeadShot2_Packed = 4069,
    Graffiti_Killer = 4070,
    Graffiti_Killer_Packed = 4071,
    Graffiti_KnifeKill = 4072,
    Graffiti_KnifeKill_Packed = 4073,
    Graffiti_Miss = 4074,
    Graffiti_Miss_Packed = 4075,
    Graffiti_NiceShot = 4076,
    Graffiti_NiceShot_Packed = 4077,
    Graffiti_Oldschool = 4078,
    Graffiti_Oldschool_Packed = 4079,
    Graffiti_Radio = 4080,
    Graffiti_Radio_Packed = 4081,
    Graffiti_ToughGuy = 4082,
    Graffiti_ToughGuy_Packed = 4083,
    Graffiti_Toxic = 4084,
    Graffiti_Toxic_Packed = 4085
};

enum Knifez
{
    G22 = 11,
    USP = 12,
    P350 = 13,
    Deagle = 15,
    Tec9 = 16,
    FiveSeven = 17,
    UMP45 = 32,
    MP7 = 34,
    P90 = 35,
    MP5 = 36,
    MAC10 = 37,
    M4A1 = 43,
    AKR = 44,
    AKR12 = 45,
    M4 = 46,
    M16 = 47,
    FAMAS = 48,
    FnFal = 49,
    AWM = 51,
    M40 = 52,
    M110 = 53,
    SM1014 = 62,
    FabM = 63,
    M60 = 64,
    SPAS = 65,
    Knife = 70,
    KnifeBayonet = 71,
    KnifeKarambit = 72,
    jKommando = 73,
    KnifeButterfly = 75,
    FlipKnife = 77,
    KunaiKnife = 78,
    ScorpionKnife = 79,
    KnifeTanto = 80,
    DaggerKnife = 81,
    KnifeKukri = 82,
    GrenadeHE = 91,
    GrenadeSmoke = 92,
    GrenadeFlash = 93,
    Bomb = 100,
    Defuser = 101,
    DefuseKit = 102,
    Vest = 110,
    VestAndHelmet = 111,
    Minigun = 41,
    ZombieHands = 83
};
uintptr_t string2Offset(const char *c) {
    int base = 16;
    // See if this function catches all possibilities.
    // If it doesn't, the function would have to be amended
    // whenever you add a combination of architecture and
    // compiler that is not yet addressed.
    static_assert(sizeof(uintptr_t) == sizeof(unsigned long)
                  || sizeof(uintptr_t) == sizeof(unsigned long long),
                  "Please add string to handle conversion for this architecture.");

    // Now choose the correct function ...
    if (sizeof(uintptr_t) == sizeof(unsigned long)) {
        return strtoul(c, nullptr, base);
    }

    // All other options exhausted, sizeof(uintptr_t) == sizeof(unsigned long long))
    return strtoull(c, nullptr, base);
}
float aimffv = 100.0f;
void* (*get_transform)(void* component);

Vector3(*get_forward) (void*);

bool telekill, masskill, slaim, func1;

int (*GetPlayerHealth)(void *player);
int (*GetPlayerHealth1)(void *player);
bool (*IsLocal)(void *player);
int (*GetPlayerTeam)(void *player);


bool tps,tps1,tps2,tps3,tps4,tps5,tps6,tps7,tps8,tps9,tps10,tps11,tps12;

bool ragdoll = false;
void (*get_position)(void* transform, Vector3* out);

void (*set_TpsView)(void* player);
void (*set_TpsView1)(void* player);
void (*set_TpsView2)(void* player);
void (*set_TpsView3)(void* player);
void (*set_TpsView4)(void* player);
void (*set_TpsView5)(void* player);
void (*set_TpsView6)(void* player);
void (*set_TpsView7)(void* player);
void (*set_TpsView8)(void* player);
void (*set_TpsView9)(void* player);
void (*set_TpsView10)(void* player);
void (*set_TpsView11)(void* player);
void (*set_TpsView12)(void* player);


void (*set_position)(void* transform, Vector3 newPosition);
ImVec4 aimclr = ImVec4(255,0,0,255);

Vector3 GetPlayerLocation(void *player) {
    Vector3 location;
    get_position(get_transform(player), &location);
    return location;
}
Vector3 GetHeadLocation(void *player) {
    Vector3 location;
    get_position((player), &location);
    return location;
}

static void *get_photon(void *player) {
    return *(void **)((uint64_t) player + 0xA8);
}




bool handspos = false;
float xx, yy, zz;
void* myPlayer = NULL;
void *enemyPlayer = NULL;
bool PlayerAlive(void *player) {
    return player != NULL && GetPlayerHealth(get_photon(player)) > 0;
}

bool bullinem = false;



bool IsPlayerDead(void *player) {
    if (player) {
        int health = GetPlayerHealth(player);
        if (health <= 0) {
            return true;
        }
    }
    return false;
}

int rm = 255;
int gm = 0;
int bm = 0;
int mm = 0;
int rotation_start_index;


void ImDrawList::SwastonCrosshairv1() {

    ImGui::GetForegroundDrawList()->AddLine(ImVec2(glWidth / 2, (glHeight / 2) - 20), ImVec2(glWidth / 2, (glHeight / 2) + 20), IM_COL32(rm, bm, gm, 255));
    ImGui::GetForegroundDrawList()->AddLine(ImVec2((glWidth / 2) - 20, glHeight / 2), ImVec2((glWidth / 2) + 20, glHeight / 2), IM_COL32(rm, bm, gm, 255));
    ImGui::GetForegroundDrawList()->AddLine(ImVec2(glWidth / 2, (glHeight / 2) + 20), ImVec2((glWidth / 2) - 20, (glHeight / 2) + 20), IM_COL32(rm, bm, gm, 255));
    ImGui::GetForegroundDrawList()->AddLine(ImVec2(glWidth / 2, (glHeight / 2) - 20), ImVec2((glWidth / 2) + 20, (glHeight / 2) - 20), IM_COL32(rm, bm, gm, 255));
    ImGui::GetForegroundDrawList()->AddLine(ImVec2((glWidth / 2) - 20, glHeight / 2), ImVec2((glWidth / 2) - 20, (glHeight / 2) - 20), IM_COL32(rm, bm, gm, 255));
    ImGui::GetForegroundDrawList()->AddLine(ImVec2((glWidth / 2) + 20, glHeight / 2), ImVec2((glWidth / 2) + 20, (glHeight / 2) + 20), IM_COL32(rm, bm, gm, 255));

}

int deg2rad(int x) { return x * M_PI / 180; }
int rad2deg(int x) { return x * 180 / M_PI; }

static float rotation_degree = 0.f;

void chuj() {
    static ImVec2 center = ImVec2(glWidth / 2, glHeight / 2);
    if (rotation_degree > 89.f)
        rotation_degree = 0.f;

    rotation_degree += 2;
    int length = 20;
    float gamma = atan(length / length);
    int i = 0;
    auto donbass = ImGui::GetForegroundDrawList();

    while (i < 4)
    {
        std::vector <int> p
                {
                        int(length * sin(deg2rad(rotation_degree + (i * 90)))),
                        int(length * cos(deg2rad(rotation_degree + (i * 90)))),
                        int((length / cos(gamma)) * sin(deg2rad(rotation_degree + (i * 90) + rad2deg(gamma)))),
                        int((length / cos(gamma)) * cos(deg2rad(rotation_degree + (i * 90) + rad2deg(gamma))))
                };
        donbass->AddLine(center, ImVec2(center.x + p[0], center.y - p[1]), IM_COL32(rm, bm, gm, 255));
        donbass->AddLine(ImVec2(center.x + p[0], center.y - p[1]), ImVec2(center.x + p[2], center.y - p[3]), IM_COL32(rm, bm, gm, 255));
        i++;
    }
}


static const char* knifes[] = {"None", "Karambit", "M9 Bayonet", "Butterfly", "Daggers", "Kukri", "Tanto", "Kunai", "jKommando", "Scorpion", "FlipKnife"};

static const char* karambitskins[] = {"None", "Gold", "Ice Dragon", "Scratch", "Universe", "Claw", "ColdFlame", "SnowCamo",  "YearOfTheTiger", "Frozen"};
static const char* bayonetskins[] = {"None", "BlueBlood", "Ancient", "Scratch", "Universe", "Dragon Glass", "Frozen", "Kumo"};
static const char* butterflyskins[] = {"None", "Kumo", "Gold", "Dragon Glass", "Red", "Starfall", "ColdFlame", "Winter"};
static const char* daggerskins[] = {"None", "Harmony", "Acid", "Demonic Steel", "Grunge", "Molten", "Jaws"};
static const char* kunaiskins[] = {"None", "Bone", "Luxury", "Poison", "Radiation", "Reaper", "ColdFlame", "SnowCamo", "Augustite"};

static const char* tantoskins[] = {"None", "Dojo", "Mafia", "Malachite", "Pearl Abyss", "Transistor", "Flow", "Restless", "YearOfTheTiger"};
static const char* kukriskins[] = {"None", "Ares", "Eagle", "Gold", "Silver", "Stars", "Stone"};
static const char* jkomanskins[] = {"None", "Ancient", "Reaper", "Floral", "Luxury", "Frozen", "Augustite"};
static const char* scorpionskins[] = {"None", "ColdFlame", "HolidayFrost", "Camouflage", "Green", "Scratch", "Sky"};
static const char* flipknifeskins[] = {"None", "SnowCamo", "HolidayFrost", "Poison", "New1", "New2", "New3", "New4", "New5"};

bool defaim = false;

static const char* gloves[] = {"None", "Acid", "Camo", "Fossil", "HandCraft", "Raider", "Phoenix", "Autumn", "Geometric", "RetroWave", "LivingFlame", "BurningFists", "Pun", "Champi", "SteamRider"};

bool speedh = false;
float movefloat = 0;
int selectedknife = 0;
int glovesid = 0;
int selectedkarambitskin = 0;
int selectedbutterflyskin = 0;
int selectedm9skin = 0;
int selecteddaggerskin = 0;
int selectedkukriskin = 0;
int selectedtantoskin = 0;
int selectedkunaiskin = 0;
int selectedscorpionskin = 0;
int selectedflipknifeskin = 0;
int selectedjkomskin = 0;

int selectedgloves = 0;

int selectedtps = 0;
int karambitskinid;
int butterflyskinid;
int m9skinid;
int daggerskinid;
int kukriskinid;
int tantoskinid;
int kunaiskinid;
int scorpionskinid;
int flipknifeskinid;
int jkomskinid;
bool invisible = false;
bool haim = false;
const char* items[] = {"Default", "WireFrame", "Glow", "Outline"};
const char* bnnes[] = {"Head", "Neck", "Hip"};
int currbno = 0;
bool silentfov = false;
bool fove = false;
float fovc = 45.f;




float NormalizeAngle (float angle){
    while (angle>360)
        angle -= 360;
    while (angle<0)
        angle += 360;
    return angle;
}
int chance = rand() % 100 + 1;
int yourchance = 100;



Vector3 NormalizeAngles (Vector3 angles){
    angles.x = NormalizeAngle (angles.x);
    angles.y = NormalizeAngle (angles.y);
    angles.z = NormalizeAngle (angles.z);
    return angles;
}

bool (*IsOwnerActive)(void *inst);
void *(*GetPhoton)(void *player);

Vector3 ToEulerRad(Quaternion q1){
    float Rad2Deg = 360.0f / (M_PI * 2.0f);

    float sqw = q1.W * q1.W;
    float sqx = q1.X * q1.X;
    float sqy = q1.Y * q1.Y;
    float sqz = q1.Z * q1.Z;
    float unit = sqx + sqy + sqz + sqw;
    float test = q1.X * q1.W - q1.Y * q1.Z;
    Vector3 v;

    if (test>0.4995f*unit) {
        v.y = 2.0f * atan2f (q1.Y, q1.X);
        v.x = M_PI / 2.0f;
        v.z = 0;
        return NormalizeAngles(v * Rad2Deg);
    }
    if (test<-0.4995f*unit) {
        v.y = -2.0f * atan2f (q1.Y, q1.X);
        v.x = -M_PI / 2.0f;
        v.z = 0;
        return NormalizeAngles (v * Rad2Deg);
    }
    Quaternion q(q1.W, q1.Z, q1.X, q1.Y);
    v.y = atan2f (2.0f * q.X * q.W + 2.0f * q.Y * q.Z, 1 - 2.0f * (q.Z * q.Z + q.W * q.W)); // yaw
    v.x = asinf (2.0f * (q.X * q.Z - q.W * q.Y)); // pitch
    v.z = atan2f (2.0f * q.X * q.Y + 2.0f * q.Z * q.W, 1 - 2.0f * (q.Y * q.Y + q.Z * q.Z)); // roll
    return NormalizeAngles (v * Rad2Deg);
}

int isGame(JNIEnv *env, jstring appDataDir) {
    if (!appDataDir)
        return 0;
    const char *app_data_dir = env->GetStringUTFChars(appDataDir, nullptr);
    int user = 0;
    static char package_name[256];
    if (sscanf(app_data_dir, "/data/%*[^/]/%d/%s", &user, package_name) != 2) {
        if (sscanf(app_data_dir, "/data/%*[^/]/%s", package_name) != 1) {
            package_name[0] = '\0';
            LOGW("can't parse %s", app_data_dir);
            return 0;
        }
    }
    if (strcmp(package_name, GamePackageName) == 0) {
        LOGI("detect game: %s", package_name);
        game_data_dir = new char[strlen(app_data_dir) + 1];
        strcpy(game_data_dir, app_data_dir);
        env->ReleaseStringUTFChars(appDataDir, app_data_dir);
        return 1;
    } else {
        env->ReleaseStringUTFChars(appDataDir, app_data_dir);
        return 0;
    }
}
void ColorPicker(const char* name, ImVec4 &color) {
    static ImVec4 backup_color;

    bool open_popup = ImGui::ColorButton((std::string(name) + std::string("##3b")).c_str(), color);
    //open_popup |= ImGui::Button("Palette");
    if (open_popup) {
        ImGui::OpenPopup(name);
        backup_color = color;
    }
    if (ImGui::BeginPopup(name)) {
        ImGui::Text("Select Color");
        ImGui::Separator();
        ImGui::ColorPicker4("##picker", (float *) &color,ImGuiColorEditFlags_NoSidePreview |
                                                         ImGuiColorEditFlags_NoSmallPreview);
        ImGui::SameLine();

        ImGui::BeginGroup(); // Lock X position
        ImGui::Text("Current");
        ImGui::ColorButton("##current", color,
                           ImGuiColorEditFlags_NoPicker | ImGuiColorEditFlags_AlphaPreviewHalf,
                           ImVec2(60, 40));
        ImGui::Text("Previous");
        if (ImGui::ColorButton("##previous", backup_color, ImGuiColorEditFlags_NoPicker | ImGuiColorEditFlags_AlphaPreviewHalf, ImVec2(60, 40))) {
            color = backup_color;
        }
        ImGui::EndGroup();
        ImGui::EndPopup();
    }
}
bool ThirdPerson = false;

bool gmode = false;
int get_screen_height() {

    static const auto get_height_injected = reinterpret_cast<uint64_t(__fastcall *)()>(getAbsoluteAddress(
            libName, string2Offset(AY_OBFUSCATE("0x29132B4"))));

    return (int) get_height_injected();
}



//Screen.get_width();
int get_screen_width() {

    static const auto get_width_injected = reinterpret_cast<uint64_t(__fastcall *)()>(getAbsoluteAddress(
            libName, string2Offset(AY_OBFUSCATE("0x2913268"))));

    return (int) get_width_injected();
}

//Camera.WorldToScreenPoint_Injected
//public Vector3 WorldToScreenPoint(Vector3 position, MonoorSetreo..., out Vector3)

Vector3 WorldToScreenPoint(void *transform, Vector3 test) {
    if (!transform)
        return Vector3();

    Vector3 position;

    static const auto WorldToScreenPoint_Injected = reinterpret_cast<uint64_t(__fastcall *)(void *,
                                                                                            Vector3,
                                                                                            int,
                                                                                            Vector3 &)>(getAbsoluteAddress(
            libName, string2Offset(AY_OBFUSCATE("0x2913884"))));
    WorldToScreenPoint_Injected(transform, test, 2, position);

    return position;
}

float (*get_time)();


void *get_camera() {

    static const auto get_camera_injected = reinterpret_cast<uint64_t(__fastcall *)()>(KittyMemory::getAbsoluteAddress(
            libName, string2Offset(AY_OBFUSCATE("0x29144A0"))));

    return (void *) get_camera_injected();
}

float AimFovs(void *player) {
    Rect Rects;
    Vector3 PlayerPoss = GetPlayerLocation(player);
    void *Cam = get_camera();
    Vector3 PosNews = {0.f, 0.f, 0.f};
    PosNews = WorldToScreenPoint(Cam, PlayerPoss);
    if (PosNews.z < 1.f) {
        return (float)1.0f;
    }else{
        Vector3 Origins;
        Origins = PlayerPoss;
        Origins.y += 0.f;
        float posnum2 = 1.0f; /******* Hight slider * 0.1 ********/
        float posnum22 = 0.70f;/******* Size slider * 0.1 ********/
        Origins.y += posnum2;
        Vector3 BoxPosNews = {0.f, 0.f, 0.f};
        BoxPosNews = WorldToScreenPoint(Cam, Origins);
        float Hights =
                abs(BoxPosNews.y - PosNews.y) * (posnum22 / posnum2), Widths =
                Hights * 0.60f;

        Rects = Rect(BoxPosNews.x - Widths / 2.f,
                     glHeight - BoxPosNews.y,
                     Widths, Hights
        );
        Vector2 PlayerB;
        PlayerB.x = Rects.x + Rects.w / 2;
        PlayerB.y = Rects.y + Rects.h / 2;
        Vector2 crosshair;
        crosshair.x = glWidth / 2;
        crosshair.y = glHeight / 2;
        Vector2 CrossRadius;
        CrossRadius.x = crosshair.x + (glWidth / 720 * aimffv);
        CrossRadius.y = crosshair.y;
        float DisRadius = Vector2::Distance(crosshair, CrossRadius);
        float Cross = 0.0f;
        float PlayerDis = Vector2::Distance(crosshair, PlayerB);
        if (PlayerB.x < glWidth / 2) {
            Cross = PlayerDis - DisRadius;
        } else {
            Cross = PlayerDis - DisRadius;
        };
        return (float) Cross;
    }

};

Quaternion PlayerLook;
bool AimFovBool(float value){
    if(value > 0.0f){
        return false;
    }else{
        return true;
    };
};

bool fastknife, fastknife1, fastknife2, fastknife3, fastknife4 = false;

struct My_Patches {
    MemoryPatch Radar1, Radar2,invisible, ChamsBypass, Money1, Money2, Rapid, Drop1, Drop2, SpawnT1, SpawnT2, Ammo1, Ammo2, NoRecoilF, AimSL, speedbypas1, speedbypas2;
} hexPatches;
bool ESP;
void ozTheme() {

    ImGui::StyleColorsDark();

    auto &Style = ImGui::GetStyle();

    ImVec4 *colors = ImGui::GetStyle().Colors;
    colors[ImGuiCol_Text] = ImVec4(1.00f, 1.00f, 1.00f, 1.00f);
    colors[ImGuiCol_TextDisabled] = ImVec4(0.50f, 0.50f, 0.50f, 1.00f);
    colors[ImGuiCol_WindowBg] = ImVec4(0.16f, 0.11f, 0.18f, 0.94f);
    colors[ImGuiCol_ChildBg] = ImVec4(0.41f, 0.16f, 0.47f, 0.00f);
    colors[ImGuiCol_PopupBg] = ImVec4(0.27f, 0.13f, 0.40f, 0.94f);
    colors[ImGuiCol_Border] = ImVec4(0.45f, 0.31f, 0.59f, 0.50f);
    colors[ImGuiCol_BorderShadow] = ImVec4(0.44f, 0.19f, 0.56f, 0.00f);
    colors[ImGuiCol_FrameBg] = ImVec4(0.24f, 0.12f, 0.28f, 0.54f);
    colors[ImGuiCol_FrameBgHovered] = ImVec4(0.42f, 0.22f, 0.57f, 0.40f);
    colors[ImGuiCol_FrameBgActive] = ImVec4(0.44f, 0.18f, 0.69f, 0.67f);
    colors[ImGuiCol_TitleBg] = ImVec4(0.34f, 0.19f, 0.43f, 1.00f);
    colors[ImGuiCol_TitleBgActive] = ImVec4(0.26f, 0.09f, 0.42f, 1.00f);
    colors[ImGuiCol_TitleBgCollapsed] = ImVec4(0.14f, 0.07f, 0.24f, 0.51f);
    colors[ImGuiCol_MenuBarBg] = ImVec4(0.17f, 0.06f, 0.22f, 1.00f);
    colors[ImGuiCol_ScrollbarBg] = ImVec4(0.11f, 0.10f, 0.12f, 0.53f);
    colors[ImGuiCol_ScrollbarGrab] = ImVec4(0.36f, 0.22f, 0.44f, 1.00f);
    colors[ImGuiCol_ScrollbarGrabHovered] = ImVec4(0.63f, 0.00f, 0.93f, 1.00f);
    colors[ImGuiCol_ScrollbarGrabActive] = ImVec4(0.72f, 0.46f, 0.92f, 1.00f);
    colors[ImGuiCol_CheckMark] = ImVec4(0.71f, 0.21f, 0.88f, 1.00f);
    colors[ImGuiCol_SliderGrab] = ImVec4(0.42f, 0.13f, 0.46f, 1.00f);
    colors[ImGuiCol_SliderGrabActive] = ImVec4(0.90f, 0.17f, 0.97f, 1.00f);
    colors[ImGuiCol_Button] = ImVec4(0.49f, 0.17f, 0.62f, 0.40f);
    colors[ImGuiCol_ButtonHovered] = ImVec4(0.64f, 0.26f, 0.68f, 1.00f);
    colors[ImGuiCol_ButtonActive] = ImVec4(0.79f, 0.36f, 1.00f, 1.00f);
    colors[ImGuiCol_Header] = ImVec4(0.35f, 0.10f, 0.40f, 0.31f);
    colors[ImGuiCol_HeaderHovered] = ImVec4(0.80f, 0.26f, 0.98f, 0.80f);
    colors[ImGuiCol_HeaderActive] = ImVec4(0.39f, 0.08f, 0.62f, 1.00f);
    colors[ImGuiCol_Separator] = ImVec4(0.46f, 0.25f, 0.54f, 0.50f);
    colors[ImGuiCol_SeparatorHovered] = ImVec4(0.65f, 0.21f, 0.82f, 0.78f);
    colors[ImGuiCol_SeparatorActive] = ImVec4(0.31f, 0.15f, 0.62f, 1.00f);
    colors[ImGuiCol_ResizeGrip] = ImVec4(0.66f, 0.22f, 0.76f, 0.20f);
    colors[ImGuiCol_ResizeGripHovered] = ImVec4(0.87f, 0.40f, 1.00f, 0.67f);
    colors[ImGuiCol_ResizeGripActive] = ImVec4(0.12f, 0.05f, 0.12f, 0.95f);
    colors[ImGuiCol_Tab] = ImVec4(0.47f, 0.17f, 0.66f, 0.86f);
    colors[ImGuiCol_TabHovered] = ImVec4(0.43f, 0.18f, 0.62f, 0.80f);
    colors[ImGuiCol_TabActive] = ImVec4(0.17f, 0.06f, 0.39f, 1.00f);
    colors[ImGuiCol_TabUnfocused] = ImVec4(0.07f, 0.10f, 0.15f, 0.97f);
    colors[ImGuiCol_TabUnfocusedActive] = ImVec4(0.13f, 0.05f, 0.30f, 1.00f);
    colors[ImGuiCol_PlotLines] = ImVec4(0.31f, 0.10f, 0.49f, 1.00f);
    colors[ImGuiCol_PlotLinesHovered] = ImVec4(0.22f, 0.08f, 0.40f, 1.00f);
    colors[ImGuiCol_PlotHistogram] = ImVec4(0.16f, 0.06f, 0.40f, 1.00f);
    colors[ImGuiCol_PlotHistogramHovered] = ImVec4(0.20f, 0.14f, 0.46f, 1.00f);
    colors[ImGuiCol_TableHeaderBg] = ImVec4(0.52f, 0.21f, 0.72f, 1.00f);
    colors[ImGuiCol_TableBorderStrong] = ImVec4(0.58f, 0.19f, 0.76f, 1.00f);
    colors[ImGuiCol_TableBorderLight] = ImVec4(0.41f, 0.08f, 0.64f, 1.00f);
    colors[ImGuiCol_TableRowBg] = ImVec4(0.18f, 0.04f, 0.62f, 0.00f);
    colors[ImGuiCol_TableRowBgAlt] = ImVec4(1.00f, 1.00f, 1.00f, 0.06f);
    colors[ImGuiCol_TextSelectedBg] = ImVec4(0.26f, 0.59f, 0.98f, 0.35f);
    colors[ImGuiCol_DragDropTarget] = ImVec4(1.00f, 1.00f, 0.00f, 0.90f);
    colors[ImGuiCol_NavHighlight] = ImVec4(0.26f, 0.59f, 0.98f, 1.00f);
    colors[ImGuiCol_NavWindowingHighlight] = ImVec4(1.00f, 1.00f, 1.00f, 0.70f);
    colors[ImGuiCol_NavWindowingDimBg] = ImVec4(0.80f, 0.80f, 0.80f, 0.20f);
    Style.WindowPadding = ImVec2(20.000f, 11.000f);
    Style.WindowRounding = 12.000f;
    Style.ChildRounding = 5.000f;
    Style.PopupRounding = 6.000f;
    Style.FramePadding = ImVec2(10.000f, 5.000f);
    Style.FrameRounding = 8.000f;
    Style.FrameBorderSize = 1.000f;
    Style.ItemInnerSpacing = ImVec2(16.000f, 4.000f);
    Style.CellPadding = ImVec2(9.000f, 11.000f);
    Style.ScrollbarRounding = 12.000f;
    Style.GrabRounding = 7.000f;
    Style.LogSliderDeadzone = 6.000f;
    Style.TabRounding = 8.000f;
    Style.TabBorderSize = 1.000f;
    Style.ButtonTextAlign = ImVec2(0.000f, 0.000f);
};









void SetupImgui() {
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO &io = ImGui::GetIO();
    io.DisplaySize = ImVec2((float) glWidth, (float) glHeight);
    ImGui_ImplOpenGL3_Init("#version 100");
    ozTheme();
    io.IniFilename =  nullptr;
    io.BackendPlatformName = ("imgui_impl_android");
    io.Fonts->ClearFonts();
    ImFontConfig font_cfg;
    font_cfg.SizePixels = 15.0f;
    font_cfg.GlyphRanges = io.Fonts->GetGlyphRangesCyrillic();
    static const ImWchar icons_ranges[] = { 0xf000, 0xf3ff, 0 };
    ImFontConfig icons_config;
    ImFontConfig CustomFont;
    CustomFont.FontDataOwnedByAtlas = false;
    icons_config.MergeMode = true;
    icons_config.PixelSnapH = true;
    icons_config.OversampleH = 2.5;
    icons_config.OversampleV = 2.5;
    io.Fonts->AddFontFromMemoryTTF(Roboto_Regular, sizeof Roboto_Regular, 34.0f, &font_cfg);
    io.Fonts->AddFontFromMemoryCompressedTTF(font_awesome_data, font_awesome_size, 35.0f, &icons_config, icons_ranges);
    ImFontConfig cfg;
    cfg.SizePixels = 200.0f;
    io.Fonts->AddFontDefault(&cfg);
    ImGui::GetStyle().ScaleAllSizes(2.2f);
}


struct enemy_t {
    void *object;
    int team;
    void *photon;
};






bool ESPBox = false;
bool walsht = true;
int kfo;
HOOKAF(void, Input, void *thiz, void *ex_ab, void *ex_ac) {
    origInput(thiz, ex_ab, ex_ac);
    ImGui_ImplAndroid_HandleInputEvent((AInputEvent *)thiz);
    return;
}

ImDrawList* getDrawList(){
    ImDrawList *drawList;
    drawList = ImGui::GetForegroundDrawList();
    return drawList;
}
ImColor Esp_Box = ImColor(255,0,0,229);
void * is_Mine = nullptr;


bool boolch, boolfr, boolaj, boolmh, chamsrainbow, boolia, boolid, boolst, norecmenu, hbtog = false;
float dpiscale = 1.50f;
ImFont* Logo;
ImFont* Func;
ImVec4 accentColor = ImVec4(0.87f, 0.25f, 0.15f, 1.00f);
ImGuiIO* imGuiIO;

#include "font.h"
#include "fontlogo.h"
#include "fontfunc.h"
#include "ImGui/box_shadow.cpp"

void styles() {
    ImGuiStyle* style = &ImGui::GetStyle();
    style->ResetAllSizes();


    style->Colors[ImGuiCol_Text]                    = ImVec4(0.92f, 0.92f, 0.92f, 1.00f);
    style->Colors[ImGuiCol_TextDisabled]            = ImVec4(0.44f, 0.44f, 0.44f, 1.00f);
    style->Colors[ImGuiCol_WindowBg]                = ImVec4(0, 0, 0, 0);
    style->Colors[ImGuiCol_ChildBg]                 = ImVec4(0.1f, 0.1f, 0.1f, 1.00f);
    style->Colors[ImGuiCol_PopupBg]                 = ImVec4(0.08f, 0.08f, 0.08f, 0.94f);
    style->Colors[ImGuiCol_Border]                  = ImVec4(0.14f, 0.14f, 0.14f, 1.00f);
    style->Colors[ImGuiCol_BorderShadow]            = ImVec4(0.14f, 0.14f, 0.14f, 1.00f);
    style->Colors[ImGuiCol_FrameBg]                 = ImVec4(0.1f, 0.1f, 0.1f, 1.0f);
    style->Colors[ImGuiCol_FrameBgHovered]          = ImVec4(0.1f, 0.1f, 0.1f, 1.0f);
    style->Colors[ImGuiCol_FrameBgActive]           = ImVec4(0.1f, 0.1f, 0.1f, 1.0f);
    style->Colors[ImGuiCol_TitleBg]                 = ImVec4(0.10f, 0.10f, 0.10f, 0.5f);
    style->Colors[ImGuiCol_TitleBgActive]           = ImVec4(0.10f, 0.10f, 0.10f, 0.5f);
    style->Colors[ImGuiCol_TitleBgCollapsed]        = ImVec4(0.10f, 0.10f, 0.10f, 0.5f);
    style->Colors[ImGuiCol_MenuBarBg]               = ImVec4(0.11f, 0.11f, 0.11f, 1.00f);
    style->Colors[ImGuiCol_ScrollbarBg]             = ImVec4(0.06f, 0.06f, 0.06f, 0.53f);
    style->Colors[ImGuiCol_ScrollbarGrab]           = ImVec4(0.21f, 0.21f, 0.21f, 1.00f);
    style->Colors[ImGuiCol_ScrollbarGrabHovered]    = ImVec4(0.47f, 0.47f, 0.47f, 1.00f);
    style->Colors[ImGuiCol_ScrollbarGrabActive]     = ImVec4(0.81f, 0.83f, 0.81f, 1.00f);
    style->Colors[ImGuiCol_CheckMark]               = accentColor;
    style->Colors[ImGuiCol_SliderGrab]              = accentColor; //Slider color
    style->Colors[ImGuiCol_SliderGrabActive]        = accentColor; //Slider color
    style->Colors[ImGuiCol_Button]                  = ImVec4(0.14f, 0.14f, 0.14f, 1.00f);
    style->Colors[ImGuiCol_ButtonHovered]           = ImVec4(0.4f, 0.4f, 0.4f, 1.00f);
    style->Colors[ImGuiCol_ButtonActive]            = ImVec4(0.4f, 0.4f, 0.4f, 1.00f);
    style->Colors[ImGuiCol_Header]                  = ImVec4(0, 0, 0, 0);
    style->Colors[ImGuiCol_HeaderHovered]           = ImVec4(0, 0, 0, 0);
    style->Colors[ImGuiCol_HeaderActive]            = ImVec4(0, 0, 0, 0);
    style->Colors[ImGuiCol_Separator]               = ImVec4(0.21f, 0.21f, 0.21f, 1.00f);
    style->Colors[ImGuiCol_SeparatorHovered]        = accentColor; //Accent color
    style->Colors[ImGuiCol_SeparatorActive]         = ImVec4(0.78f, 0.55f, 0.21f, 1.00f);
    style->Colors[ImGuiCol_ResizeGrip]              = ImVec4(0.21f, 0.21f, 0.21f, 1.00f);
    style->Colors[ImGuiCol_ResizeGripHovered]       = accentColor; //Accent color
    style->Colors[ImGuiCol_ResizeGripActive]        = ImVec4(0.78f, 0.55f, 0.21f, 1.00f);
    style->Colors[ImGuiCol_Tab]                     = ImVec4(0.51f, 0.36f, 0.15f, 1.00f);
    style->Colors[ImGuiCol_TabHovered]              = accentColor; //Accent color
    style->Colors[ImGuiCol_TabActive]               = ImVec4(0.78f, 0.55f, 0.21f, 1.00f);
    style->Colors[ImGuiCol_TabUnfocused]            = ImVec4(0.07f, 0.10f, 0.15f, 0.97f);
    style->Colors[ImGuiCol_TabUnfocusedActive]      = ImVec4(0.14f, 0.26f, 0.42f, 1.00f);
    style->Colors[ImGuiCol_PlotLines]               = ImVec4(0.61f, 0.61f, 0.61f, 1.00f);
    style->Colors[ImGuiCol_PlotLinesHovered]        = ImVec4(1.00f, 0.43f, 0.35f, 1.00f);
    style->Colors[ImGuiCol_PlotHistogram]           = ImVec4(0.90f, 0.70f, 0.00f, 1.00f);
    style->Colors[ImGuiCol_PlotHistogramHovered]    = ImVec4(1.00f, 0.60f, 0.00f, 1.00f);
    style->Colors[ImGuiCol_TextSelectedBg]          = ImVec4(0.26f, 0.59f, 0.98f, 0.35f);
    style->Colors[ImGuiCol_DragDropTarget]          = ImVec4(1.00f, 1.00f, 0.00f, 0.90f);
    style->Colors[ImGuiCol_NavHighlight]            = ImVec4(0.26f, 0.59f, 0.98f, 1.00f);
    style->Colors[ImGuiCol_NavWindowingHighlight]   = ImVec4(1.00f, 1.00f, 1.00f, 0.70f);
    style->Colors[ImGuiCol_NavWindowingDimBg]       = ImVec4(0.80f, 0.80f, 0.80f, 0.20f);
    style->Colors[ImGuiCol_ModalWindowDimBg]        = ImVec4(0.00f, 0.00f, 0.00f, 0.40f);
    style->Colors[ImGuiCol_FrameBg]                 = ImVec4(0, 0, 0, 0);
    style->Colors[ImGuiCol_FrameBgActive]           = ImVec4(0, 0, 0, 0);
    style->Colors[ImGuiCol_FrameBgHovered]          = ImVec4(0, 0, 0, 0);

    style->FrameBorderSize = dpiscale / 1.50f;
    style->ChildBorderSize = 0;
    style->WindowBorderSize = 0;
    style->FramePadding = ImVec2(2, 2) * dpiscale / 1.50f;
    style->ItemSpacing = ImVec2(4, 4) * dpiscale / 1.50f;
    style->IndentSpacing = 0;
    style->ScrollbarSize = 10 * dpiscale / 1.50f;
    style->WindowRounding = 5 * dpiscale;
    style->FrameRounding = 2 * dpiscale / 1.50f;
    style->PopupRounding = 0;
    style->ScrollbarRounding = 1 * dpiscale / 1.50f;
    style->GrabRounding = 2 * dpiscale / 1.50f;
    style->TabRounding = 0;
    style->WindowTitleAlign = ImVec2(0, 0);
    style->DisplaySafeAreaPadding = ImVec2(0, 0);
    style->WindowRounding = 5 * dpiscale;
    style->Alpha = 1;
    style->WindowPadding = ImVec2(0,0);
    style->DpiScale = dpiscale;
    style->ItemInnerSpacing = ImVec2(4,4) * dpiscale;

    style->ScaleAllSizes(3);
}

void setupGraphics() {
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    imGuiIO = &ImGui::GetIO();
    styles();
    ImGui::GetStyle().Colors[ImGuiCol_FrameBg] = ImVec4(0, 0, 0, 0);
    ImGui::GetStyle().Colors[ImGuiCol_FrameBgActive] = ImVec4(0, 0, 0, 0);
    ImGui::GetStyle().Colors[ImGuiCol_FrameBgHovered] = ImVec4(0, 0, 0, 0);
    imGuiIO->BackendPlatformName = ("imgui_impl_android");
    imGuiIO->IniFilename = nullptr;
}

void UpdateFont() {

    imGuiIO->Fonts->ClearFonts();

    {
        ImFontConfig font_cfg;
        font_cfg.SizePixels = 22.0f;
        font_cfg.GlyphRanges = imGuiIO->Fonts->GetGlyphRangesCyrillic();
        Logo = imGuiIO->Fonts->AddFontFromMemoryTTF(&Font2, sizeof Font2, 22.0f,&font_cfg);
    }
    {
        ImFontConfig font_cfg;
        font_cfg.SizePixels = 36;
        font_cfg.GlyphRanges = imGuiIO->Fonts->GetGlyphRangesCyrillic();
        Func = imGuiIO->Fonts->AddFontFromMemoryTTF(&Font3, sizeof Font3, 36,&font_cfg);
    }

    {
        ImFontConfig font_cfg;
        font_cfg.SizePixels = 22.0f;
        font_cfg.GlyphRanges = imGuiIO->Fonts->GetGlyphRangesCyrillic();
        imGuiIO->Fonts->AddFontFromMemoryTTF(&Font, sizeof Font, 22.0f,&font_cfg);
    }

    imGuiIO->FontGlobalScale = dpiscale;
}
void StartBackend(){
    setupGraphics();
    UpdateFont();
}



bool closed = false;

float openeds = 450;
float closeds = 75;
template <typename T>
inline T clamp(const T& n, const T& lower, const T& upper) {
    return std::max(lower, std::min(n, upper));
}

inline float lerp(float a, float b, float f) {
    return clamp<float>(a + f * (b - a),a > b ? b : a,a > b ? a : b);
}

float lerped = 450;
int csel            = 1;


bool test1;
bool test2;
bool test3;
bool test4;
bool test5;
bool test6;
bool test7;

float testslider1;
int testslider2;

float textsize;
float shadowsize;
bool rgpshadow;
float dpiscalechange = 1.50f;

void featurese(int sel, int ch) {
    if (sel == 1) {
        if (ch == 1) {
            ImGui::Text(("%s"), std::string(("test title 1")).c_str());

            if (ImGui::Checkbox(("dpi"), &test1)) {
                if (test1) {
                    dpiscalechange = 2.0f;
                } else {
                    dpiscalechange = 1.0f;
                }
                styles();
                imGuiIO->FontGlobalScale = dpiscale;
            }
            ImGui::Checkbox(("test check 2"), &test2);
            ImGui::Checkbox(("test check 3"), &test3);
            ImGui::SliderFloat(("test slider 1"), &testslider1, 0, 100,
                               ("%.2f"));
            ImGui::SliderInt(("test slider 2"), &testslider2, 0, 10);
            ImGui::Button("test button 1");
            ImGui::Button("test button 2");
            ImGui::Button("test button 3");
            ImGui::Button("test button 4");
            ImGui::Button("test button 5");

        }
        if (ch == 2) {
            ImGui::SliderFloat(("text size"), &textsize, 0, 100, ("%.2f"));
            ImGui::SliderFloat(("shadow size"), &shadowsize, 0, 3, ("%.2f"));
            ImGui::Checkbox(("shadow rgb"), &rgpshadow);

            ImGui::Checkbox(("test check 4"), &test4);
            ImGui::Checkbox(("test check 5"), &test5);
            ImGui::Checkbox(("test check 6"), &test6);
            ImGui::Checkbox(("test check 7"), &test7);
        }
    }
}
bool boels;
void DrawMenu() {
    dpiscale = dpiscalechange * (glHeight / 1080);
    styles();
    imGuiIO->FontGlobalScale = dpiscale;

    ImGui::GetStyle().WindowMinSize = ImVec2(600, 500) * dpiscale;
    ImGui::SetNextWindowPos(ImVec2(200, 200),ImGuiCond_FirstUseEver);
    ImGui::SetNextWindowSize(ImVec2(600, 500) * dpiscale,ImGuiCond_FirstUseEver);
    ImGui::Begin(("##menuuuuuuu"), &boels, ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoScrollbar);

    float menuWidth = ImGui::GetWindowWidth();
    float windowHeight = ImGui::GetWindowHeight();

    static float animleft = 1;
    static float animright = 1;
    animleft = lerp(animleft, 0, imGuiIO->DeltaTime * 5);
    animright = lerp(animright, 0, imGuiIO->DeltaTime * 5);

    {
        RectangleShadowSettings shadowSettings;
        shadowSettings.rectPos = ImVec2(2.5f * dpiscale, 2.5f * dpiscale);
        shadowSettings.rectSize = ImVec2(ImGui::GetWindowSize().x, 80 * dpiscale) - ImVec2(5 * dpiscale, 5 * dpiscale);
        shadowSettings.sigma = 10;
        shadowSettings.rings = 4;
        shadowSettings.spacingBetweenRings = 3;
        shadowSettings.samplesPerCornerSide = 3;
        shadowSettings.spacingBetweenSamples = 15;
        shadowSettings.shadowColor = ImColor(77,111,192,255);
        shadowSettings.shadowSize = ImVec2(0,0);
        drawRectangleShadowVerticesAdaptive(shadowSettings);

        ImGui::GetWindowDrawList()->AddRectFilled(ImGui::GetWindowPos(), ImGui::GetWindowPos() + ImVec2(menuWidth, 80 * dpiscale), ImColor(0,0,0), 5 * dpiscale);
        ImGui::GetWindowDrawList()->AddRectFilled(ImGui::GetWindowPos() + ImVec2(2 * dpiscale, 2 * dpiscale), ImGui::GetWindowPos() - ImVec2(2 * dpiscale, 2 * dpiscale) + ImVec2(menuWidth, 80 * dpiscale), ImColor(31 ,37,52), 5 * dpiscale);
        ImGui::GetWindowDrawList()->AddRectFilled(ImGui::GetWindowPos(), ImGui::GetWindowPos() + ImVec2(menuWidth, 10 * dpiscale), ImColor(77,111,192), 5 * dpiscale, ImDrawFlags_RoundCornersTop);
        ImGui::GetWindowDrawList()->AddRectFilledMultiColor(ImGui::GetWindowPos() + ImVec2(0, 5 * dpiscale), ImGui::GetWindowPos() + ImVec2(menuWidth, 30 * dpiscale), ImColor(77,111,192, 80),ImColor(77,111,192, 80),ImColor(77,111,192, 0),ImColor(77,111,192, 0));
        ImGui::GetWindowDrawList()->AddText(Func,36 * dpiscale,ImGui::GetWindowPos() + ImVec2(20 * dpiscale, 40 * dpiscale + 5 * dpiscale) - ImVec2(0, (ImGui::CalcTextSize("alternative") / ImVec2(22 * dpiscale,22 * dpiscale) * 36 * dpiscale).y / 2),ImColor(255,255,255),("alternative"));
        ImGui::GetWindowDrawList()->AddRectFilled(ImGui::GetWindowPos() + ImVec2((ImGui::CalcTextSize("alternative") / ImVec2(22 * dpiscale,22 * dpiscale) * 36 * dpiscale).x, 40 * dpiscale + 5 * dpiscale) - ImVec2(1 * dpiscale, 15 * dpiscale),
                                                  ImGui::GetWindowPos() + ImVec2((ImGui::CalcTextSize("alternative") / ImVec2(22 * dpiscale,22 * dpiscale) * 36 * dpiscale).x, 40 * dpiscale + 5 * dpiscale) + ImVec2(1 * dpiscale, 15 * dpiscale),
                                                  ImColor(255,255,255,150), 10 * dpiscale);

        ImGui::SetCursorPos(ImVec2((ImGui::CalcTextSize("alternative") / ImVec2(22 * dpiscale,22 * dpiscale) * 36 * dpiscale).x, 40 * dpiscale + 5 * dpiscale) + ImVec2(15 * dpiscale, 0) - ImVec2(0, 19 * dpiscale));
        if (ImGui::Button("globals", ImVec2(100 * dpiscale, 30 * dpiscale))) {
            csel = 1;
            animleft = 1;
            animright = 1;
        }

        ImGui::SetCursorPos(ImVec2((ImGui::CalcTextSize("alternative") / ImVec2(22 * dpiscale,22 * dpiscale) * 36 * dpiscale).x, 40 * dpiscale + 5 * dpiscale) + ImVec2(15 * dpiscale + 110 * dpiscale, 0) - ImVec2(0, 19 * dpiscale));
        if (ImGui::Button("visuals", ImVec2(100 * dpiscale, 30 * dpiscale))) {
            csel = 2;
            animleft = 1;
            animright = 1;
        }

        ImGui::SetCursorPos(ImVec2((ImGui::CalcTextSize("alternative") / ImVec2(22 * dpiscale,22 * dpiscale) * 36 * dpiscale).x, 40 * dpiscale + 5 * dpiscale) + ImVec2(15 * dpiscale + 220 * dpiscale, 0) - ImVec2(0, 19 * dpiscale));
        if (ImGui::Button("misc", ImVec2(100 * dpiscale, 30 * dpiscale))) {
            csel = 3;
            animleft = 1;
            animright = 1;
        }


    }

    {
        RectangleShadowSettings shadowSettings;
        shadowSettings.rectPos = ImVec2(2.5f * dpiscale, 100 * dpiscale + 2.5f * dpiscale);
        shadowSettings.rectSize = ImVec2(ImGui::GetWindowSize().x - 5 * dpiscale, ImGui::GetWindowSize().y - 100 * dpiscale - 5 * dpiscale);
        shadowSettings.sigma = 10;
        shadowSettings.rings = 4;
        shadowSettings.spacingBetweenRings = 3;
        shadowSettings.samplesPerCornerSide = 3;
        shadowSettings.spacingBetweenSamples = 15;
        shadowSettings.shadowColor = ImColor(77,111,192,255);
        shadowSettings.shadowSize = ImVec2(0,0);
        drawRectangleShadowVerticesAdaptive(shadowSettings);

        ImGui::GetWindowDrawList()->AddRectFilled(ImGui::GetWindowPos() + ImVec2(0, 100 * dpiscale), ImGui::GetWindowPos() + ImGui::GetWindowSize(), ImColor(0,0,0), 5 * dpiscale);
        ImGui::GetWindowDrawList()->AddRectFilled(ImGui::GetWindowPos() + ImVec2(0, 100 * dpiscale) + ImVec2(2 * dpiscale, 2 * dpiscale), ImGui::GetWindowPos() + ImGui::GetWindowSize() - ImVec2(2 * dpiscale, 2 * dpiscale), ImColor(22,26,37), 5 * dpiscale);
        ImGui::GetWindowDrawList()->AddRectFilled(ImGui::GetWindowPos() + ImVec2(0, ImGui::GetWindowSize().y - 30 * dpiscale), ImGui::GetWindowPos() + ImGui::GetWindowSize(), ImColor(0,0,0), 5 * dpiscale);
        ImGui::GetWindowDrawList()->AddRectFilled(ImGui::GetWindowPos() + ImVec2(0, ImGui::GetWindowSize().y - 30 * dpiscale) + ImVec2(2 * dpiscale, 2 * dpiscale), ImGui::GetWindowPos() + ImGui::GetWindowSize() - ImVec2(2 * dpiscale, 2 * dpiscale), ImColor(31 ,37,52), 5 * dpiscale,ImDrawFlags_RoundCornersBottom);
        ImGui::GetWindowDrawList()->AddText(Func,30 * dpiscale,ImGui::GetWindowPos() + ImVec2(10 * dpiscale, ImGui::GetWindowSize().y - 15 * dpiscale) - ImVec2(0, (ImGui::CalcTextSize("v6 recode") / ImVec2(22 * dpiscale,22 * dpiscale) * 30 * dpiscale).y / 2),ImColor(255,255,255),("v6 recode"));
        ImGui::GetWindowDrawList()->AddText(Func,30 * dpiscale,ImGui::GetWindowPos() + ImVec2(ImGui::GetWindowSize().x, ImGui::GetWindowSize().y - 15 * dpiscale) - ImVec2((ImGui::CalcTextSize("close") / ImVec2(22 * dpiscale,22 * dpiscale) * 30 * dpiscale).x, (ImGui::CalcTextSize("close") / ImVec2(22 * dpiscale,22 * dpiscale) * 30 * dpiscale).y / 2),ImColor(255,255,255),("close"));


        {
            RectangleShadowSettings shadowSettings;
            shadowSettings.rectPos = ImVec2(2.5f * dpiscale, 100 * dpiscale + 2.5f * dpiscale) + ImVec2(30 * dpiscale, 30 * dpiscale);
            shadowSettings.rectSize = ImVec2(ImGui::GetWindowSize().x - 5 * dpiscale, ImGui::GetWindowSize().y - 100 * dpiscale - 5 * dpiscale) - ImVec2(30 * dpiscale, 60 * dpiscale) - ImVec2(ImGui::GetWindowSize().x / 2 + 15 * dpiscale, 30 * dpiscale);
            shadowSettings.sigma = 10;
            shadowSettings.rings = 4;
            shadowSettings.spacingBetweenRings = 3;
            shadowSettings.samplesPerCornerSide = 3;
            shadowSettings.spacingBetweenSamples = 15;
            shadowSettings.shadowColor = ImColor(77,111,192,120);
            shadowSettings.shadowSize = ImVec2(0,0);
            drawRectangleShadowVerticesAdaptive(shadowSettings, true);
        }

        ImGui::GetWindowDrawList()->AddRectFilled(ImGui::GetWindowPos() + ImVec2(0, 100 * dpiscale) + ImVec2(30 * dpiscale, 30 * dpiscale), ImGui::GetWindowPos() + ImGui::GetWindowSize() - ImVec2(0, 30 * dpiscale) - ImVec2(ImGui::GetWindowSize().x / 2 + 15 * dpiscale, 30 * dpiscale), ImColor(0,0,0), 5 * dpiscale);
        ImGui::GetWindowDrawList()->AddRectFilled(ImGui::GetWindowPos() + ImVec2(0, 100 * dpiscale) + ImVec2(30 * dpiscale, 30 * dpiscale) + ImVec2(2 * dpiscale, 2 * dpiscale), ImGui::GetWindowPos() + ImGui::GetWindowSize() - ImVec2(0, 30 * dpiscale) - ImVec2(ImGui::GetWindowSize().x / 2 + 15 * dpiscale, 30 * dpiscale) - ImVec2(2 * dpiscale, 2 * dpiscale), ImColor(31,37,52), 5 * dpiscale);
        ImGui::SetCursorPos(ImVec2(0, 100 * dpiscale) + ImVec2(30 * dpiscale, 30 * dpiscale) + ImVec2(0, 8 * dpiscale));
        if (ImGui::BeginListBox(("##ws"), ImVec2(ImGui::GetWindowSize().x, ImGui::GetWindowSize().y - 100 * dpiscale) - ImVec2(30 * dpiscale, 60 * dpiscale) - ImVec2(ImGui::GetWindowSize().x / 2 + 15 * dpiscale, 30 * dpiscale) - ImVec2(0, 8 * dpiscale))) {
            featurese(csel, 1);
            ImGui::EndListBox();
        }
        ImGui::GetWindowDrawList()->AddRectFilled(ImGui::GetWindowPos() + ImVec2(0, 100 * dpiscale) + ImVec2(30 * dpiscale, 30 * dpiscale) + ImVec2(2 * dpiscale, 2 * dpiscale), ImGui::GetWindowPos() + ImGui::GetWindowSize() - ImVec2(0, 30 * dpiscale) - ImVec2(ImGui::GetWindowSize().x / 2 + 15 * dpiscale, 30 * dpiscale) - ImVec2(2 * dpiscale, 2 * dpiscale), ImColor(31,37,52,int(255.0f * animleft)), 5 * dpiscale);
        ImGui::GetWindowDrawList()->AddRectFilled(ImGui::GetWindowPos() + ImVec2(0, 100 * dpiscale) + ImVec2(30 * dpiscale, 30 * dpiscale), ImGui::GetWindowPos() + ImVec2(ImGui::GetWindowSize().x, 0) + ImVec2(0, 100 * dpiscale) + ImVec2(0, 30 * dpiscale) - ImVec2(ImGui::GetWindowSize().x / 2 + 15 * dpiscale, 0) + ImVec2(0, 8 * dpiscale), ImColor(77,111,192), 5 * dpiscale, ImDrawFlags_RoundCornersTop);
        ImGui::GetWindowDrawList()->AddRectFilledMultiColor(ImGui::GetWindowPos() + ImVec2(0, 100 * dpiscale) + ImVec2(30 * dpiscale, 30 * dpiscale) + ImVec2(0, 5 * dpiscale), ImGui::GetWindowPos() + ImVec2(ImGui::GetWindowSize().x, 0) + ImVec2(0, 100 * dpiscale) + ImVec2(0, 30 * dpiscale) - ImVec2(ImGui::GetWindowSize().x / 2 + 15 * dpiscale, 0) + ImVec2(0, 30 * dpiscale),  ImColor(77,111,192, 80),ImColor(77,111,192, 80),ImColor(77,111,192, 0),ImColor(77,111,192, 0));

        {
            RectangleShadowSettings shadowSettings;
            shadowSettings.rectPos = ImVec2(2.5f * dpiscale, 100 * dpiscale + 2.5f * dpiscale) + ImVec2(15 * dpiscale + ImGui::GetWindowSize().x / 2, 30 * dpiscale);
            shadowSettings.rectSize = ImVec2(ImGui::GetWindowSize().x - 5 * dpiscale, ImGui::GetWindowSize().y - 100 * dpiscale - 5 * dpiscale) - ImVec2(45 * dpiscale + ImGui::GetWindowSize().x / 2, 90 * dpiscale);
            shadowSettings.sigma = 10;
            shadowSettings.rings = 4;
            shadowSettings.spacingBetweenRings = 3;
            shadowSettings.samplesPerCornerSide = 3;
            shadowSettings.spacingBetweenSamples = 15;
            shadowSettings.shadowColor = ImColor(77,111,192,120);
            shadowSettings.shadowSize = ImVec2(0,0);
            drawRectangleShadowVerticesAdaptive(shadowSettings, true);
        }

        ImGui::GetWindowDrawList()->AddRectFilled(ImGui::GetWindowPos() + ImVec2(0, 100 * dpiscale) + ImVec2(ImGui::GetWindowSize().x / 2 + 15 * dpiscale, 30 * dpiscale), ImGui::GetWindowPos() + ImGui::GetWindowSize() - ImVec2(0, 30 * dpiscale) - ImVec2(30 * dpiscale, 30 * dpiscale), ImColor(0,0,0), 5 * dpiscale);
        ImGui::GetWindowDrawList()->AddRectFilled(ImGui::GetWindowPos() + ImVec2(0, 100 * dpiscale) + ImVec2(ImGui::GetWindowSize().x / 2 + 15 * dpiscale, 30 * dpiscale) + ImVec2(2 * dpiscale, 2 * dpiscale), ImGui::GetWindowPos() + ImGui::GetWindowSize() - ImVec2(0, 30 * dpiscale) - ImVec2(30 * dpiscale, 30 * dpiscale) - ImVec2(2 * dpiscale, 2 * dpiscale), ImColor(31,37,52), 5 * dpiscale);
        ImGui::SetCursorPos(ImVec2(0, 100 * dpiscale) + ImVec2(15 * dpiscale + ImGui::GetWindowSize().x / 2, 30 * dpiscale) + ImVec2(0, 8 * dpiscale));
        if (ImGui::BeginListBox(("##wf"),ImVec2(ImGui::GetWindowSize().x, ImGui::GetWindowSize().y - 100 * dpiscale) - ImVec2(45 * dpiscale + ImGui::GetWindowSize().x / 2, 90 * dpiscale) - ImVec2(0, 8 * dpiscale))) {
            featurese(csel, 2);
            ImGui::EndListBox();
        }
        ImGui::GetWindowDrawList()->AddRectFilled(ImGui::GetWindowPos() + ImVec2(0, 100 * dpiscale) + ImVec2(ImGui::GetWindowSize().x / 2 + 15 * dpiscale, 30 * dpiscale) + ImVec2(2 * dpiscale, 2 * dpiscale), ImGui::GetWindowPos() + ImGui::GetWindowSize() - ImVec2(0, 30 * dpiscale) - ImVec2(30 * dpiscale, 30 * dpiscale) - ImVec2(2 * dpiscale, 2 * dpiscale), ImColor(31,37,52, int(255.0f * animright)), 5 * dpiscale);
        ImGui::GetWindowDrawList()->AddRectFilled(ImGui::GetWindowPos() + ImVec2(0, 100 * dpiscale) + ImVec2(ImGui::GetWindowSize().x / 2 + 15 * dpiscale, 30 * dpiscale), ImGui::GetWindowPos() + ImVec2(ImGui::GetWindowSize().x,0) + ImVec2(0, 100 * dpiscale) + ImVec2(0, 30 * dpiscale) - ImVec2(30 * dpiscale, 0) + ImVec2(0, 8 * dpiscale), ImColor(77,111,192), 5 * dpiscale, ImDrawFlags_RoundCornersTop);
        ImGui::GetWindowDrawList()->AddRectFilledMultiColor(ImGui::GetWindowPos() + ImVec2(0, 100 * dpiscale) + ImVec2(ImGui::GetWindowSize().x / 2 + 15 * dpiscale, 30 * dpiscale) + ImVec2(0, 5 * dpiscale), ImGui::GetWindowPos() + ImVec2(ImGui::GetWindowSize().x,0) + ImVec2(0, 100 * dpiscale) + ImVec2(0, 30 * dpiscale) - ImVec2(30 * dpiscale, 0) + ImVec2(0, 30 * dpiscale),  ImColor(77,111,192, 80),ImColor(77,111,192, 80),ImColor(77,111,192, 0),ImColor(77,111,192, 0));
    }


    ImGui::End();
}

int tabb = 2;
EGLBoolean (*old_eglSwapBuffers)(EGLDisplay dpy, EGLSurface surface);
EGLBoolean hook_eglSwapBuffers(EGLDisplay dpy, EGLSurface surface) {
    eglQuerySurface(dpy, surface, EGL_WIDTH, &glWidth);
    eglQuerySurface(dpy, surface, EGL_HEIGHT, &glHeight);
    if (!setupimg) {
        SetupImgui();
        setupimg = true;
    }
    ImGuiIO &io = ImGui::GetIO();
    ImGui_ImplOpenGL3_NewFrame();
    ImGui::NewFrame();

    DrawMenu();

    if(silentfov) {
        ImGui::Begin("##dsdsfds",nullptr, ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoScrollbar  | ImGuiWindowFlags_AlwaysAutoResize | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoBackground);
        auto draw = ImGui::GetBackgroundDrawList();
        draw->AddCircle(ImVec2(glWidth / 2, glHeight / 2),  aimffv, ImGui::ColorConvertFloat4ToU32(aimclr), 100, 1.5f);
        ImGui::End();
    }
    if(svaston) {
        ImGui::Begin("##ds432dsfds",nullptr, ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoScrollbar  | ImGuiWindowFlags_AlwaysAutoResize | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoBackground);
        auto donbass = ImGui::GetBackgroundDrawList();
        donbass->SwastonCrosshairv1();
        ImGui::End();
    }
    ImGui::EndFrame();
    ImGui::Render();
    ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());
    return old_eglSwapBuffers(dpy, surface);
}



int (*old_get_TouchCount)(void *instance);
int get_TouchCount(void* instance){
    ImGuiIO& io = ImGui::GetIO();
    if (io.WantCaptureMouse) {
        return 0;
    }
    return old_get_TouchCount(instance);
}


bool (*old_air_jump_system_general)(void* inst);
bool air_jump_system(void* inst){
    if (boolaj){
        return true;
    }
    return old_air_jump_system_general(inst);
}



int (*old_EquippedSkin)(void *instance, int weaponId);
int EquippedSkin(void *instance, int weaponId) {
    if (weaponId == Knifez::KnifeKarambit) {
        return karambitskinid;
    }
    if (weaponId == Knifez::KnifeBayonet) {
        return m9skinid;
    }
    if (weaponId == Knifez::KnifeButterfly) {
        return butterflyskinid;
    }
    if (weaponId == Knifez::DaggerKnife) {
        return daggerskinid;
    }
    if (weaponId == Knifez::KunaiKnife) {
        return kunaiskinid;
    }
    if (weaponId == Knifez::KnifeTanto) {
        return tantoskinid;
    }
    if (weaponId == Knifez::KnifeKukri) {
        return kukriskinid;
    }
    if (weaponId == Knifez::jKommando) {
        return jkomskinid;
    }
    if (weaponId == Knifez::ScorpionKnife) {
        return scorpionskinid;
    }
    if (weaponId == Knifez::FlipKnife) {
        return flipknifeskinid;
    }

    return old_EquippedSkin(instance, weaponId);
}

int (*old_EquippedKnife)(void *instance);
int EquippedKnife(void *instance) {
    if (selectedknife == 1) {
        return Knifez::KnifeKarambit;
    }
    if (selectedknife == 2) {
        return Knifez::KnifeBayonet;
    }
    if (selectedknife == 3) {
        return Knifez::KnifeButterfly;
    }
    if (selectedknife == 4) {
        return Knifez::DaggerKnife;
    }
    if (selectedknife == 5) {
        return Knifez::KunaiKnife;
    }
    if (selectedknife == 6) {
        return Knifez::KnifeTanto;
    }
    if (selectedknife == 7) {
        return Knifez::KnifeKukri;
    }
    if (selectedknife == 8) {
        return Knifez::jKommando;
    }
    if (selectedknife == 10) {
        return Knifez::FlipKnife;
    }
    if (selectedknife == 9) {
        return Knifez::ScorpionKnife;
    }

    return EquippedKnife(instance);
}

int (*old_setGloves)(void *instance);
int setGloves(void* instance){
    if(selectedgloves != 0){
        return glovesid;
    }
    return old_setGloves(instance);
}


void* (*get_BipedMap)(void* bone);
void* (*old_PlayerControllerUpdate)(void *player);
void *get_head(void *player) {
    return *(void **)((uint64_t) get_BipedMap(player) + 0xC);
}

void *get_neck(void *player) {
    return *(void **)((uint64_t) get_BipedMap(player) + 0x10);
}
void *get_hip(void *player) {
    return *(void **)((uint64_t) get_BipedMap(player) + 0x3C);
}



void *aimedplayer = nullptr;

void* crurbones;

void PlayerControllerUpdate(void* player){
    old_PlayerControllerUpdate(player);
    if(svaston) {
        if (rm == 255){
            if (bm == 0 ){
                if (gm == 255){}
                else{
                    gm = gm+1;
                }
            }
        }
        if (gm == 255){
            if (rm == 0){} else{
                rm = rm-1;
            }
        }
        if (gm == 255) {
            if (rm == 0) {
                if (bm==255){} else{
                    bm = bm+1;
                }
            }
        }
        if (bm == 255) {
            if (gm == 0) {
                mm = 1;
                rm = rm+1;
            }
            else{
                gm = gm-1;
            }
        }
        if (mm == 1){
            if (rm == 255){
                if (bm == 0){} else{
                    bm = bm-1;
                }
            }
        }
    }
    if (player != NULL) {
        if (IsLocal(get_photon(player)) && !IsPlayerDead(get_photon(player))) {
            myPlayer = player;
        }
        if (myPlayer) {
            if (GetPlayerTeam(get_photon(myPlayer)) != GetPlayerTeam(get_photon(player))) {
                enemyPlayer = player;
            }

            if (ThirdPerson) {
                set_TpsView3(player);
            }
            void *arms = *(void **) ((uint64_t) player + 0x40);
            if (arms) {
                if (handspos) {
                    *(Vector3 *) ((uint64_t) arms + 0x94) = Vector3(xx * 0.01 / 10, yy * 0.01 / 10,
                                                                    zz * 0.01 / 10);
                }
                *(bool *) ((uint64_t) arms + 0x44) = false;
                *(bool *) ((uint64_t) arms + 0x44) = !handspos;

            }

        }


        if (enemyPlayer) {
            if (telekill) {
                Vector3 enemyLocation = GetPlayerLocation(enemyPlayer);
                set_position(get_transform(myPlayer),
                             Vector3(enemyLocation.x, enemyLocation.y, enemyLocation.z - 1));
            }
            if (!IsPlayerDead(get_photon(enemyPlayer)) && enemyPlayer != NULL) {
                if (masskill) {
                    Vector3 PlayerLocation = GetPlayerLocation(myPlayer);
                    set_position(get_transform(enemyPlayer),
                                 Vector3(PlayerLocation.x, PlayerLocation.y,
                                         PlayerLocation.z + 1));

                }
            }
            if(aimedplayer != NULL) {
                switch (currbno) {
                    case 0:
                        crurbones = get_head(aimedplayer);
                        break;
                    case 1:
                        crurbones = get_neck(aimedplayer);
                        break;
                    case 2:
                        crurbones = get_hip(aimedplayer);
                        break;
                }
            }
            if (slaim && enemyPlayer && get_BipedMap(enemyPlayer) && GetPlayerHealth(get_photon(enemyPlayer)) > 0) {
                Vector3 pos = GetPlayerLocation(enemyPlayer);
                Vector3 w2s1 = WorldToScreenPoint(get_camera(),pos + Vector3(0, 1.3f, 0));
                bool checker = w2s1.z > 0;
                Vector2 w2ss = Vector2(w2s1.x, w2s1.y);
                auto dist = Vector2::Distance(w2ss, Vector2(glWidth / 2, glHeight / 2));
                if (silentfov && checker && dist <= aimffv) {
                    aimedplayer = enemyPlayer;
                }
                else {
                    aimedplayer = enemyPlayer;
                }
            }
            if(defaim && enemyPlayer && GetPlayerHealth(get_photon(enemyPlayer)) > 0 ) {


                void *AimInst = *(void **) ((uint64_t) myPlayer + 0x30);
                    void *AimingData = *(void **) ((uint64_t) AimInst + 0x5C);
                    if(AimingData) {

                        Vector3 pos = GetPlayerLocation(enemyPlayer);
                        Vector3 w2s1 = WorldToScreenPoint(get_camera(),pos + Vector3(0, 1.3f, 0));
                        bool checker = w2s1.z > 0;
                        Vector2 w2ss = Vector2(w2s1.x, w2s1.y);
                        auto dist = Vector2::Distance(w2ss, Vector2(glWidth / 2, glHeight / 2));
                        if (silentfov && checker && dist <= aimffv) {
                            aimedplayer = enemyPlayer;
                        }
                        else {
                            aimedplayer = enemyPlayer;
                        }
                        PlayerLook = Quaternion::LookRotation(
                                (GetPlayerLocation(crurbones) -
                                 GetPlayerLocation(myPlayer), Vector3(0, 1, 0)));
                    Vector3 angle = ToEulerRad(PlayerLook);
                    if (angle.x >= 275.0f)
                        angle.x -= 360.0f;
                    if (angle.x <= -275.0f)
                        angle.x += 360.0f;
                    *(Vector3 *) ((uint64_t) AimingData + 0x10) = angle;
                    *(Vector3 *) ((uint64_t) AimingData + 0x1C) = angle;
                }
            }

        }

    }


}



void* (*old_CastBullet)(Vectorr3 start, Vectorr3 dir, void* data);
void* CastBullet(Vectorr3 start, Vectorr3 dir, void* data) {
    if(slaim && aimedplayer && GetPlayerHealth(get_photon(aimedplayer)) > 0) {
        Vector3 enemyLocation = GetHeadLocation(crurbones);
        Vector3 w2s1 = WorldToScreenPoint(get_camera(),enemyLocation + Vector3(0, 1.3f, 0));
        bool checker = w2s1.z > 0;
        Vector2 w2ss = Vector2(w2s1.x, w2s1.y);
        auto dist = Vector2::Distance(w2ss, Vector2(glWidth / 2, glHeight / 2));
        if (silentfov && checker && dist <= aimffv && chance < yourchance) {
            dir = Vectorr3::Normalized(
                    Vectorr3(enemyLocation.x, enemyLocation.y, enemyLocation.z) - start);
        } else {
            dir = dir;
            return old_CastBullet(start, dir, data);
        }
    } else {
        dir = dir;
        return old_CastBullet(start, dir, data);
    }
    return old_CastBullet(start, dir, data);
}



void* (*old_CameraControllerFPS_LateUpdate)(void *ltupd);
void CameraControllerFPS_LateUpdate(void* ltupd){
    if (ThirdPerson) {
            set_position(get_transform(get_camera()),
                         GetPlayerLocation(get_camera()) -
                         get_forward(get_transform(get_camera())) * 1.5);
        }
    old_CameraControllerFPS_LateUpdate(ltupd);
}

float (*old_PlayerTranslationParameters_get_SpeedDefault)(void* instance);
float PlayerTranslationParameters_get_SpeedDefault(void* instance) {
    if (speedh) {
        return movefloat;
    }
    return old_PlayerTranslationParameters_get_SpeedDefault(instance);
}

float (*old_Get_PenetrationLoss)(void* inst, int type, float pnt);
float Get_PenetrationLoss(void* inst, int type, float pnt) {
    if (walsht) {
        return old_Get_PenetrationLoss(inst, type, 0.000001f);
    }
    return old_Get_PenetrationLoss(inst, type, pnt);
}

int (*old_Get_FireRate)(void* instance);
int Get_FireRate(void* instance) {
    if (boolfr) {
        return 999999999;
    }
    return old_Get_FireRate(instance);
}



float (*old_Get_TimeStamp)(void* inst);
float Get_TimeStamp(void* inst) {
    if (gmode) {
        return DBL_MAX;
    }
    return old_Get_TimeStamp(inst);
}
void (*old_RagdollController_Simulate)(void* inst, void* bipedMap, Vectorr3 velocity, void* hitData, bool shooter);
void RagdollController_Simulate(void* inst, void* bipedMap, Vectorr3 velocity, void* hitData, bool shooter) {
    if (ragdoll) {
            velocity = Vectorr3(velocity.X, velocity.Y + 17, velocity.Z);
    }
    old_RagdollController_Simulate(inst, bipedMap, velocity, hitData, shooter);
}


void (*old_CameraScopeZoomer_Update)(void* inst);
void CameraScopeZoomer_Update(void* inst) {
    if(fove) {
        *(float *) ((uint64_t) inst + 0x18) = fovc;
    }
    old_CameraScopeZoomer_Update(inst);
}




void(*old_KnifeController_LocalUpdate)(void* knf);

void KnifeController_LocalUpdate(void *knf) {
    if(fastknife) {
        *(float *) ((uint64_t) knf + 0x44) = 0.0f;
    }
    old_KnifeController_LocalUpdate(knf);
}





void (*old_PlayerHitbox_Instantiate)(void *updragg, void* params, int hh, float ff);
void PlayerHitbox_Instantiate(void *updragg, void* params, int hh, float ff) {
    if(haim){
        float x = 2;
        float y = 2;
        float z = 2;

        void* hitboxconfig = (void *)((uint64_t)updragg + 0x14);
        *(Vector3 *)((uint64_t)hitboxconfig + 0x1C) = Vector3(x, y, z);
        *(float *)((uint64_t)hitboxconfig + 0x30) = *(float *)((uint64_t)params + 0x30) + 10.5f;
        *(float *)((uint64_t)hitboxconfig + 0x2C) = 2.0f;

    }
    old_PlayerHitbox_Instantiate(updragg, params, hh , ff);
}




float startTime;
void *hack_thread(void *arg){
    sleep(2);
    auto addr = (uintptr_t)dlsym(RTLD_NEXT, "eglSwapBuffers");
    DobbyHook((void*)addr, (dobby_dummy_func_t)hook_eglSwapBuffers, (dobby_dummy_func_t*)&old_eglSwapBuffers);
    void *sym_input = DobbySymbolResolver(("/system/lib/libinput.so"), ("_ZN7android13InputConsumer21initializeMotionEventEPNS_11MotionEventEPKNS_12InputMessageE"));
    if (NULL != sym_input) {
        DobbyHook(sym_input,(dobby_dummy_func_t)myInput,(dobby_dummy_func_t*)&origInput);
    }
    ProcMap il2cppMap;
    do {
        il2cppMap = KittyMemory::getLibraryMap(libName);
        sleep(1);
    } while (!il2cppMap.isValid());
    mlovinit();
    setShader("_BumpMap");

    Wallhack();
    LogShaders();
    hexPatches.Radar1 = MemoryPatch::createWithHex("libil2cpp.so", string2Offset(AY_OBFUSCATE("0x2C54420")), "20 00 A0 E3");
    hexPatches.Radar2 = MemoryPatch::createWithHex("libil2cpp.so", string2Offset(AY_OBFUSCATE("0x2C54438")), "20 00 A0 E3");
    MSHookFunction((void *) KittyMemory::getAbsoluteAddress(libName, string2Offset(AY_OBFUSCATE("0x2F327D0"))), (void *) EquippedSkin, (void **) &old_EquippedSkin);
    MSHookFunction((void *) KittyMemory::getAbsoluteAddress(libName, string2Offset(AY_OBFUSCATE("0x2F35DE0"))), (void *) EquippedKnife, (void **) &old_EquippedKnife);

    MemoryPatch::createWithHex("libil2cpp.so", string2Offset(AY_OBFUSCATE("0x294EAB4")), "1E FF 2F E1").Modify();
    MemoryPatch::createWithHex("libil2cpp.so", string2Offset(AY_OBFUSCATE("0x294EB00")), "1E FF 2F E1").Modify();


    hexPatches.Money1 = MemoryPatch::createWithHex("libil2cpp.so", string2Offset(AY_OBFUSCATE("0x3421f60")), "00 00 A0 E3");
    hexPatches.Money2 = MemoryPatch::createWithHex("libil2cpp.so", string2Offset(AY_OBFUSCATE("0x3421f64")), "1E FF 2F E1");
    hexPatches.Drop1 = MemoryPatch::createWithHex("libil2cpp.so", string2Offset(AY_OBFUSCATE("0x22BC7C4")), "01 00 A0 E3");
    hexPatches.Drop2 = MemoryPatch::createWithHex("libil2cpp.so", string2Offset(AY_OBFUSCATE("0x22BC7C8")), "1E FF 2F E1");
    hexPatches.ChamsBypass = MemoryPatch::createWithHex("arm/libil2cpp.so", string2Offset(AY_OBFUSCATE("0x22A0A34")),"1E FF 2F E1");
    hexPatches.speedbypas1 = MemoryPatch::createWithHex("libil2cpp.so", string2Offset(AY_OBFUSCATE("0x22A00D4")), "1E FF 2F E1");
    hexPatches.speedbypas2 = MemoryPatch::createWithHex("libil2cpp.so", string2Offset(AY_OBFUSCATE("0x23EE2A4")), "1E FF 2F E1");
    hexPatches.speedbypas1.Modify();
    hexPatches.speedbypas2.Modify();
    hexPatches.Ammo1 = MemoryPatch::createWithHex("libil2cpp.so", string2Offset(AY_OBFUSCATE("0x1D7C8D8")), "61 0E 01 E3");
    hexPatches.Ammo2 = MemoryPatch::createWithHex("libil2cpp.so", string2Offset(AY_OBFUSCATE("0x1D7C8DC")), "1E FF 2F E1");
    hexPatches.NoRecoilF = MemoryPatch::createWithHex("libunity.so", string2Offset(AY_OBFUSCATE("0x7D0C4")), "00 00 00 E3");
    hexPatches.Rapid = MemoryPatch::createWithHex("libil2cpp.so", string2Offset(AY_OBFUSCATE("0x1D7C7C4")), "1E FF 2F E1");

    hexPatches.invisible = MemoryPatch::createWithHex("libil2cpp.so", string2Offset(AY_OBFUSCATE("0x22A32B4")), "1E FF 2F E1");
    MSHookFunction((void *) KittyMemory::getAbsoluteAddress(libName, string2Offset(AY_OBFUSCATE("0x2A5754C"))),
                   (void *) air_jump_system, (void **) &old_air_jump_system_general);
    MSHookFunction((void *) KittyMemory::getAbsoluteAddress(libName, string2Offset(AY_OBFUSCATE("0x1B95BBC"))),
                   (void *) get_TouchCount, (void **) &old_get_TouchCount);
    MSHookFunction((void *) KittyMemory::getAbsoluteAddress(libName, string2Offset(AY_OBFUSCATE("0x9F43C0"))), (void *) setGloves, (void **) &old_setGloves);
    MSHookFunction((void *) KittyMemory::getAbsoluteAddress(libName, string2Offset(AY_OBFUSCATE("0x851E10"))), (void *) Get_FireRate, (void **) &old_Get_FireRate);
    MSHookFunction((void *) KittyMemory::getAbsoluteAddress(libName, string2Offset(AY_OBFUSCATE("0x22A3D98"))), (void *) PlayerControllerUpdate, (void **) &old_PlayerControllerUpdate);
    MSHookFunction((void *) KittyMemory::getAbsoluteAddress(libName, string2Offset(AY_OBFUSCATE("0x848F88"))), (void *) CastBullet, (void **) &old_CastBullet);
    MSHookFunction((void *) KittyMemory::getAbsoluteAddress(libName, string2Offset(AY_OBFUSCATE("0x22A6640"))), (void *) CameraControllerFPS_LateUpdate, (void **) &old_CameraControllerFPS_LateUpdate);
    MSHookFunction((void *) KittyMemory::getAbsoluteAddress(libName, string2Offset(AY_OBFUSCATE("0x23F0B6C"))), (void *) PlayerTranslationParameters_get_SpeedDefault, (void **) &old_PlayerTranslationParameters_get_SpeedDefault);
    MSHookFunction((void *) KittyMemory::getAbsoluteAddress(libName, string2Offset(AY_OBFUSCATE("0x155DE84"))), (void *) RagdollController_Simulate, (void **) &old_RagdollController_Simulate);
    MSHookFunction((void *) KittyMemory::getAbsoluteAddress(libName, string2Offset(AY_OBFUSCATE("0x2F22C74"))), (void *) CameraScopeZoomer_Update, (void **) &old_CameraScopeZoomer_Update);
    MSHookFunction((void *) KittyMemory::getAbsoluteAddress(libName, string2Offset(AY_OBFUSCATE("0x2F29950"))), (void *) KnifeController_LocalUpdate, (void **) &old_KnifeController_LocalUpdate);
    MSHookFunction((void *) KittyMemory::getAbsoluteAddress(libName, string2Offset(AY_OBFUSCATE("0x25740AC"))), (void *) PlayerHitbox_Instantiate, (void **) &old_PlayerHitbox_Instantiate);
    MSHookFunction((void *) KittyMemory::getAbsoluteAddress(libName, string2Offset(AY_OBFUSCATE("0x847608"))), (void *) Get_PenetrationLoss, (void **) &old_Get_PenetrationLoss);
    MSHookFunction((void *) KittyMemory::getAbsoluteAddress(libName, string2Offset(AY_OBFUSCATE("0x2B5C3A4"))), (void *) Get_TimeStamp, (void **) &old_Get_TimeStamp);


    get_transform = (void* (*)(void*))KittyMemory::getAbsoluteAddress(libName, 0x2940B20);
    get_BipedMap = (void* (*)(void*))KittyMemory::getAbsoluteAddress(libName, string2Offset(AY_OBFUSCATE("0x22A7E48")));
    IsLocal = (bool (*)(void *)) KittyMemory::getAbsoluteAddress(libName, string2Offset(AY_OBFUSCATE("0x2B6C468")));
    GetPlayerTeam = (int (*)(void *)) KittyMemory::getAbsoluteAddress(libName, string2Offset(AY_OBFUSCATE("0x3084AAC")));
    GetPlayerHealth = (int (*)(void*))KittyMemory::getAbsoluteAddress(libName, string2Offset(AY_OBFUSCATE("0x22A219C")));
    GetPlayerHealth1 = (int (*)(void*))KittyMemory::getAbsoluteAddress(libName, string2Offset(AY_OBFUSCATE("0x22A22FC")));
    set_position = (void (*)(void*, Vector3))KittyMemory::getAbsoluteAddress(libName, string2Offset(AY_OBFUSCATE("0x2950344")));
    get_position = (void (*)(void*, Vector3*))KittyMemory::getAbsoluteAddress(libName, string2Offset(AY_OBFUSCATE("0x2950294")));
    get_forward = (Vector3 (*)(void*))KittyMemory::getAbsoluteAddress(libName, string2Offset(AY_OBFUSCATE("0x2950E70")));

    GetPhoton = (void *(*) (void*)) KittyMemory::getAbsoluteAddress(libName, string2Offset(AY_OBFUSCATE("0x2B6EF00")));//PhotonPlayer::getOwner
    IsOwnerActive = (bool (*) (void*)) KittyMemory::getAbsoluteAddress(libName, string2Offset(AY_OBFUSCATE("0x2B6EF10")));//PhotonPlayer::IsOwnerActive
    get_time = (float (*)())KittyMemory::getAbsoluteAddress(libName, string2Offset(AY_OBFUSCATE("0x29187B0")));
    set_TpsView3 = (void (*)(void*))KittyMemory::getAbsoluteAddress(libName, string2Offset(AY_OBFUSCATE("0x22A4B34")));
    pthread_exit(nullptr);
}
