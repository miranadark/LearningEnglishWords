#include <iostream>
#include <windows.h>
#include "GameMenu.h"
#include "Game.h"

using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    getUserName();
    PrintGameMenu();
    StartGameMenu();



    return 0;
}
