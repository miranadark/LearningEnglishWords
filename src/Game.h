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
        cout << "На легком уровне вам нужно дописать только 2 последних буквы!\n";
        incNumber = 1;
        StartOneEasyLevel();
        break;
    case 2 :
        cout << "На среднем уровне вам нужно дописать только 3 последних буквы!\n";
        incNumber = 1;
        StartOneNormalLevel();
        break;
    case 3 :
        cout << "На сложном уровне вам нужно дописать только 4 последних буквы!\n";
        incNumber = 1;
        StartOneHardLevel();
        break;
    default:
        cout << "Возможно вы ошиблись, введите число соотвествующее уровню(число из колонки).\n";
        cout << "Попробуйте еще раз:";
        StartGameLevelOne();
        break;
    }
}

void StartOneEasyLevel(){
    string answer = "";
    switch (incNumber) {
    case 1:
        incNumber++;
        cout << "driv...\n"; //driver
        cin >> answer;
        if (answer == "er") {
            easyLevelOne[0] = 1;
        } else {
            easyLevelOne[0] = 0;
        }
        StartOneEasyLevel();
        break;
    case 2:
        incNumber++;
        cout << "chi...\n"; //chief
        cin >> answer;
        if (answer == "ef") {
            easyLevelOne[1] = 1;
        } else {
            easyLevelOne[1] = 0;
        }
        StartOneEasyLevel();
        break;
    case 3:
        incNumber++;
        cout << "frie...\n"; //friend
        cin >> answer;
        if (answer == "nd") {
            easyLevelOne[2] = 1;
        } else {
            easyLevelOne[2] = 0;
        }
        StartOneEasyLevel();
        break;
    case 4:
        incNumber++;
        cout << "plea...\n"; //please
        cin >> answer;
        if (answer == "se") {
            easyLevelOne[3] = 1;
        } else {
            easyLevelOne[3] = 0;
        }
        StartOneEasyLevel();
        break;
    case 5:
        incNumber++;
        cout << "sor...\n"; //sorry
        cin >> answer;
        if (answer == "ry") {
            easyLevelOne[4] = 1;
        } else {
            easyLevelOne[4] = 0;
        }
        StartOneEasyLevel();
        break;
    case 6:
        incNumber++;
        cout << "gue...\n"; //guest
        cin >> answer;
        if (answer == "st") {
            easyLevelOne[5] = 1;
        } else {
            easyLevelOne[5] = 0;
        }
        StartOneEasyLevel();
        break;
    case 7:
        incNumber++;
        cout << "nie...\n"; //niece
        cin >> answer;
        if (answer == "ce") {
            easyLevelOne[6] = 1;
        } else {
            easyLevelOne[6] = 0;
        }
        StartOneEasyLevel();
        break;
    case 8:
        incNumber++;
        cout << "cous...\n"; //cousin
        cin >> answer;
        if (answer == "in") {
            easyLevelOne[7] = 1;
        } else {
            easyLevelOne[7] = 0;
        }
        StartOneEasyLevel();
        break;
    case 9:
        incNumber++;
        cout << "work...\n"; //worker
        cin >> answer;
        if (answer == "er") {
            easyLevelOne[8] = 1;
        } else {
            easyLevelOne[8] = 0;
        }
        StartOneEasyLevel();
        break;
    case 10:
        cout << "doct...\n"; //doctor
        cin >> answer;
        if (answer == "or") {
            easyLevelOne[9] = 1;
        } else {
            easyLevelOne[9] = 0;
        }
        cout << "\n0 - значит неправильно / 1 - значит правильно!\n";
        cout << "╔═══╤═════════════════╤═══╗\n"
                "║ № │      Слово      │ # ║\n"
                "╟───┼─────────────────┼───╢\n"
                "║ 1 │      driver     │ "<< easyLevelOne[0]<<" ║\n"
                                                              "╟───┼─────────────────┼───╢\n"
                                                              "║ 2 │      chief      │ "<< easyLevelOne[1]<<" ║\n"
                                                                                                            "╟───┼─────────────────┼───╢\n"
                                                                                                            "║ 3 │      friend     │ "<< easyLevelOne[2]<<" ║\n"
                                                                                                                                                          "╟───┼─────────────────┼───╢\n"
                                                                                                                                                          "║ 4 │      please     │ "<< easyLevelOne[3]<<" ║\n"
                                                                                                                                                                                                        "╟───┼─────────────────┼───╢\n"
                                                                                                                                                                                                        "║ 5 │      sorry      │ "<< easyLevelOne[4]<<" ║\n"
                                                                                                                                                                                                                                                      "╟───┼─────────────────┼───╢\n"
                                                                                                                                                                                                                                                      "║ 6 │      guest      │ "<< easyLevelOne[5]<<" ║\n"
                                                                                                                                                                                                                                                                                                    "╟───┼─────────────────┼───╢\n"
                                                                                                                                                                                                                                                                                                    "║ 7 │      niece      │ "<< easyLevelOne[6]<<" ║\n"
                                                                                                                                                                                                                                                                                                                                                  "╟───┼─────────────────┼───╢\n"
                                                                                                                                                                                                                                                                                                                                                  "║ 8 │      cousin     │ "<< easyLevelOne[7]<<" ║\n"
                                                                                                                                                                                                                                                                                                                                                                                                "╟───┼─────────────────┼───╢\n"
                                                                                                                                                                                                                                                                                                                                                                                                "║ 9 │      worker     │ "<< easyLevelOne[8]<<" ║\n"
                                                                                                                                                                                                                                                                                                                                                                                                                                              "╟───┼─────────────────┼───╢\n"
                                                                                                                                                                                                                                                                                                                                                                                                                                              "║ 10│      doctor     │ "<< easyLevelOne[9]<<" ║\n"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            "╚═══╧═════════════════╧═══╝\n";
        PressAnyKey();
        break;
    }
}


#endif // LEARNINGENGLISHWORDS_GAME_H
