#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>

using namespace std;
void set_color(const char *color) {
    char cmd[512];
    sprintf(cmd, "echo|set /p=\"\e[%sm\"", color);
    system(cmd);
}
void setFontSize(int FontSize)
{
CONSOLE_FONT_INFOEX info = {0};
info.cbSize = sizeof(info);
info.dwFontSize.Y = FontSize; // leave X as zero
info.FontWeight = FW_NORMAL;
SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), NULL, &info);
}
int main()
{
	set_color("01;31");
    cout << "Enter name you want to fight:.....";
    cin.ignore();
    set_color("01;32");
    cout << "\nLoading 0%.....\n";
    Sleep(2000);
    set_color("01;34");
    cout << "\nLoading 25%.....\n";
    Sleep(1500);
    set_color("01;35");
    cout << "\nLoading 50%.....\n";
    Sleep(1000);
    set_color("01;36");
    cout << "\nLoading 75%.....\n";
    set_color("01;37");
    Sleep(1000);
    set_color("01;33");
    cout << "\nLoading successfully !!!\n\n\n";
    Sleep(2000);
    fstream newfile;
    newfile.open("input.txt", ios::in);
    if (newfile.is_open())
    {
        string tp;
        set_color("01;36");
        while (getline(newfile, tp))
        {
            cout << tp << endl;
            Sleep(200);
        }
        newfile.close();
    }
    Sleep(1000);
    set_color("01;33");
    cout << "\nLoading successfully !!!\n\n\n";
    newfile.open("input2.txt", ios::in);
    if (newfile.is_open())
    {
        string tp;
        set_color("01;32");
        while (getline(newfile, tp))
        {
            cout << tp << endl;
            Sleep(200);
        }
        newfile.close();
    }
    Sleep(1000);
    set_color("01;33");
    cout << "\nLoading successfully !!!\n\n\n";
    newfile.open("input3.txt", ios::in);
    if (newfile.is_open())
    {
        string tp;
        while (getline(newfile, tp))
        {
            cout << tp << endl;
            Sleep(200);
        }
        newfile.close();
    }
    system("pause");
    return 0;
}

