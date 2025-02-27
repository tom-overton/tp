//
// Generated By: dol2asm
// Translation Unit: d_a_obj_lbox
//

#include "rel/d/a/obj/d_a_obj_lbox/d_a_obj_lbox.h"
#include "d/cc/d_cc_d.h"
#include "dol2asm.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct obj_lbox_class {};

struct mDoMtx_stack_c {
    /* 8000CE38 */ void scaleM(f32, f32, f32);

    static u8 now[48];
};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
};

struct daObj_Lbox_HIO_c {
    /* 80C5356C */ daObj_Lbox_HIO_c();
    /* 80C53F14 */ ~daObj_Lbox_HIO_c();
};

struct dVibration_c {
    /* 8006FA24 */ void StartShock(int, int, cXyz);
};

struct dKy_tevstr_c {};

struct J3DModelData {};

struct dScnKy_env_light_c {
    /* 801A37C4 */ void settingTevStruct(int, cXyz*, dKy_tevstr_c*);
    /* 801A4DA0 */ void setLightTevColorType_MAJI(J3DModelData*, dKy_tevstr_c*);
};

struct dRes_info_c {};

struct dRes_control_c {
    /* 8003C2EC */ void getRes(char const*, s32, dRes_info_c*, int);
};

struct dBgW_Base {};

struct dBgW {
    /* 8007B970 */ dBgW();
    /* 8007B9C0 */ void Move();
};

struct dBgS_PolyPassChk {
    /* 80078E68 */ void SetObj();
};

struct dBgS_ObjAcch {
    /* 80C53EA4 */ ~dBgS_ObjAcch();
};

struct dBgS_AcchCir {
    /* 80075EAC */ dBgS_AcchCir();
    /* 80075F58 */ void SetWall(f32, f32);
};

struct csXyz {};

struct dBgS {
    /* 80074A08 */ void Regist(dBgW_Base*, fopAc_ac_c*);
};

struct dBgS_Acch {
    /* 80075F94 */ ~dBgS_Acch();
    /* 800760A0 */ dBgS_Acch();
    /* 80076248 */ void Set(cXyz*, cXyz*, fopAc_ac_c*, int, dBgS_AcchCir*, cXyz*, csXyz*, csXyz*);
    /* 80076AAC */ void CrrPos(dBgS&);
};

struct cCcS {
    /* 80264BA8 */ void Set(cCcD_Obj*);
};

struct cBgD_t {};

struct cBgW {
    /* 80079F38 */ void Set(cBgD_t*, u32, f32 (*)[3][4]);
};

struct cBgS_PolyInfo {};

struct cBgS {
    /* 80074250 */ void Release(dBgW_Base*);
};

struct JMath {
    static u8 sincosTable_[65536];
};

struct J3DModel {};

//
// Forward References:
//

extern "C" void __ct__16daObj_Lbox_HIO_cFv();
extern "C" static void daObj_Lbox_Draw__FP14obj_lbox_class();
extern "C" static void action__FP14obj_lbox_class();
extern "C" static void daObj_Lbox_Execute__FP14obj_lbox_class();
extern "C" static bool daObj_Lbox_IsDelete__FP14obj_lbox_class();
extern "C" static void daObj_Lbox_Delete__FP14obj_lbox_class();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" static void daObj_Lbox_Create__FP10fopAc_ac_c();
extern "C" void __dt__8cM3dGSphFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" void __dt__16daObj_Lbox_HIO_cFv();
extern "C" void __sinit_d_a_obj_lbox_cpp();
extern "C" static void func_80C53F98();
extern "C" static void func_80C53FA0();
extern "C" extern char const* const d_a_obj_lbox__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void mDoMtx_ZrotM__FPA4_fs();
extern "C" void scaleM__14mDoMtx_stack_cFfff();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_SetMin__FP10fopAc_ac_cfff();
extern "C" void fopAcM_SetMax__FP10fopAc_ac_cfff();
extern "C" void fopAcM_effSmokeSet1__FPUlPUlPC4cXyzPC5csXyzfPC12dKy_tevstr_ci();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void StartShock__12dVibration_cFii4cXyz();
extern "C" void Release__4cBgSFP9dBgW_Base();
extern "C" void Regist__4dBgSFP9dBgW_BaseP10fopAc_ac_c();
extern "C" void dBgS_MoveBGProc_Typical__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void SetWall__12dBgS_AcchCirFff();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz();
extern "C" void CrrPos__9dBgS_AcchFR4dBgS();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void Set__4cBgWFP6cBgD_tUlPA3_A4_f();
extern "C" void __ct__4dBgWFv();
extern "C" void Move__4dBgWFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_SphFRC11dCcD_SrcSph();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void SetC__8cM3dGSphFRC4cXyz();
extern "C" void SetR__8cM3dGSphFf();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void _savegpr_25();
extern "C" void _savegpr_29();
extern "C" void _restgpr_25();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__8dCcD_Sph[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_SphAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" u8 sincosTable___5JMath[65536];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 80C53FBC-80C53FC0 000000 0004+00 3/3 0/0 0/0 .rodata          @3768 */
SECTION_RODATA static f32 const lit_3768 = 2.0f;
COMPILER_STRIP_GATE(0x80C53FBC, &lit_3768);

/* 80C53FC0-80C53FC4 000004 0004+00 1/2 0/0 0/0 .rodata          @3769 */
SECTION_RODATA static u8 const lit_3769[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80C53FC0, &lit_3769);

/* 80C54008-80C54048 000000 0040+00 1/1 0/0 0/0 .data            cc_sph_src$3950 */
static dCcD_SrcSph cc_sph_src = {
    {
        {0x0, {{0x0, 0x0, 0x0}, {0xd8fbfdff, 0x3}, 0x0}}, // mObj
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x0}, // mGObjAt
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x2}, // mGObjTg
        {0x0}, // mGObjCo
    }, // mObjInf
    {
        {{0.0f, 0.0f, 0.0f}, 40.0f} // mSph
    } // mSphAttr
};

/* 80C54048-80C54068 -00001 0020+00 1/0 0/0 0/0 .data            l_daObj_Lbox_Method */
SECTION_DATA static void* l_daObj_Lbox_Method[8] = {
    (void*)daObj_Lbox_Create__FP10fopAc_ac_c,
    (void*)daObj_Lbox_Delete__FP14obj_lbox_class,
    (void*)daObj_Lbox_Execute__FP14obj_lbox_class,
    (void*)daObj_Lbox_IsDelete__FP14obj_lbox_class,
    (void*)daObj_Lbox_Draw__FP14obj_lbox_class,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80C54068-80C54098 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_OBJ_LBOX */
SECTION_DATA extern void* g_profile_OBJ_LBOX[12] = {
    (void*)0xFFFFFFFD, (void*)0x0003FFFD,
    (void*)0x00270000, (void*)&g_fpcLf_Method,
    (void*)0x00000A90, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x00290000, (void*)&l_daObj_Lbox_Method,
    (void*)0x00040100, (void*)0x000E0000,
};

/* 80C54098-80C540A4 000090 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGSph */
SECTION_DATA extern void* __vt__8cM3dGSph[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGSphFv,
};

/* 80C540A4-80C540B0 00009C 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80C540B0-80C540D4 0000A8 0024+00 2/2 0/0 0/0 .data            __vt__12dBgS_ObjAcch */
SECTION_DATA extern void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80C53FA0,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80C53F98,
};

/* 80C540D4-80C540E0 0000CC 000C+00 2/2 0/0 0/0 .data            __vt__16daObj_Lbox_HIO_c */
SECTION_DATA extern void* __vt__16daObj_Lbox_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__16daObj_Lbox_HIO_cFv,
};

/* 80C5356C-80C5359C 0000EC 0030+00 1/1 0/0 0/0 .text            __ct__16daObj_Lbox_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daObj_Lbox_HIO_c::daObj_Lbox_HIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lbox/d_a_obj_lbox/__ct__16daObj_Lbox_HIO_cFv.s"
}
#pragma pop

/* 80C5359C-80C53600 00011C 0064+00 1/0 0/0 0/0 .text            daObj_Lbox_Draw__FP14obj_lbox_class
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObj_Lbox_Draw(obj_lbox_class* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lbox/d_a_obj_lbox/daObj_Lbox_Draw__FP14obj_lbox_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C53FC4-80C53FC8 000008 0004+00 0/1 0/0 0/0 .rodata          @3877 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3877 = 4500.0f;
COMPILER_STRIP_GATE(0x80C53FC4, &lit_3877);
#pragma pop

/* 80C53FC8-80C53FCC 00000C 0004+00 0/1 0/0 0/0 .rodata          @3878 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3878 = -3450.0f;
COMPILER_STRIP_GATE(0x80C53FC8, &lit_3878);
#pragma pop

/* 80C53FCC-80C53FD0 000010 0004+00 0/1 0/0 0/0 .rodata          @3879 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3879 = 1.0f;
COMPILER_STRIP_GATE(0x80C53FCC, &lit_3879);
#pragma pop

/* 80C53FD0-80C53FD4 000014 0004+00 0/1 0/0 0/0 .rodata          @3880 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3880 = -1.0f;
COMPILER_STRIP_GATE(0x80C53FD0, &lit_3880);
#pragma pop

/* 80C53FD4-80C53FD8 000018 0004+00 0/1 0/0 0/0 .rodata          @3881 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3881 = 5.0f;
COMPILER_STRIP_GATE(0x80C53FD4, &lit_3881);
#pragma pop

/* 80C53FD8-80C53FDC 00001C 0004+00 0/2 0/0 0/0 .rodata          @3882 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3882 = 200.0f;
COMPILER_STRIP_GATE(0x80C53FD8, &lit_3882);
#pragma pop

/* 80C53FDC-80C53FE0 000020 0004+00 0/1 0/0 0/0 .rodata          @3883 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3883 = 1.0f / 10.0f;
COMPILER_STRIP_GATE(0x80C53FDC, &lit_3883);
#pragma pop

/* 80C53FE0-80C53FE4 000024 0004+00 0/1 0/0 0/0 .rodata          @3884 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3884 = 3.5f;
COMPILER_STRIP_GATE(0x80C53FE0, &lit_3884);
#pragma pop

/* 80C53FE4-80C53FE8 000028 0004+00 0/2 0/0 0/0 .rodata          @3885 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3885 = 50.0f;
COMPILER_STRIP_GATE(0x80C53FE4, &lit_3885);
#pragma pop

/* 80C540E8-80C540EC 000008 0004+00 2/2 0/0 0/0 .bss             None */
static u8 data_80C540E8[4];

/* 80C540EC-80C540F8 00000C 000C+00 1/1 0/0 0/0 .bss             @3763 */
static u8 lit_3763[12];

/* 80C540F8-80C54108 000018 0010+00 3/3 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[16];

/* 80C53600-80C5396C 000180 036C+00 1/1 0/0 0/0 .text            action__FP14obj_lbox_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void action(obj_lbox_class* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lbox/d_a_obj_lbox/action__FP14obj_lbox_class.s"
}
#pragma pop

/* 80C5396C-80C539C8 0004EC 005C+00 2/1 0/0 0/0 .text daObj_Lbox_Execute__FP14obj_lbox_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObj_Lbox_Execute(obj_lbox_class* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lbox/d_a_obj_lbox/daObj_Lbox_Execute__FP14obj_lbox_class.s"
}
#pragma pop

/* 80C539C8-80C539D0 000548 0008+00 1/0 0/0 0/0 .text daObj_Lbox_IsDelete__FP14obj_lbox_class */
static bool daObj_Lbox_IsDelete(obj_lbox_class* param_0) {
    return true;
}

/* ############################################################################################## */
/* 80C53FFC-80C53FFC 000040 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80C53FFC = "Obj_lbox";
#pragma pop

/* 80C539D0-80C53A38 000550 0068+00 1/0 0/0 0/0 .text daObj_Lbox_Delete__FP14obj_lbox_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObj_Lbox_Delete(obj_lbox_class* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lbox/d_a_obj_lbox/daObj_Lbox_Delete__FP14obj_lbox_class.s"
}
#pragma pop

/* 80C53A38-80C53B3C 0005B8 0104+00 1/1 0/0 0/0 .text            useHeapInit__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void useHeapInit(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lbox/d_a_obj_lbox/useHeapInit__FP10fopAc_ac_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C53FE8-80C53FEC 00002C 0004+00 0/0 0/0 0/0 .rodata          @3886 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3886 = 20000.0f;
COMPILER_STRIP_GATE(0x80C53FE8, &lit_3886);
#pragma pop

/* 80C53FEC-80C53FF0 000030 0004+00 0/0 0/0 0/0 .rodata          @3887 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3887 = 150.0f;
COMPILER_STRIP_GATE(0x80C53FEC, &lit_3887);
#pragma pop

/* 80C53FF0-80C53FF4 000034 0004+00 0/1 0/0 0/0 .rodata          @4020 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4020 = -200.0f;
COMPILER_STRIP_GATE(0x80C53FF0, &lit_4020);
#pragma pop

/* 80C53FF4-80C53FF8 000038 0004+00 0/1 0/0 0/0 .rodata          @4021 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4021 = -3000.0f;
COMPILER_STRIP_GATE(0x80C53FF4, &lit_4021);
#pragma pop

/* 80C53FF8-80C53FFC 00003C 0004+00 0/1 0/0 0/0 .rodata          @4022 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4022 = 3000.0f;
COMPILER_STRIP_GATE(0x80C53FF8, &lit_4022);
#pragma pop

/* 80C53B3C-80C53E14 0006BC 02D8+00 1/0 0/0 0/0 .text            daObj_Lbox_Create__FP10fopAc_ac_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObj_Lbox_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lbox/d_a_obj_lbox/daObj_Lbox_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80C53E14-80C53E5C 000994 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGSphFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cM3dGSph::~cM3dGSph() {
extern "C" asm void __dt__8cM3dGSphFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lbox/d_a_obj_lbox/__dt__8cM3dGSphFv.s"
}
#pragma pop

/* 80C53E5C-80C53EA4 0009DC 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cM3dGAab::~cM3dGAab() {
extern "C" asm void __dt__8cM3dGAabFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lbox/d_a_obj_lbox/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 80C53EA4-80C53F14 000A24 0070+00 3/2 0/0 0/0 .text            __dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_ObjAcch::~dBgS_ObjAcch() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lbox/d_a_obj_lbox/__dt__12dBgS_ObjAcchFv.s"
}
#pragma pop

/* 80C53F14-80C53F5C 000A94 0048+00 2/1 0/0 0/0 .text            __dt__16daObj_Lbox_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daObj_Lbox_HIO_c::~daObj_Lbox_HIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lbox/d_a_obj_lbox/__dt__16daObj_Lbox_HIO_cFv.s"
}
#pragma pop

/* 80C53F5C-80C53F98 000ADC 003C+00 0/0 1/0 0/0 .text            __sinit_d_a_obj_lbox_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_d_a_obj_lbox_cpp() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lbox/d_a_obj_lbox/__sinit_d_a_obj_lbox_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
REGISTER_CTORS(0x80C53F5C, __sinit_d_a_obj_lbox_cpp);
#pragma pop

/* 80C53F98-80C53FA0 000B18 0008+00 1/0 0/0 0/0 .text            @36@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80C53F98() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lbox/d_a_obj_lbox/func_80C53F98.s"
}
#pragma pop

/* 80C53FA0-80C53FA8 000B20 0008+00 1/0 0/0 0/0 .text            @20@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80C53FA0() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lbox/d_a_obj_lbox/func_80C53FA0.s"
}
#pragma pop

/* 80C53FFC-80C53FFC 000040 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
