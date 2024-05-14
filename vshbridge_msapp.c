/* Copyright (C) 2022 The uOFW team
   See the file COPYING for copying permission.
*/

#include <common_imp.h>
#include <sysmem_kernel.h>
#include <sysmem_sysevent.h>
#include <threadman_kernel.h>

SCE_MODULE_INFO("sceVshBridge_MSApp_Driver", SCE_MODULE_KERNEL | SCE_MODULE_ATTR_EXCLUSIVE_START | SCE_MODULE_ATTR_EXCLUSIVE_LOAD
    | SCE_MODULE_ATTR_CANT_STOP, 1, 3);
SCE_MODULE_BOOTSTART("sceVshBridgeInit");
SCE_SDK_VERSION(SDK_VERSION);

// Function prototypes
s32 sceImposeChanges(void);
s32 sceImposeGetParam(s32 param);
s32 sceImposeGetStatus(void);
s32 vshBridgeEventHandler(s32 ev_id, char* ev_name __attribute__((unused)), void* param, s32* result);

// Event Handler
SceSysEventHandler g_vshBridgeEvent = {0x40, "vshBridge_msapp", 0x00FFFF00, vshBridgeEventHandler, 0, 0, NULL, {0, 0, 0, 0, 0, 0, 0, 0, 0}};

// TODO: 0x00000150
/*
 * The vsh bridge event handler.
 *
 * Returns 0.
 */
s32 vshBridgeEventHandler(s32 ev_id, char* ev_name __attribute__((unused)), void* param __attribute__((unused)), s32* result __attribute__((unused)))
{
    (void)ev_id;
    return 0;
}

// Subroutine module_start - Address 0x00000000 - Aliases: sceVshBridge_msapp_driver_39B14120
s32 sceVshBridgeInit(SceSize args __attribute__((unused)), void *argp __attribute__((unused)))
{
    return 0;
}

// Subroutine sceVshBridge_msapp_driver_92A3B940 - Address 0x00000688
s32 sceVshBridgeEnd(void)
{
    sceKernelUnregisterSysEventHandler(&g_vshBridgeEvent);
    return 0;
}

// Subroutine sceVshBridge_msapp_0212DA4A - Address 0x00000F04
s32 sceVshBridge_msapp_0212DA4A(void)
{
    s32 ret = 0;
    
    int level  = sceKernelGetUserLevel();
    if (level < SCE_USER_LEVEL_APP) {
        ret = SCE_ERROR_PRIV_REQUIRED;
    }
    else {
        s32 oldK1 = pspShiftK1();
        u32 model = sceKernelGetModel();
        pspSetK1(oldK1);
        ret = 0;
        
        if (model == PSP_GO || model == 5 || model == 7 || model == 9) {
            ret = 1;
        }
    }
    
    return ret;
}

// Subroutine sceVshBridge_msapp_1463101C - Address 0x00000F88
s32 sceVshBridge_msapp_1463101C(void)
{
    s32 ret = 0;
    
    int level  = sceKernelGetUserLevel();
    if (level < SCE_USER_LEVEL_APP) {
        ret = SCE_ERROR_PRIV_REQUIRED;
    }
    else {
        s32 oldK1 = pspShiftK1();
        u32 model = sceKernelGetModel();
        pspSetK1(oldK1);
        ret = 0;
        
        if (model == PSP_GO || model == 5 || model == 7 || model == 9) {
            ret = 1;
        }
    }
    
    return ret;
}

// Subroutine sceVshBridge_msapp_16C6FA21 - Address 0x000001E0
s32 sceVshBridge_msapp_16C6FA21(void)
{
    return 0;
}

// Subroutine sceVshBridge_msapp_2FB66EE1 - Address 0x00000B4C
s32 sceVshBridge_msapp_2FB66EE1(void)
{
    return 0;
}

// Subroutine sceVshBridge_msapp_468A5503 - Address 0x00000D34
s32 sceVshBridge_msapp_468A5503(void)
{
    return 0;
}

// Subroutine sceVshBridge_msapp_48D65527 - Address 0x00000A14
s32 sceVshBridge_msapp_48D65527(void)
{
    return 0;
}

// Subroutine sceVshBridge_msapp_4CCA087A - Address 0x00000DBC
s32 sceVshBridge_msapp_4CCA087A(void)
{
    return 0;
}

// Subroutine sceVshBridge_msapp_4D92785C - Address 0x00000AAC
s32 sceVshBridge_msapp_4D92785C(void)
{
    return 0;
}

// Subroutine sceVshBridge_msapp_4E45C872 - Address 0x00000914
s32 sceVshBridge_msapp_4E45C872(void)
{
    return 0;
}

// Subroutine sceVshBridge_msapp_53BFD101 - Address 0x00000774
s32 vshMSAudioCheckICV(void)
{
    return 0;
}

// Subroutine sceVshBridge_msapp_56F05CF5 - Address 0x00000B94
s32 sceVshBridge_msapp_56F05CF5(void)
{
    return 0;
}

// Subroutine sceVshBridge_msapp_5894C339 - Address 0x00000EB8
s32 vshImposeChanges(void)
{
    s32 ret = 0;
    s32 level = sceKernelGetUserLevel();

    if (level < 3)
        ret = SCE_ERROR_PRIV_REQUIRED;
    else
        ret = sceImposeChanges();
    
    return ret;
}

// Subroutine sceVshBridge_msapp_5AAA31CF - Address 0x00000CEC
s32 sceVshBridge_msapp_5AAA31CF(void)
{
    return 0;
}

// Subroutine sceVshBridge_msapp_639C3CB3 - Address 0x00000E60
s32 vshImposeGetParam(s32 param)
{
    s32 ret = 0;
    s32 level = sceKernelGetUserLevel();

    if (level < 3)
        ret = SCE_ERROR_PRIV_REQUIRED;
    else
        ret = sceImposeGetParam(param);
    
    return ret;
}

// Subroutine sceVshBridge_msapp_6CAEB765 - Address 0x0000072C
s32 vshMSAudioAuth(void)
{
    return 0;
}

// Subroutine sceVshBridge_msapp_800BF85D - Address 0x00000C0C
s32 sceVshBridge_msapp_800BF85D(void)
{
    return 0;
}

// Subroutine sceVshBridge_msapp_8B6CDA8D - Address 0x00000AF4
s32 sceVshBridge_msapp_8B6CDA8D(void)
{
    return 0;
}

// Subroutine sceVshBridge_msapp_90E21B74 - Address 0x00000570
s32 sceVshBridge_msapp_90E21B74(void)
{
    return 0;
}

// Subroutine sceVshBridge_msapp_9AE8C0AC - Address 0x00000824
s32 sceVshBridge_msapp_9AE8C0AC(void)
{
    return 0;
}

// Subroutine sceVshBridge_msapp_A2470ABD - Address 0x0000099C
s32 sceVshBridge_msapp_A2470ABD(void)
{
    return 0;
}

// Subroutine sceVshBridge_msapp_A3193F14 - Address 0x0000028C
s32 sceVshBridge_msapp_A3193F14(void)
{
    return 0;
}

// Subroutine sceVshBridge_msapp_B30A7A02 - Address 0x0000087C
s32 sceVshBridge_msapp_B30A7A02(void)
{
    return 0;
}

// Subroutine sceVshBridge_msapp_CA719C34 - Address 0x00000E14
s32 vshImposeGetStatus(void)
{
    s32 ret = 0;
    s32 level = sceKernelGetUserLevel();

    if (level < 3)
        ret = SCE_ERROR_PRIV_REQUIRED;
    else
        ret = sceImposeGetStatus();
    
    return ret;
}

// Subroutine sceVshBridge_msapp_CE32CBEF - Address 0x000006AC
s32 vshMSAudioInit(void)
{
    return 0;
}

// Subroutine sceVshBridge_msapp_D0F7E7BF - Address 0x000003C4
s32 sceVshBridge_msapp_D0F7E7BF(void)
{
    return 0;
}

// Subroutine sceVshBridge_msapp_E015B063 - Address 0x00000954
s32 sceVshBridge_msapp_E015B063(void)
{
    return 0;
}

// Subroutine sceVshBridge_msapp_E174218C - Address 0x000007BC
s32 vshMSAudioCheckICVn(void)
{
    return 0;
}

// Subroutine sceVshBridge_msapp_E5DA5E95 - Address 0x000006EC
s32 vshMSAudioEnd(void)
{
    return 0;
}

// Subroutine sceVshBridge_msapp_FAAC778F - Address 0x00000CA4
s32 sceVshBridge_msapp_FAAC778F(void)
{
    return 0;
}

// Subroutine sceVshBridge_msapp_FC427071 - Address 0x000008D4
s32 sceVshBridge_msapp_FC427071(void)
{
    return 0;
}
