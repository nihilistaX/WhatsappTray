#define NAME L"WhatsappTrayHook"
#define WHATSAPP_CLIENT_NAME L"WhatsApp"

#define WM_ADDTRAY  0x0401
#define WM_REMTRAY  0x0402
#define WM_REFRTRAY 0x0403
#define WM_TRAYCMD  0x0404
#define WM_WHAHTSAPP_CLOSING  0x0405
#define WM_REAPPLY_HOOK  0x0406
#define IDM_RESTORE 0x1001
#define IDM_CLOSE   0x1002
#define IDM_EXIT    0x1003
#define IDM_ABOUT   0x1004
#define IDM_SETTING_CLOSE_TO_TRAY   0x1005
#define IDM_SETTING_LAUNCH_ON_WINDOWS_STARTUP   0x1006

#define DLLIMPORT __declspec(dllexport)

BOOL DLLIMPORT RegisterHook(HMODULE hLib, DWORD threadId, bool closeToTray);
void DLLIMPORT UnRegisterHook();
