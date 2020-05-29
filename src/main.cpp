#include "Game.h"
#include "GameMenu.h"
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    PrintGameMenu();
    StartGameMenu();
    return 0;
}
