// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the PROXYDLL_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// PROXYDLL_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef PROXYDLL_EXPORTS
#define PROXYDLL_API __declspec(dllexport)
#else
#define PROXYDLL_API __declspec(dllimport)
#endif

// This class is exported from the dll
class PROXYDLL_API CProxyDll {
public:
	CProxyDll(void);
	// TODO: add your methods here.
};

extern PROXYDLL_API int nProxyDll;

PROXYDLL_API int fnProxyDll(void);
