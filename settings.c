/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Program Name: Gatherers (C)                                                                                            //
//  Author: Jeffrey Bednar                                                                                                 //
//  Copyright: Illusion Interactive, 2012                                                                                  //
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#ifndef _SETTINGS_C_
#define _SETTINGS_C_
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include "main.h"
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void __cdecl SETTINGS_Zero(SETTINGS* p_Settings) {
    ZeroMemory(p_Settings, sizeof(SETTINGS));
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
SETTINGS* __cdecl SETTINGS_Create(GLOBALS* p_Globals) {
    SETTINGS* p_Settings = (SETTINGS*)malloc(sizeof(SETTINGS));
    (*p_Globals).iRunningHeap += sizeof(SETTINGS);
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    SETTINGS_Zero(p_Settings);
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    return p_Settings;
}
void __cdecl SETTINGS_InitFromFile(SETTINGS* p_Settings)
{
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void __cdecl SETTINGS_Kill(SETTINGS* p_Settings, GLOBALS* p_Globals) {
    free(p_Settings);
    (*p_Globals).iRunningHeap -= sizeof(SETTINGS);
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#endif
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
