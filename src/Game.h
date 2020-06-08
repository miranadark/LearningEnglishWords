#ifndef LEARNINGENGLISHWORDS_GAME_H
#define LEARNINGENGLISHWORDS_GAME_H

#include "CheckInput.h"
#include "GameMenu.h"
#include <conio.h>
#include <iostream>

using namespace std;
int incNumber = 0;
int NumberQ = 0;
int YourAnswers[9];
string qEasyGameOne[] = {"driv","chi","frie","plea","sor","gue","nie","cous","work","doct"};
string aEasyGameOne[] = {"er","ef","nd","se","ry","st","ce","in","er","or"};
string qNormalGameOne[] = {"daugh","eleph","build","univers","saus","hospi","mount","bedr","chim","wardr"};
string aNormalGameOne[] = {"ter","ant","ing","ity","age","tal","ain","oom","ney","obe"};
string qHardGameOne[] = {"strawb","vegeta","waterm","pinea","handkerc","experi","advan","circumst","relation","develop"};
string aHardGameOne[] = {"erry","bles","elon","pple","hief","ence","tage","ance","ship","ment"};
string qEasyGameTwo[] = {"лампа-","обувь-","боль-","ветер-","наличные(деньги)-","скорость-","ненависть-","привычка-","слово-","серый-"};
string aEasyGameTwo[] = {"lamp","shoes","pain","wind","cash","speed","hate","habit","word","grey"};
string qNormalGameTwo[] = {"беспокоить-","глупый-","опасность-","выбор-","воздушный шар-","календарь-","ноутбук-","машина-","ножницы-","очки-"};
string aNormalGameTwo[] = {"disturb","stupid","danger","choice","balloon","calendar","laptop","machine","scissors","glasses"};
string qHardGameTwo[] = {"сосед-","коллега-","инженер-","микроволновка-","бутерброд-","овощи-","арбуз-","блокнот-","чемодан-","клавиатура-"};
string aHardGameTwo[] = {"neighbor","colleague","engineer","microwave","sandwich","vegetables","watermelon","notebook","suitcase","keyboard"};
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

int CheckAnswer(string answer, string rightanswer, int i)
{  
    if (answer == rightanswer) {
        YourAnswers[i] = 1;
        return 1;
    } else {
        YourAnswers[i] = 0;
        return 0;
    }
}

int QuestionFunc(string *allanswers,string *allquestions)
{
    int i;
    string answer = "";
    string rightanswer = "";
    string question = "";
    for (i = 0;i < 10;i++){
        question = allquestions[i];
        cout << question + "..." + "\n";
        rightanswer = allanswers[i];
        cin >> answer;
        CheckAnswer(answer,rightanswer,i);
    }
    return 1;
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
    QuestionFunc(aEasyGameOne,qEasyGameOne);

        cout << "\n0 - значит неправильно / 1 - значит правильно!\n";
        cout << "╔═══╤═════════════════╤═══╗\n"
                "║ № │      Слово      │ # ║\n"
                "╟───┼─────────────────┼───╢\n"
                "║ 1 │      driver     │ "
             << YourAnswers[0]
             << " ║\n"
                "╟───┼─────────────────┼───╢\n"
                "║ 2 │      chief      │ "
             << YourAnswers[1]
             << " ║\n"
                "╟───┼─────────────────┼───╢\n"
                "║ 3 │      friend     │ "
             << YourAnswers[2]
             << " ║\n"
                "╟───┼─────────────────┼───╢\n"
                "║ 4 │      please     │ "
             << YourAnswers[3]
             << " ║\n"
                "╟───┼─────────────────┼───╢\n"
                "║ 5 │      sorry      │ "
             << YourAnswers[4]
             << " ║\n"
                "╟───┼─────────────────┼───╢\n"
                "║ 6 │      guest      │ "
             << YourAnswers[5]
             << " ║\n"
                "╟───┼─────────────────┼───╢\n"
                "║ 7 │      niece      │ "
             << YourAnswers[6]
             << " ║\n"
                "╟───┼─────────────────┼───╢\n"
                "║ 8 │      cousin     │ "
             << YourAnswers[7]
             << " ║\n"
                "╟───┼─────────────────┼───╢\n"
                "║ 9 │      worker     │ "
             << YourAnswers[8]
             << " ║\n"
                "╟───┼─────────────────┼───╢\n"
                "║ 10│      doctor     │ "
             << YourAnswers[9]
             << " ║\n"
                "╚═══╧═════════════════╧═══╝\n";
        PressAnyKey();
}

void StartOneNormalLevel()
{
    QuestionFunc(aNormalGameOne,qNormalGameOne);

        cout << "\n0 - значит неправильно / 1 - значит правильно!\n";
        cout << "╔═══╤═════════════════╤═══╗\n"
                "║ № │      Слово      │ # ║\n"
                "╟───┼─────────────────┼───╢\n"
                "║ 1 │     daughter    │ "
             << YourAnswers[0]
             << " ║\n"
                "╟───┼─────────────────┼───╢\n"
                "║ 2 │     elephant    │ "
             << YourAnswers[1]
             << " ║\n"
                "╟───┼─────────────────┼───╢\n"
                "║ 3 │     building    │ "
             << YourAnswers[2]
             << " ║\n"
                "╟───┼─────────────────┼───╢\n"
                "║ 4 │    university   │ "
             << YourAnswers[3]
             << " ║\n"
                "╟───┼─────────────────┼───╢\n"
                "║ 5 │     sausage     │ "
             << YourAnswers[4]
             << " ║\n"
                "╟───┼─────────────────┼───╢\n"
                "║ 6 │     hospital    │ "
             << YourAnswers[5]
             << " ║\n"
                "╟───┼─────────────────┼───╢\n"
                "║ 7 │     mountain    │ "
             << YourAnswers[6]
             << " ║\n"
                "╟───┼─────────────────┼───╢\n"
                "║ 8 │     bedroom     │ "
             << YourAnswers[7]
             << " ║\n"
                "╟───┼─────────────────┼───╢\n"
                "║ 9 │     chimney     │ "
             << YourAnswers[8]
             << " ║\n"
                "╟───┼─────────────────┼───╢\n"
                "║ 10│     wardrobe    │ "
             << YourAnswers[9]
             << " ║\n"
                "╚═══╧═════════════════╧═══╝\n";
        PressAnyKey();
}

void StartOneHardLevel()
{
	QuestionFunc(aHardGameOne,qHardGameOne);
        cout << "\n0 - значит неправильно / 1 - значит правильно!\n";
        cout << "╔═══╤═════════════════╤═══╗\n"
                "║ № │      Слово      │ # ║\n"
                "╟───┼─────────────────┼───╢\n"
                "║ 1 │    strawberry   │ "
             << YourAnswers[0]
             << " ║\n"
                "╟───┼─────────────────┼───╢\n"
                "║ 2 │    vegetables   │ "
             << YourAnswers[1]
             << " ║\n"
                "╟───┼─────────────────┼───╢\n"
                "║ 3 │    watermelon   │ "
             << YourAnswers[2]
             << " ║\n"
                "╟───┼─────────────────┼───╢\n"
                "║ 4 │    pineapple    │ "
             << YourAnswers[3]
             << " ║\n"
                "╟───┼─────────────────┼───╢\n"
                "║ 5 │   handkerchief  │ "
             << YourAnswers[4]
             << " ║\n"
                "╟───┼─────────────────┼───╢\n"
                "║ 6 │    experience   │ "
             << YourAnswers[5]
             << " ║\n"
                "╟───┼─────────────────┼───╢\n"
                "║ 7 │    advantage    │ "
             << YourAnswers[6]
             << " ║\n"
                "╟───┼─────────────────┼───╢\n"
                "║ 8 │   circumstance  │ "
             << YourAnswers[7]
             << " ║\n"
                "╟───┼─────────────────┼───╢\n"
                "║ 9 │   relationship  │ "
             << YourAnswers[8]
             << " ║\n"
                "╟───┼─────────────────┼───╢\n"
                "║ 10│   development   │ "
             << YourAnswers[9]
             << " ║\n"
                "╚═══╧═════════════════╧═══╝\n";
        PressAnyKey();
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
        QuestionFunc(aEasyGameTwo,qEasyGameTwo);
        cout << "\n0 - значит неправильно / 1 - значит правильно!\n";
        cout << "╔═══╤══════════════════╤════════════════╤═══╗\n"
                "║ № │       Ответ      │      Слово     │ # ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 1 │       lamp       │      лампа     │ "
             << YourAnswers[0]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 2 │       shoes      │      обувь     │ "
             << YourAnswers[1]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 3 │       pain       │      боль      │ "
             << YourAnswers[2]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 4 │       wind       │      ветер     │ "
             << YourAnswers[3]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 5 │       cash       │    наличные    │ "
             << YourAnswers[4]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 6 │       speed      │    скорость    │ "
             << YourAnswers[5]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 7 │       hate       │    ненависть   │ "
             << YourAnswers[6]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 8 │       habit      │    привычка    │ "
             << YourAnswers[7]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 9 │       word       │      слово     │ "
             << YourAnswers[8]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 10│       grey       │      серый     │ "
             << YourAnswers[9]
             << " ║\n"
                "╚═══╧══════════════════╧════════════════╧═══╝\n";
        "╚═══╧═════════════════╧═══╝\n";
        PressAnyKey();
}

void StartTwoNormalLevel()
{
        QuestionFunc(aNormalGameTwo,qNormalGameTwo);
        cout << "\n0 - значит неправильно / 1 - значит правильно!\n";
        cout << "╔═══╤══════════════════╤════════════════╤═══╗\n"
                "║ № │       Ответ      │      Слово     │ # ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 1 │      disturb     │   беспокоить   │ "
             << YourAnswers[0]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 2 │      stupid      │     глупый     │ "
             << YourAnswers[1]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 3 │      danger      │    опасность   │ "
             << YourAnswers[2]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 4 │      choice      │      выбор     │ "
             << YourAnswers[3]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 5 │      balloon     │  воздушный шар │ "
             << YourAnswers[4]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 6 │      calendar    │    календарь   │ "
             << YourAnswers[5]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 7 │      laptop      │     ноутбук    │ "
             << YourAnswers[6]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 8 │      machine     │      машина    │ "
             << YourAnswers[7]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 9 │      scissors    │     ножницы    │ "
             << YourAnswers[8]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 10│      glasses     │      очки      │ "
             << YourAnswers[9]
             << " ║\n"
                "╚═══╧══════════════════╧════════════════╧═══╝\n";
        "╚═══╧══════════════════╧════════════════╧═══╝\n";
        "╚═══╧═════════════════╧═══╝\n";
         PressAnyKey();
}

void StartTwoHardLevel()
{
		QuestionFunc(aHardGameTwo,qHardGameTwo);
        cout << "\n0 - значит неправильно / 1 - значит правильно!\n";
        cout << "╔═══╤══════════════════╤════════════════╤═══╗\n"
                "║ № │       Ответ      │      Слово     │ # ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 1 │     neighbor     │      сосед     │ "
             << YourAnswers[0]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 2 │     colleague    │     коллега    │ "
             << YourAnswers[1]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 3 │     engineer     │     инженер    │ "
             << YourAnswers[2]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 4 │     microwave    │  микроволновка │ "
             << YourAnswers[3]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 5 │     sandwich     │    бутерброд   │ "
             << YourAnswers[4]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 6 │    vegetables    │      овощи     │ "
             << YourAnswers[5]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 7 │    watermelon    │      арбуз     │ "
             << YourAnswers[6]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 8 │     notebook     │     блокнот    │ "
             << YourAnswers[7]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 9 │     suitcase     │     чемодан    │ "
             << YourAnswers[8]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 10│     keyboard     │    клавиатура  │ "
             << YourAnswers[9]
             << " ║\n"
                "╚═══╧══════════════════╧════════════════╧═══╝\n";
        "╚═══╧══════════════════╧════════════════╧═══╝\n";
        "╚═══╧══════════════════╧════════════════╧═══╝\n";
        "╚═══╧═════════════════╧═══╝\n";
        PressAnyKey();
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
