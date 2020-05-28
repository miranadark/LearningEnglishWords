#ifndef LEARNINGENGLISHWORDS_GAME_H
#define LEARNINGENGLISHWORDS_GAME_H

#include <iostream>
#include "GameMenu.h"

using namespace std;

void StartGameMenu();
void getUserName();
int CheckInput();
void StartGameLevelOne();
void StartGameLevelTwo();
void StartGameLevelThree();

void StartGameMenu()
{
    int selectLevel = 0;
    selectLevel = CheckInput();
    switch (selectLevel){
    case 1 :
        PrintGameMenuOne();
        StartGameLevelOne();
        break;
    case 2 :
        PrintGameMenuTwo();
        StartGameLevelTwo();
        break;
    case 3 :
        PrintGameMenuThree();
        StartGameLevelThree();
        break;
    default:
        cout << "Возможно вы ошиблись, введите число соотвествующее уровню(число из колонки).\n";
        cout << "Попробуйте еще раз:";
        StartGameMenu();
        break;
    }
}

void StartGameLevelOne(){
    int selectLevel = 0;
    selectLevel = CheckInput();
    switch (selectLevel){
    case 1 :

        break;
    case 2 :

        break;
    case 3 :

        break;
    default:
        cout << "Возможно вы ошиблись, введите число соотвествующее уровню(число из колонки).\n";
        cout << "Попробуйте еще раз:";
        StartGameLevelOne();
        break;
    }
}

void StartGameLevelTwo(){
    int selectLevel = 0;
    selectLevel = CheckInput();
    switch (selectLevel){
    case 1 :

        break;
    case 2 :

        break;
    case 3 :

        break;
    default:
        cout << "Возможно вы ошиблись, введите число соотвествующее уровню(число из колонки).\n";
        cout << "Попробуйте еще раз:";
        StartGameLevelTwo();
        break;
    }
}

void StartGameLevelThree(){
    int selectLevel = 0;
    selectLevel = CheckInput();
    switch (selectLevel){
    case 1 :

        break;
    case 2 :

        break;
    case 3 :

        break;
    default:
        cout << "Возможно вы ошиблись, введите число соотвествующее уровню(число из колонки).\n";
        cout << "Попробуйте еще раз:";
        StartGameLevelThree();
        break;
    }
}

void getUserName()
{
    string userName = ""; //
    cout << "Для начала введите своё имя:";
    cin >> userName;
}

int CheckInput()
{
    int Number = 0;
    string getLevelNumber;                 //
    cin >> getLevelNumber;                 //
    Number = atoi(getLevelNumber.c_str()); //
    return Number;
}


#endif // LEARNINGENGLISHWORDS_GAME_H
