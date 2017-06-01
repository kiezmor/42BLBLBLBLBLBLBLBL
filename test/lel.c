#define _WIN32_WINNT 0x0500
#include <windows.h>

int main(void)
{
    HWND hWnd = GetConsoleWindow();
    ShowWindow( hWnd, SW_HIDE );
    int i = 0;
    while (i++ < 10)
        MessageBox(0,"NIK", "UR FIRED", MB_OK );
    return(0);
}