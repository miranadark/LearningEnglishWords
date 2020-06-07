#ifndef LEARNINGENGLISHWORDS_GAME_H
#define LEARNINGENGLISHWORDS_GAME_H

#include "CheckInput.h"
#include "GameMenu.h"
#include <conio.h>
#include <iostream>

using namespace std;
int incNumber = 0;
int easyLevelOne[9], normalLevelOne[9], hardLevelOne[9];
int easyLevelTwo[9], normalLevelTwo[9], hardLevelTwo[9];
int easyLevelThree[9], normalLevelThree[9], hardLevelThree[9];

void StartGameMenu();
void PressAnyKey();

void StartGameLevelOne();
void StartGameLevelTwo();
void StartGameLevelThree();

void StartOneEasyLevel();
void StartOneNormalLevel();
void StartOneHardLevel();

void StartTwoEasyLevel();
void StartTwoNormalLevel();
void StartTwoHardLevel();

void StartThreeEasyLevel();
void StartThreeNormalLevel();
void StartThreeHardLevel();

void PressAnyKey()
{
    cout << "Чтобы выйти в меню, нажмите Enter...";
    if (getch()) {
        PrintGameMenu();
        StartGameMenu();
    }
}

void StartGameMenu()
{
    int selectLevel = 0;
    selectLevel = CheckInput();
    switch (selectLevel) {
    case 1:
        PrintGameMenuOne();
        StartGameLevelOne();
        break;
    case 2:
        PrintGameMenuTwo();
        StartGameLevelTwo();
        break;
    case 3:
        PrintGameMenuThree();
        StartGameLevelThree();
        break;
    default:
        cout << "Возможно вы ошиблись, введите число соотвествующее "
                "уровню(число из колонки).\n";
        cout << "Попробуйте еще раз:";
        StartGameMenu();
        break;
    }
}

void StartGameLevelOne()
{
    int selectLevel = 0;
    selectLevel = CheckInput();
    switch (selectLevel) {
    case 1:
        cout << "На легком уровне вам нужно дописать только 2 последних "
                "буквы!\n";
        incNumber = 1;
        StartOneEasyLevel();
        break;
    case 2:
        cout << "На среднем уровне вам нужно дописать только 3 последних "
                "буквы!\n";
        incNumber = 1;
        StartOneNormalLevel();
        break;
    case 3:
        cout << "На сложном уровне вам нужно дописать только 4 последних "
                "буквы!\n";
        incNumber = 1;
        StartOneHardLevel();
        break;
    default:
        cout << "Возможно вы ошиблись, введите число соотвествующее "
                "уровню(число из колонки).\n";
        cout << "Попробуйте еще раз:";
        StartGameLevelOne();
        break;
    }
}

void StartOneEasyLevel()
{
    string answer = "";
    switch (incNumber) {
    case 1:
        incNumber++;
        cout << "driv...\n"; // driver
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
        cout << "chi...\n"; // chief
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
        cout << "frie...\n"; // friend
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
        cout << "plea...\n"; // please
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
        cout << "sor...\n"; // sorry
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
        cout << "gue...\n"; // guest
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
        cout << "nie...\n"; // niece
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
        cout << "cous...\n"; // cousin
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
        cout << "work...\n"; // worker
        cin >> answer;
        if (answer == "er") {
            easyLevelOne[8] = 1;
        } else {
            easyLevelOne[8] = 0;
        }
        StartOneEasyLevel();
        break;
    case 10:
        cout << "doct...\n"; // doctor
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
                "║ 1 │      driver     │ "
             << easyLevelOne[0]
             << " ║\n"
                "╟───┼─────────────────┼───╢\n"
                "║ 2 │      chief      │ "
             << easyLevelOne[1]
             << " ║\n"
                "╟───┼─────────────────┼───╢\n"
                "║ 3 │      friend     │ "
             << easyLevelOne[2]
             << " ║\n"
                "╟───┼─────────────────┼───╢\n"
                "║ 4 │      please     │ "
             << easyLevelOne[3]
             << " ║\n"
                "╟───┼─────────────────┼───╢\n"
                "║ 5 │      sorry      │ "
             << easyLevelOne[4]
             << " ║\n"
                "╟───┼─────────────────┼───╢\n"
                "║ 6 │      guest      │ "
             << easyLevelOne[5]
             << " ║\n"
                "╟───┼─────────────────┼───╢\n"
                "║ 7 │      niece      │ "
             << easyLevelOne[6]
             << " ║\n"
                "╟───┼─────────────────┼───╢\n"
                "║ 8 │      cousin     │ "
             << easyLevelOne[7]
             << " ║\n"
                "╟───┼─────────────────┼───╢\n"
                "║ 9 │      worker     │ "
             << easyLevelOne[8]
             << " ║\n"
                "╟───┼─────────────────┼───╢\n"
                "║ 10│      doctor     │ "
             << easyLevelOne[9]
             << " ║\n"
                "╚═══╧═════════════════╧═══╝\n";
        PressAnyKey();
        break;
    }
}

void StartOneNormalLevel()
{
    string answer = "";
    switch (incNumber) {
    case 1:
        incNumber++;
        cout << "daugh...\n"; // daughter
        cin >> answer;
        if (answer == "ter") {
            normalLevelOne[0] = 1;
        } else {
            normalLevelOne[0] = 0;
        }
        StartOneNormalLevel();
        break;
    case 2:
        incNumber++;
        cout << "eleph...\n"; // elephant
        cin >> answer;
        if (answer == "ant") {
            normalLevelOne[1] = 1;
        } else {
            normalLevelOne[1] = 0;
        }
        StartOneNormalLevel();
        break;
    case 3:
        incNumber++;
        cout << "build...\n"; // building
        cin >> answer;
        if (answer == "ing") {
            normalLevelOne[2] = 1;
        } else {
            normalLevelOne[2] = 0;
        }
        StartOneNormalLevel();
        break;
    case 4:
        incNumber++;
        cout << "univers...\n"; // university
        cin >> answer;
        if (answer == "ity") {
            normalLevelOne[3] = 1;
        } else {
            normalLevelOne[3] = 0;
        }
        StartOneNormalLevel();
        break;
    case 5:
        incNumber++;
        cout << "saus...\n"; // sausage
        cin >> answer;
        if (answer == "age") {
            normalLevelOne[4] = 1;
        } else {
            normalLevelOne[4] = 0;
        }
        StartOneNormalLevel();
        break;
    case 6:
        incNumber++;
        cout << "hospi...\n"; // hospital
        cin >> answer;
        if (answer == "tal") {
            normalLevelOne[5] = 1;
        } else {
            normalLevelOne[5] = 0;
        }
        StartOneNormalLevel();
        break;
    case 7:
        incNumber++;
        cout << "mount...\n"; // mountain
        cin >> answer;
        if (answer == "ain") {
            normalLevelOne[6] = 1;
        } else {
            normalLevelOne[6] = 0;
        }
        StartOneNormalLevel();
        break;
    case 8:
        incNumber++;
        cout << "bedr...\n"; // bedroom
        cin >> answer;
        if (answer == "oom") {
            normalLevelOne[7] = 1;
        } else {
            normalLevelOne[7] = 0;
        }
        StartOneNormalLevel();
        break;
    case 9:
        incNumber++;
        cout << "chim...\n"; // chimney
        cin >> answer;
        if (answer == "ney") {
            normalLevelOne[8] = 1;
        } else {
            normalLevelOne[8] = 0;
        }
        StartOneNormalLevel();
        break;
    case 10:
        cout << "wardr...\n"; // wardrobe
        cin >> answer;
        if (answer == "obe") {
            normalLevelOne[9] = 1;
        } else {
            normalLevelOne[9] = 0;
        }
        cout << "\n0 - значит неправильно / 1 - значит правильно!\n";
        cout << "╔═══╤═════════════════╤═══╗\n"
                "║ № │      Слово      │ # ║\n"
                "╟───┼─────────────────┼───╢\n"
                "║ 1 │     daughter    │ "
             << normalLevelOne[0]
             << " ║\n"
                "╟───┼─────────────────┼───╢\n"
                "║ 2 │     elephant    │ "
             << normalLevelOne[1]
             << " ║\n"
                "╟───┼─────────────────┼───╢\n"
                "║ 3 │     building    │ "
             << normalLevelOne[2]
             << " ║\n"
                "╟───┼─────────────────┼───╢\n"
                "║ 4 │    university   │ "
             << normalLevelOne[3]
             << " ║\n"
                "╟───┼─────────────────┼───╢\n"
                "║ 5 │     sausage     │ "
             << normalLevelOne[4]
             << " ║\n"
                "╟───┼─────────────────┼───╢\n"
                "║ 6 │     hospital    │ "
             << normalLevelOne[5]
             << " ║\n"
                "╟───┼─────────────────┼───╢\n"
                "║ 7 │     mountain    │ "
             << normalLevelOne[6]
             << " ║\n"
                "╟───┼─────────────────┼───╢\n"
                "║ 8 │     bedroom     │ "
             << normalLevelOne[7]
             << " ║\n"
                "╟───┼─────────────────┼───╢\n"
                "║ 9 │     chimney     │ "
             << normalLevelOne[8]
             << " ║\n"
                "╟───┼─────────────────┼───╢\n"
                "║ 10│     wardrobe    │ "
             << normalLevelOne[9]
             << " ║\n"
                "╚═══╧═════════════════╧═══╝\n";
        PressAnyKey();
        break;
    }
}

void StartOneHardLevel()
{
    string answer = "";
    switch (incNumber) {
    case 1:
        incNumber++;
        cout << "strawb...\n"; // strawberry
        cin >> answer;
        if (answer == "erry") {
            hardLevelOne[0] = 1;
        } else {
            hardLevelOne[0] = 0;
        }
        StartOneHardLevel();
        break;
    case 2:
        incNumber++;
        cout << "vegeta...\n"; // vegetables
        cin >> answer;
        if (answer == "bles") {
            hardLevelOne[1] = 1;
        } else {
            hardLevelOne[1] = 0;
        }
        StartOneHardLevel();
        break;
    case 3:
        incNumber++;
        cout << "waterm...\n"; // watermelon
        cin >> answer;
        if (answer == "elon") {
            hardLevelOne[2] = 1;
        } else {
            hardLevelOne[2] = 0;
        }
        StartOneHardLevel();
        break;
    case 4:
        incNumber++;
        cout << "pinea...\n"; // pineapple
        cin >> answer;
        if (answer == "pple") {
            hardLevelOne[3] = 1;
        } else {
            hardLevelOne[3] = 0;
        }
        StartOneHardLevel();
        break;
    case 5:
        incNumber++;
        cout << "handkerc...\n"; // handkerchief
        cin >> answer;
        if (answer == "hief") {
            hardLevelOne[4] = 1;
        } else {
            hardLevelOne[4] = 0;
        }
        StartOneHardLevel();
        break;
    case 6:
        incNumber++;
        cout << "experi...\n"; // experience
        cin >> answer;
        if (answer == "ence") {
            hardLevelOne[5] = 1;
        } else {
            hardLevelOne[5] = 0;
        }
        StartOneHardLevel();
        break;
    case 7:
        incNumber++;
        cout << "advan...\n"; // advantage
        cin >> answer;
        if (answer == "tage") {
            hardLevelOne[6] = 1;
        } else {
            hardLevelOne[6] = 0;
        }
        StartOneHardLevel();
        break;
    case 8:
        incNumber++;
        cout << "circumst...\n"; // circumstance
        cin >> answer;
        if (answer == "ance") {
            hardLevelOne[7] = 1;
        } else {
            hardLevelOne[7] = 0;
        }
        StartOneHardLevel();
        break;
    case 9:
        incNumber++;
        cout << "relation...\n"; // relationship
        cin >> answer;
        if (answer == "ship") {
            hardLevelOne[8] = 1;
        } else {
            hardLevelOne[8] = 0;
        }
        StartOneHardLevel();
        break;
    case 10:
        cout << "develop...\n"; // development
        cin >> answer;
        if (answer == "ment") {
            hardLevelOne[9] = 1;
        } else {
            hardLevelOne[9] = 0;
        }
        cout << "\n0 - значит неправильно / 1 - значит правильно!\n";
        cout << "╔═══╤═════════════════╤═══╗\n"
                "║ № │      Слово      │ # ║\n"
                "╟───┼─────────────────┼───╢\n"
                "║ 1 │    strawberry   │ "
             << hardLevelOne[0]
             << " ║\n"
                "╟───┼─────────────────┼───╢\n"
                "║ 2 │    vegetables   │ "
             << hardLevelOne[1]
             << " ║\n"
                "╟───┼─────────────────┼───╢\n"
                "║ 3 │    watermelon   │ "
             << hardLevelOne[2]
             << " ║\n"
                "╟───┼─────────────────┼───╢\n"
                "║ 4 │    pineapple    │ "
             << hardLevelOne[3]
             << " ║\n"
                "╟───┼─────────────────┼───╢\n"
                "║ 5 │   handkerchief  │ "
             << hardLevelOne[4]
             << " ║\n"
                "╟───┼─────────────────┼───╢\n"
                "║ 6 │    experience   │ "
             << hardLevelOne[5]
             << " ║\n"
                "╟───┼─────────────────┼───╢\n"
                "║ 7 │    advantage    │ "
             << hardLevelOne[6]
             << " ║\n"
                "╟───┼─────────────────┼───╢\n"
                "║ 8 │   circumstance  │ "
             << hardLevelOne[7]
             << " ║\n"
                "╟───┼─────────────────┼───╢\n"
                "║ 9 │   relationship  │ "
             << hardLevelOne[8]
             << " ║\n"
                "╟───┼─────────────────┼───╢\n"
                "║ 10│   development   │ "
             << hardLevelOne[9]
             << " ║\n"
                "╚═══╧═════════════════╧═══╝\n";
        PressAnyKey();
        break;
    }
}

void StartGameLevelTwo()
{
    int selectLevel = 0;
    selectLevel = CheckInput();
    switch (selectLevel) {
    case 1:
        cout << "На легком уровне вам будут встречаться более распрестраненные "
                "слова!\n";
        cout << "Слова нужно писать с маленькой буквы!\n";
        incNumber = 1;
        StartTwoEasyLevel();
        break;
    case 2:
        cout << "На среднем уровне вам будут встречаться менее редкие слова!\n";
        cout << "Слова нужно писать с маленькой буквы!\n";
        incNumber = 1;
        StartTwoNormalLevel();
        break;
    case 3:
        cout << "На сложном уровне вам будут встречаться более редкие слова!\n";
        cout << "Слова нужно писать с маленькой буквы!\n";
        incNumber = 1;
        StartTwoHardLevel();
        break;
    default:
        cout << "Возможно вы ошиблись, введите число соотвествующее "
                "уровню(число из колонки).\n";
        cout << "Попробуйте еще раз:";
        StartGameLevelTwo();
        break;
    }
}

void StartTwoEasyLevel()
{
    string answer = "";
    switch (incNumber) {
    case 1:
        incNumber++;
        cout << "лампа-"; // lamp - лампа
        cin >> answer;
        if (answer == "lamp") {
            easyLevelTwo[0] = 1;
        } else {
            easyLevelTwo[0] = 0;
        }
        StartTwoEasyLevel();
        break;
    case 2:
        incNumber++;
        cout << "обувь-"; // shoes - обувь
        cin >> answer;
        if (answer == "shoes") {
            easyLevelTwo[1] = 1;
        } else {
            easyLevelTwo[1] = 0;
        }
        StartTwoEasyLevel();
        break;
    case 3:
        incNumber++;
        cout << "боль-"; // pain - боль
        cin >> answer;
        if (answer == "pain") {
            easyLevelTwo[2] = 1;
        } else {
            easyLevelTwo[2] = 0;
        }
        StartTwoEasyLevel();
        break;
    case 4:
        incNumber++;
        cout << "ветер-"; // wind - ветер
        cin >> answer;
        if (answer == "wind") {
            easyLevelTwo[3] = 1;
        } else {
            easyLevelTwo[3] = 0;
        }
        StartTwoEasyLevel();
        break;
    case 5:
        incNumber++;
        cout << "наличные(деньги)-"; // cash - наличные (деньги)
        cin >> answer;
        if (answer == "cash") {
            easyLevelTwo[4] = 1;
        } else {
            easyLevelTwo[4] = 0;
        }
        StartTwoEasyLevel();
        break;
    case 6:
        incNumber++;
        cout << "скорость-"; // speed - скорость
        cin >> answer;
        if (answer == "speed") {
            easyLevelTwo[5] = 1;
        } else {
            easyLevelTwo[5] = 0;
        }
        StartTwoEasyLevel();
        break;
    case 7:
        incNumber++;
        cout << "ненависть-"; // hate - ненависть
        cin >> answer;
        if (answer == "hate") {
            easyLevelTwo[6] = 1;
        } else {
            easyLevelTwo[6] = 0;
        }
        StartTwoEasyLevel();
        break;
    case 8:
        incNumber++;
        cout << "привычка-"; // habit - привычка
        cin >> answer;
        if (answer == "habit") {
            easyLevelTwo[7] = 1;
        } else {
            easyLevelTwo[7] = 0;
        }
        StartTwoEasyLevel();
        break;
    case 9:
        incNumber++;
        cout << "слово-"; // word - слово
        cin >> answer;
        if (answer == "word") {
            easyLevelTwo[8] = 1;
        } else {
            easyLevelTwo[8] = 0;
        }
        StartTwoEasyLevel();
        break;
    case 10:
        cout << "серый-"; // grey - серый
        cin >> answer;
        if (answer == "grey") {
            easyLevelTwo[9] = 1;
        } else {
            easyLevelTwo[9] = 0;
        }
        cout << "\n0 - значит неправильно / 1 - значит правильно!\n";
        cout << "╔═══╤══════════════════╤════════════════╤═══╗\n"
                "║ № │       Ответ      │      Слово     │ # ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 1 │       lamp       │      лампа     │ "
             << easyLevelTwo[0]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 2 │       shoes      │      обувь     │ "
             << easyLevelTwo[1]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 3 │       pain       │      боль      │ "
             << easyLevelTwo[2]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 4 │       wind       │      ветер     │ "
             << easyLevelTwo[3]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 5 │       cash       │    наличные    │ "
             << easyLevelTwo[4]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 6 │       speed      │    скорость    │ "
             << easyLevelTwo[5]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 7 │       hate       │    ненависть   │ "
             << easyLevelTwo[6]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 8 │       habit      │    привычка    │ "
             << easyLevelTwo[7]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 9 │       word       │      слово     │ "
             << easyLevelTwo[8]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 10│       grey       │      серый     │ "
             << easyLevelTwo[9]
             << " ║\n"
                "╚═══╧══════════════════╧════════════════╧═══╝\n";
        "╚═══╧═════════════════╧═══╝\n";
        PressAnyKey();
        break;
    }
}

void StartTwoNormalLevel()
{
    string answer = "";
    switch (incNumber) {
    case 1:
        incNumber++;
        cout << "беспокоить-"; // disturb - беспокоить, мешать
        cin >> answer;
        if (answer == "disturb") {
            normalLevelTwo[0] = 1;
        } else {
            normalLevelTwo[0] = 0;
        }
        StartTwoNormalLevel();
        break;
    case 2:
        incNumber++;
        cout << "глупый-"; // stupid - глупый
        cin >> answer;
        if (answer == "stupid") {
            normalLevelTwo[1] = 1;
        } else {
            normalLevelTwo[1] = 0;
        }
        StartTwoNormalLevel();
        break;
    case 3:
        incNumber++;
        cout << "опасность-"; // danger - опасность
        cin >> answer;
        if (answer == "danger") {
            normalLevelTwo[2] = 1;
        } else {
            normalLevelTwo[2] = 0;
        }
        StartTwoNormalLevel();
        break;
    case 4:
        incNumber++;
        cout << "выбор-"; // choice [чойс] - выбор
        cin >> answer;
        if (answer == "choice") {
            normalLevelTwo[3] = 1;
        } else {
            normalLevelTwo[3] = 0;
        }
        StartTwoNormalLevel();
        break;
    case 5:
        incNumber++;
        cout << "воздушный шар-"; // balloon [бэлу:н] - воздушный шар
        cin >> answer;
        if (answer == "balloon") {
            normalLevelTwo[4] = 1;
        } else {
            normalLevelTwo[4] = 0;
        }
        StartTwoNormalLevel();
        break;
    case 6:
        incNumber++;
        cout << "календарь-"; // calendar [кЭлиндэр] - календарь
        cin >> answer;
        if (answer == "calendar") {
            normalLevelTwo[5] = 1;
        } else {
            normalLevelTwo[5] = 0;
        }
        StartTwoNormalLevel();
        break;
    case 7:
        incNumber++;
        cout << "ноутбук-"; // laptop [лЭптоп] - ноутбук
        cin >> answer;
        if (answer == "laptop") {
            normalLevelTwo[6] = 1;
        } else {
            normalLevelTwo[6] = 0;
        }
        StartTwoNormalLevel();
        break;
    case 8:
        incNumber++;
        cout << "машина-"; // machine [мэшИ:н] - машина;
        cin >> answer;
        if (answer == "machine") {
            normalLevelTwo[7] = 1;
        } else {
            normalLevelTwo[7] = 0;
        }
        StartTwoNormalLevel();
        break;
    case 9:
        incNumber++;
        cout << "ножницы-"; // scissors [сИзэрз] - ножницы
        cin >> answer;
        if (answer == "scissors") {
            normalLevelTwo[8] = 1;
        } else {
            normalLevelTwo[8] = 0;
        }
        StartTwoNormalLevel();
    case 10:
        incNumber++;
        cout << "очки-"; // glasses [глА:сиз] - очки
        cin >> answer;
        if (answer == "glasses") {
            normalLevelTwo[9] = 1;
        } else {
            normalLevelTwo[9] = 0;
        }
        cout << "\n0 - значит неправильно / 1 - значит правильно!\n";
        cout << "╔═══╤══════════════════╤════════════════╤═══╗\n"
                "║ № │       Ответ      │      Слово     │ # ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 1 │      disturb     │   беспокоить   │ "
             << normalLevelTwo[0]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 2 │      stupid      │     глупый     │ "
             << normalLevelTwo[1]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 3 │      danger      │    опасность   │ "
             << normalLevelTwo[2]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 4 │      choice      │      выбор     │ "
             << normalLevelTwo[3]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 5 │      balloon     │  воздушный шар │ "
             << normalLevelTwo[4]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 6 │      calendar    │    календарь   │ "
             << normalLevelTwo[5]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 7 │      laptop      │     ноутбук    │ "
             << normalLevelTwo[6]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 8 │      machine     │      машина    │ "
             << normalLevelTwo[7]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 9 │      scissors    │     ножницы    │ "
             << normalLevelTwo[8]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 10│      glasses     │      очки      │ "
             << normalLevelTwo[9]
             << " ║\n"
                "╚═══╧══════════════════╧════════════════╧═══╝\n";
        "╚═══╧══════════════════╧════════════════╧═══╝\n";
        "╚═══╧═════════════════╧═══╝\n";
        PressAnyKey();
        break;
    }
}

void StartTwoHardLevel()
{
    string answer = "";
    switch (incNumber) {
    case 1:
        incNumber++;
        cout << "сосед-"; // neighbor - сосед
        cin >> answer;
        if (answer == "neighbor") {
            hardLevelTwo[0] = 1;
        } else {
            hardLevelTwo[0] = 0;
        }
        StartTwoHardLevel();
        break;
    case 2:
        incNumber++;
        cout << "коллега-"; // colleague - коллега
        cin >> answer;
        if (answer == "colleague") {
            hardLevelTwo[1] = 1;
        } else {
            hardLevelTwo[1] = 0;
        }
        StartTwoHardLevel();
        break;
    case 3:
        incNumber++;
        cout << "инженер-"; // engineer - инженер
        cin >> answer;
        if (answer == "engineer") {
            hardLevelTwo[2] = 1;
        } else {
            hardLevelTwo[2] = 0;
        }
        StartTwoHardLevel();
        break;
    case 4:
        incNumber++;
        cout << "микроволновка-"; // microwave - микроволновка
        cin >> answer;
        if (answer == "microwave") {
            hardLevelTwo[3] = 1;
        } else {
            hardLevelTwo[3] = 0;
        }
        StartTwoHardLevel();
        break;
    case 5:
        incNumber++;
        cout << "бутерброд-"; // sandwich - бутерброд
        cin >> answer;
        if (answer == "sandwich") {
            hardLevelTwo[4] = 1;
        } else {
            hardLevelTwo[4] = 0;
        }
        StartTwoHardLevel();
        break;
    case 6:
        incNumber++;
        cout << "овощи-"; // vegetables - овощи
        cin >> answer;
        if (answer == "vegetables") {
            hardLevelTwo[5] = 1;
        } else {
            hardLevelTwo[5] = 0;
        }
        StartTwoHardLevel();
        break;
    case 7:
        incNumber++;
        cout << "арбуз-"; // watermelon - арбуз
        cin >> answer;
        if (answer == "watermelon") {
            hardLevelTwo[6] = 1;
        } else {
            hardLevelTwo[6] = 0;
        }
        StartTwoHardLevel();
        break;
    case 8:
        incNumber++;
        cout << "блокнот-"; // notebook - блокнот
        cin >> answer;
        if (answer == "notebook") {
            hardLevelTwo[7] = 1;
        } else {
            hardLevelTwo[7] = 0;
        }
        StartTwoHardLevel();
        break;
    case 9:
        incNumber++;
        cout << "чемодан-"; // suitcase - чемодан
        cin >> answer;
        if (answer == "suitcase") {
            hardLevelTwo[8] = 1;
        } else {
            hardLevelTwo[8] = 0;
        }
        StartTwoHardLevel();
    case 10:
        cout << "клавиатура-"; // keyboard - клавиатура
        cin >> answer;
        if (answer == "keyboard") {
            hardLevelTwo[9] = 1;
        } else {
            hardLevelTwo[9] = 0;
        }
        cout << "\n0 - значит неправильно / 1 - значит правильно!\n";
        cout << "╔═══╤══════════════════╤════════════════╤═══╗\n"
                "║ № │       Ответ      │      Слово     │ # ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 1 │     neighbor     │      сосед     │ "
             << hardLevelTwo[0]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 2 │     colleague    │     коллега    │ "
             << hardLevelTwo[1]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 3 │     engineer     │     инженер    │ "
             << hardLevelTwo[2]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 4 │     microwave    │  микроволновка │ "
             << hardLevelTwo[3]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 5 │     sandwich     │    бутерброд   │ "
             << hardLevelTwo[4]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 6 │    vegetables    │      овощи     │ "
             << hardLevelTwo[5]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 7 │    watermelon    │      арбуз     │ "
             << hardLevelTwo[6]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 8 │     notebook     │     блокнот    │ "
             << hardLevelTwo[7]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 9 │     suitcase     │     чемодан    │ "
             << hardLevelTwo[8]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 10│     keyboard     │    клавиатура  │ "
             << hardLevelTwo[9]
             << " ║\n"
                "╚═══╧══════════════════╧════════════════╧═══╝\n";
        "╚═══╧══════════════════╧════════════════╧═══╝\n";
        "╚═══╧══════════════════╧════════════════╧═══╝\n";
        "╚═══╧═════════════════╧═══╝\n";
        PressAnyKey();
        break;
    }
}

void StartGameLevelThree()
{
    int selectLevel = 0;
    selectLevel = CheckInput();
    switch (selectLevel) {
    case 1:
        cout << "На легком уровне вам нужно выбрать ответ из 3-х вариантов!\n";
        cout << "Нужно написать число, соответствующее варианту ответа!\n";
        incNumber = 1;
        StartThreeEasyLevel();
        break;
    case 2:
        cout << "На среднем уровне вам нужно выбрать ответ из 4-х вариантов!\n";
        cout << "Нужно написать число, соответствующее варианту ответа!\n";
        incNumber = 1;
        StartThreeNormalLevel();
        break;
    case 3:
        cout << "На сложном уровне вам нужно выбрать ответ из 5-х вариантов!\n";
        cout << "Нужно написать число, соответствующее варианту ответа!\n";
        incNumber = 1;
        StartThreeHardLevel();
        break;
    default:
        cout << "Возможно вы ошиблись, введите число соотвествующее "
                "уровню(число из колонки).\n";
        cout << "Попробуйте еще раз:";
        StartGameLevelThree();
        break;
    }
}

void StartThreeEasyLevel()
{
    int answer = 0;
    switch (incNumber) {
    case 1:
        incNumber++;
        cout << "\t\tsweater\n";                      //свитер
        cout << "1.свитер \t2.кофта \t3.водолазка\n"; // sweater - свитер \
                                                      // кофта \ водолазка
        answer = CheckInput();
        if (answer == 1) {
            easyLevelThree[0] = 1;
        } else {
            easyLevelThree[0] = 0;
        }
        StartThreeEasyLevel();
        break;
    case 2:
        incNumber++;
        cout << "\t\tsock\n";                      //носок
        cout << "1.ботинок \t2.носок \t3.тапок\n"; // sock - носок \ ботинок \
                                                   // тапок
        answer = CheckInput();
        if (answer == 2) {
            easyLevelThree[1] = 1;
        } else {
            easyLevelThree[1] = 0;
        }
        StartThreeEasyLevel();
        break;
    case 3:
        incNumber++;
        cout << "\t\ttie\n";                         //галстук
        cout << "1.галстук \t2.шляпа \t3.монокль\n"; // tie - галстук \ шляпа \
                                                     // монокль
        answer = CheckInput();
        if (answer == 1) {
            easyLevelThree[2] = 1;
        } else {
            easyLevelThree[2] = 0;
        }
        StartThreeEasyLevel();
        break;
    case 4:
        incNumber++;
        cout << "\t\twallet\n"; //бумажник
        cout << "1.чековая книжка \t2.скрепка \t3.бумажник\n"; // wallet -
                                                               // бумажник \
                                                               // чековая книжка
                                                               // \ скрепка
        answer = CheckInput();
        if (answer == 3) {
            easyLevelThree[3] = 1;
        } else {
            easyLevelThree[3] = 0;
        }
        StartThreeEasyLevel();
        break;
    case 5:
        incNumber++;
        cout << "\t\twheel\n";                    //колесо
        cout << "1.колесо \t2.руль \t3.педаль\n"; // wheel - колесо \ руль \
                                                  // педаль
        answer = CheckInput();
        if (answer == 1) {
            easyLevelThree[4] = 1;
        } else {
            easyLevelThree[4] = 0;
        }
        StartThreeEasyLevel();
        break;
    case 6:
        incNumber++;
        cout << "\t\tpen\n";                       //ручка
        cout << "1.ручка \t2.карандаш \t3.перо\n"; // pen – ручка \ карандаш \
                                                   // перо
        answer = CheckInput();
        if (answer == 1) {
            easyLevelThree[5] = 1;
        } else {
            easyLevelThree[5] = 0;
        }
        StartThreeEasyLevel();
        break;
    case 7:
        incNumber++;
        cout << "\t\tbook\n";                          //книга
        cout << "1.тетрадь \t2.подставка \t3.книга\n"; // book - книга \ тетрадь
                                                       // \ подставка
        answer = CheckInput();
        if (answer == 3) {
            easyLevelThree[6] = 1;
        } else {
            easyLevelThree[6] = 0;
        }
        StartThreeEasyLevel();
        break;
    case 8:
        incNumber++;
        cout << "\t\tpaper\n";                         //бумага
        cout << "1.бумага \t2.газета \t3.водолазка\n"; // paper - бумага \
                                                       // газета \ журнал
        answer = CheckInput();
        if (answer == 1) {
            easyLevelThree[7] = 1;
        } else {
            easyLevelThree[7] = 0;
        }
        StartThreeEasyLevel();
        break;
    case 9:
        incNumber++;
        cout << "\t\tsummer\n";                //лето
        cout << "1.лето \t2.осень \t3.зима\n"; // summer - лето \ осень \ зима
        answer = CheckInput();
        if (answer == 1) {
            easyLevelThree[8] = 1;
        } else {
            easyLevelThree[8] = 0;
        }
        StartThreeEasyLevel();
        break;
    case 10:
        cout << "\t\tjune\n";                    //июнь
        cout << "1.июнь \t2.июнь \t3.август \n"; // June - июнь \ июль \ август
        answer = CheckInput();
        if (answer == 2) {
            easyLevelThree[9] = 1;
        } else {
            easyLevelThree[9] = 0;
        }
        cout << "\n0 - значит неправильно / 1 - значит правильно!\n";
        cout << "╔═══╤══════════════════╤════════════════╤═══╗\n"
                "║ № │       Слово      │      Ответ     │ # ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 1 │      sweater     │     свитер     │ "
             << easyLevelThree[0]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 2 │       sock       │      носок     │ "
             << easyLevelThree[1]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 3 │       tie        │     галстук    │ "
             << easyLevelThree[2]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 4 │      wallet      │     бумажник   │ "
             << easyLevelThree[3]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 5 │      wheel       │     колесо     │ "
             << easyLevelThree[4]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 6 │       pen        │      ручка     │ "
             << easyLevelThree[5]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 7 │       book       │      книга     │ "
             << easyLevelThree[6]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 8 │       paper      │     бумага     │ "
             << easyLevelThree[7]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 9 │      summer      │      лето      │ "
             << easyLevelThree[8]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 10│       june       │      июнь      │ "
             << easyLevelThree[9]
             << " ║\n"
                "╚═══╧══════════════════╧════════════════╧═══╝\n";
        "╚═══╧═════════════════╧═══╝\n";
        PressAnyKey();
        break;
    }
}

void StartThreeNormalLevel()
{
    int answer = 0;
    switch (incNumber) {
    case 1:
        incNumber++;
        cout << "\t\tgarbage\n";                   //мусор
        cout << "1.таможня \t2.гараж \t3.мусор\n"; // garbage - мусор \ гараж \
                                                   // таможня
        answer = CheckInput();
        if (answer == 3) {
            normalLevelThree[0] = 1;
        } else {
            normalLevelThree[0] = 0;
        }
        StartThreeNormalLevel();
        break;
    case 2:
        incNumber++;
        cout << "\t\tguest\n";                       //гость
        cout << "1.товарищ \t2.гость \t3.коллега\n"; // guest - гость \ товарищ
                                                     // \ коллега
        answer = CheckInput();
        if (answer == 2) {
            normalLevelThree[1] = 1;
        } else {
            normalLevelThree[1] = 0;
        }
        StartThreeNormalLevel();
    case 3:
        incNumber++;
        cout << "\t\tlawyer\n";                      //адвокат
        cout << "1.адвокат \t2.повар \t3.учитель\n"; // lawyer - адвокат \ повар
                                                     // \ учитель
        answer = CheckInput();
        if (answer == 1) {
            normalLevelThree[2] = 1;
        } else {
            normalLevelThree[2] = 0;
        }
        StartThreeNormalLevel();
        break;
    case 4:
        incNumber++;
        cout << "\t\tsquirrel\n";                //белка
        cout << "1.жираф \t2.белка \t3.птица\n"; // squirrel - белка \ птица \
                                                 // жираф
        answer = CheckInput();
        if (answer == 2) {
            normalLevelThree[3] = 1;
        } else {
            normalLevelThree[3] = 0;
        }
        StartThreeNormalLevel();
        break;
    case 5:
        incNumber++;
        cout << "\t\tmonkey\n";                        //обезьяна
        cout << "1.обезьяна \t2.медведь \t3.лошадь\n"; // monkey - обезьяна \
                                                       // медведь \ лошадь
        answer = CheckInput();
        if (answer == 1) {
            normalLevelThree[4] = 1;
        } else {
            normalLevelThree[4] = 0;
        }
        StartThreeNormalLevel();
        break;
    case 6:
        incNumber++;
        cout << "\t\tstation\n";                          //станция
        cout << "1.парковка \t2.остановка \t3.станция\n"; // station - станция \
                                                          // остановка \ парковка
        answer = CheckInput();
        if (answer == 3) {
            normalLevelThree[5] = 1;
        } else {
            normalLevelThree[5] = 0;
        }
        StartThreeNormalLevel();
        break;
    case 7:
        incNumber++;
        cout << "\t\tmountain\n";               //гора
        cout << "1.гора \t2.холм \t3.низина\n"; // mountain - гора \ холм \
                                                // низина
        answer = CheckInput();
        if (answer == 1) {
            normalLevelThree[6] = 1;
        } else {
            normalLevelThree[6] = 0;
        }
        StartThreeNormalLevel();
        break;
    case 8:
        incNumber++;
        cout << "\t\tmirror\n";                    //зеркало
        cout << "1.диван \t2.зеркало \t3.ковер\n"; // mirror - зеркало \ ковер \
                                                   // диван
        answer = CheckInput();
        if (answer == 2) {
            normalLevelThree[7] = 1;
        } else {
            normalLevelThree[7] = 0;
        }
        StartThreeNormalLevel();
        break;
    case 9:
        incNumber++;
        cout << "\t\tporridge\n";              //каша
        cout << "1.каша \t2.гриб \t3.салат\n"; // porridge - каша \ гриб \ салат
        answer = CheckInput();
        if (answer == 1) {
            normalLevelThree[8] = 1;
        } else {
            normalLevelThree[8] = 0;
        }
        StartThreeNormalLevel();
        break;
    case 10:
        cout << "\t\tsurname\n";                    //фамилия
        cout << "1.имя \t2.фамилия \t3.отчество\n"; // surname - фамилия \ имя \
                                                    // отчество
        answer = CheckInput();
        if (answer == 2) {
            normalLevelThree[9] = 1;
        } else {
            normalLevelThree[9] = 0;
        }
        cout << "\n0 - значит неправильно / 1 - значит правильно!\n";
        cout << "╔═══╤══════════════════╤════════════════╤═══╗\n"
                "║ № │       Слово      │      Ответ     │ # ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 1 │      garbage     │      мусор     │ "
             << normalLevelThree[0]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 2 │       guest      │      гость     │ "
             << normalLevelThree[1]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 3 │      lawyer      │     адвокат    │ "
             << normalLevelThree[2]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 4 │     squirrel     │      белка     │ "
             << normalLevelThree[3]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 5 │      monkey      │     обезьяна   │ "
             << normalLevelThree[4]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 6 │      station     │     станция    │ "
             << normalLevelThree[5]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 7 │      mountain    │      гора      │ "
             << normalLevelThree[6]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 8 │      mirror      │     зеркало    │ "
             << normalLevelThree[7]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 9 │     porridge     │      каша      │ "
             << normalLevelThree[8]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 10│     surname      │     фамилия    │ "
             << normalLevelThree[9]
             << " ║\n"
                "╚═══╧══════════════════╧════════════════╧═══╝\n";
        "╚═══╧══════════════════╧════════════════╧═══╝\n";
        "╚═══╧═════════════════╧═══╝\n";
        PressAnyKey();
        break;
    }
}

void StartThreeHardLevel()
{
    int answer = 0;
    switch (incNumber) {
    case 1:
        incNumber++;
        cout << "\t\tyesterday\n";                  //вчера
        cout << "1.вчера \t2.сегодня \t3.завтра\n"; // yesterday - вчера
                                                    // сегодня завтра
        answer = CheckInput();
        if (answer == 1) {
            hardLevelThree[0] = 1;
        } else {
            hardLevelThree[0] = 0;
        }
        StartThreeHardLevel();
        break;
    case 2:
        incNumber++;
        cout << "\t\tbreakfast\n";               //завтрак
        cout << "1.завтрак \t2.обед \t3.ужин\n"; // breakfast - завтрак  обед
                                                 // ужин
        answer = CheckInput();
        if (answer == 1) {
            hardLevelThree[1] = 1;
        } else {
            hardLevelThree[1] = 0;
        }
        StartThreeHardLevel();
        break;
    case 3:
        incNumber++;
        cout << "\t\tfrying pan\n";                       //сковородка
        cout << "1.чайник \t2.сковородка \t3.кастрюля\n"; // frying pan -
                                                          // сковородка
                                                          // кастрюля чайник
        answer = CheckInput();
        if (answer == 2) {
            hardLevelThree[2] = 1;
        } else {
            hardLevelThree[2] = 0;
        }
        StartThreeHardLevel();
        break;
    case 4:
        incNumber++;
        cout << "\t\traspberry\n";                   //малина
        cout << "1.вишня \t2.малина \t3.клубника\n"; // raspberry - малина
                                                     // клубника вишня
        answer = CheckInput();
        if (answer == 2) {
            hardLevelThree[3] = 1;
        } else {
            hardLevelThree[3] = 0;
        }
        StartThreeHardLevel();
        break;
    case 5:
        incNumber++;
        cout << "\t\tsidewalk\n";                       //тротуар
        cout << "1.асфальт \t2.тротуар \t3.тропинка\n"; // sidewalk - тротуар
                                                        // асфальт тропинка
        answer = CheckInput();
        if (answer == 2) {
            hardLevelThree[4] = 1;
        } else {
            hardLevelThree[4] = 0;
        }
        StartThreeHardLevel();
        break;
    case 6:
        incNumber++;
        cout << "\t\tcrossroads\n"; //перекрёсток
        cout << "1.перекрёсток \t2.поворотник \t3.заезд\n"; // crossroads -
                                                            // перекрёсток
                                                            // поворотник заезд
        answer = CheckInput();
        if (answer == 1) {
            hardLevelThree[5] = 1;
        } else {
            hardLevelThree[5] = 0;
        }
        StartThreeHardLevel();
        break;
    case 7:
        incNumber++;
        cout << "\t\taccountant\n";                        //бухгалтер
        cout << "1.работник \t2.бухгалтер \t3.директор\n"; // accountant -
                                                           // бухгалтер
                                                           // работник директор
        answer = CheckInput();
        if (answer == 2) {
            hardLevelThree[6] = 1;
        } else {
            hardLevelThree[6] = 0;
        }
        StartThreeHardLevel();
        break;
    case 8:
        incNumber++;
        cout << "\t\tjournalist\n";                      //журналист
        cout << "1.журналист \t2.оператор \t3.диктор\n"; // journalist -
                                                         // журналист диктор
                                                         // оператор
        answer = CheckInput();
        if (answer == 1) {
            hardLevelThree[7] = 1;
        } else {
            hardLevelThree[7] = 0;
        }
        StartThreeHardLevel();
        break;
    case 9:
        incNumber++;
        cout << "\t\tcompetitor\n";                         //конкурент
        cout << "1.союзник \t2.соработник \t3.конкурент\n"; // competitor -
                                                            // конкурент
                                                            // союзник
                                                            // соработник
        answer = CheckInput();
        if (answer == 3) {
            hardLevelThree[8] = 1;
        } else {
            hardLevelThree[8] = 0;
        }
        StartThreeHardLevel();
        break;
    case 10:
        incNumber++;
        cout << "\t\tacquaintance\n";              //знакомый
        cout << "1.враг \t2.знакомый \t3.сосед\n"; // acquaintance - знакомый
                                                   // враг сосед
        answer = CheckInput();
        if (answer == 2) {
            hardLevelThree[9] = 1;
        } else {
            hardLevelThree[9] = 0;
        }
        cout << "\n0 - значит неправильно / 1 - значит правильно!\n";
        cout << "╔═══╤══════════════════╤════════════════╤═══╗\n"
                "║ № │       Слово      │      Ответ     │ # ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 1 │     yesterday    │      вчера     │ "
             << hardLevelThree[0]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 2 │     breakfast    │     завтрак    │ "
             << hardLevelThree[1]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 3 │    frying pan    │    сковородка  │ "
             << hardLevelThree[2]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 4 │     raspberry    │      малина    │ "
             << hardLevelThree[3]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 5 │      sidewalk    │     тротуар    │ "
             << hardLevelThree[4]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 6 │     crossroads   │   перекрёсток  │ "
             << hardLevelThree[5]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 7 │     accountant   │    бухгалтер   │ "
             << hardLevelThree[6]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 8 │    journalist    │    журналист   │ "
             << hardLevelThree[7]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 9 │    competitor    │    конкурент   │ "
             << hardLevelThree[8]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 10│    acquaintance  │     знакомый   │ "
             << hardLevelThree[9]
             << " ║\n"
                "╚═══╧══════════════════╧════════════════╧═══╝\n";
        "╚═══╧═════════════════╧═══╝\n";
        PressAnyKey();
        break;
    }
}

#endif // LEARNINGENGLISHWORDS_GAME_H
