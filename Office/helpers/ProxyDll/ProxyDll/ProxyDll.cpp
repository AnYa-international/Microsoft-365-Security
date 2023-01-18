// ProxyDll.cpp : Defines the exported functions for the DLL.
//

#include "pch.h"
#include "framework.h"
#include "ProxyDll.h"


// This is an example of an exported variable
PROXYDLL_API int nProxyDll=0;

// This is an example of an exported function.
PROXYDLL_API int fnProxyDll(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CProxyDll::CProxyDll()
{
    return;
}
