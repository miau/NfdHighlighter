// NfdHighlighter.cpp : Implementation of DLL Exports.

#include "stdafx.h"
#include "resource.h"
#include "NfdHighlighter.h"

class CNfdHighlighterModule : public CAtlDllModuleT< CNfdHighlighterModule >
{
public :
	DECLARE_LIBID(LIBID_NfdHighlighterLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_OVERLAYICON, "{83145807-253A-4171-8FFB-AF02D0EB7773}")
};

CNfdHighlighterModule _AtlModule;


// DLL Entry Point
extern "C" BOOL WINAPI DllMain(HINSTANCE hInstance, DWORD dwReason, LPVOID lpReserved)
{
	hInstance;
    return _AtlModule.DllMain(dwReason, lpReserved); 
}


// Used to determine whether the DLL can be unloaded by OLE
STDAPI DllCanUnloadNow(void)
{
    return _AtlModule.DllCanUnloadNow();
}


// Returns a class factory to create an object of the requested type
STDAPI DllGetClassObject(REFCLSID rclsid, REFIID riid, LPVOID* ppv)
{
    return _AtlModule.DllGetClassObject(rclsid, riid, ppv);
}


// DllRegisterServer - Adds entries to the system registry
STDAPI DllRegisterServer(void)
{
    // registers object, typelib and all interfaces in typelib
    HRESULT hr = _AtlModule.DllRegisterServer();
	return hr;
}


// DllUnregisterServer - Removes entries from the system registry
STDAPI DllUnregisterServer(void)
{
	HRESULT hr = _AtlModule.DllUnregisterServer();
	return hr;
}
