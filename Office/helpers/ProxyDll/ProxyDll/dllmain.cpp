#include "pch.h"
#include <windows.h>


extern "C" __declspec(dllexport) int ProxyMessageBox(   _In_opt_ HWND hWnd,
                                                        _In_opt_ LPCTSTR lpText,
                                                        _In_opt_ LPCTSTR lpCaption,
                                                        _In_ UINT uType
                                                    )
{
    return MessageBox(hWnd, lpText, lpCaption, uType);
}

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

