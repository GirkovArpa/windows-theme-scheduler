#include "changeWallpaper.h"

void changeWallpaper(wchar_t *filename, bool lightTheme) {
    HKEY key;
    RegOpenKey(HKEY_CURRENT_USER, TEXT("Software\\Microsoft\\Windows\\CurrentVersion\\Themes\\Personalize"), &key);
    DWORD value_data;
    if (lightTheme) {
        value_data = 1;
    } else {
        value_data = 0;
    }
    RegSetValueEx(key, TEXT("AppsUseLightTheme"), 0, REG_DWORD, (const BYTE *)&value_data, sizeof(value_data));
    RegCloseKey(key);
    bool result = SystemParametersInfoW(SPI_SETDESKWALLPAPER, 0, (void *)filename, SPIF_UPDATEINIFILE);
}