#include "changeColor.h"

static HRESULT(WINAPI *DwmGetColorizationParameters)(DWMCOLORIZATIONPARAMS *color);
static HRESULT(WINAPI *DwmSetColorizationParameters)(DWMCOLORIZATIONPARAMS *color, UINT unknown);

static HRESULT(WINAPI *GetUserColorPreference)(IMMERSIVE_COLOR_PREFERENCE *pcpPreference, bool fForceReload);
static HRESULT(WINAPI *SetUserColorPreference)(const IMMERSIVE_COLOR_PREFERENCE *cpcpPreference, bool fForceCommit);

void loadDLLs() {
	HMODULE hDwmApi = LoadLibrary(L"dwmapi.dll");
    DwmGetColorizationParameters = reinterpret_cast<decltype(DwmGetColorizationParameters)>(GetProcAddress(hDwmApi, (LPCSTR)127));
    DwmSetColorizationParameters = reinterpret_cast<decltype(DwmSetColorizationParameters)>(GetProcAddress(hDwmApi, (LPCSTR)131));
	HMODULE hUxTheme = LoadLibrary(L"uxtheme.dll");
    GetUserColorPreference = reinterpret_cast<decltype(GetUserColorPreference)>(GetProcAddress(hUxTheme, "GetUserColorPreference"));
    SetUserColorPreference = reinterpret_cast<decltype(SetUserColorPreference)>(GetProcAddress(hUxTheme, (LPCSTR)122));
}

void changeColor(COLORREF color) {
    loadDLLs();
    HRESULT hr;
    IMMERSIVE_COLOR_PREFERENCE immersiveColorPref;
    hr = GetUserColorPreference(&immersiveColorPref, 0);
    immersiveColorPref.color2 = color;
    hr = SetUserColorPreference(&immersiveColorPref, 1);
}