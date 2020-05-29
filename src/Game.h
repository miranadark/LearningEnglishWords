#ifndef LEARNINGENGLISHWORDS_GAME_H
#define LEARNINGENGLISHWORDS_GAME_H

#include <iostream>
#include "GameMenu.h"
#include "CheckInput.h"
#include <conio.h>

using namespace std;
int incNumber = 0;
int easyLevelOne[9],normalLevelOne[9],hardLevelOne[9];
int easyLevelTwo[9],normalLevelTwo[9],hardLevelTwo[9];
int easyLevelThree[9];

void StartGameMenu();
void PressAnyKey();

void StartGameLevelOne();
void StartGameLevelTwo();
void StartGameLevelThree();

void PressAnyKey(){
    cout<<"Чтобы выйти в меню, нажмите Enter...";
    if(getch()){
        PrintGameMenu();
        StartGameMenu();
    }

}

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



#endif // LEARNINGENGLISHWORDS_GAME_H
