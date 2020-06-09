#ifndef LEARNINGENGLISHWORDS_GAME_H
#define LEARNINGENGLISHWORDS_GAME_H

#include "CheckInput.h"
#include "GameMenu.h"
#include <conio.h>
#include <iostream>

using namespace std;
int incNumber = 0;
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
string qEasyGameThree[] = {"\t\tsweater\n1.свитер \t2.кофта \t3.водолазка",
							"\t\tsock\n1.ботинок \t2.носок \t3.тапок\n",
							"\t\ttie\n1.галстук \t2.шляпа \t3.монокль\n",
							"\t\twallet\n1.чековая книжка \t2.скрепка \t3.бумажник\n",
							"\t\twheel\n1.колесо \t2.руль \t3.педаль\n",
							"\t\tpen\n1.ручка \t2.карандаш \t3.перо\n",
							"\t\tbook\n1.тетрадь \t2.подставка \t3.книга\n",
							"\t\tpaper\n1.бумага \t2.газета \t3.водолазка\n",
							"\t\tsummer\n1.лето \t2.осень \t3.зима\n",
							"\t\tjune\n1.июнь \t2.июль \t3.август \n"};
int aEasyGameThree[] = {1,2,1,3,1,1,3,1,1,1};
string qNormalGameThree[] = {"\t\tgarbage\n1.таможня \t2.гараж \t3.мусор\n",
							"\t\tguest\n1.товарищ \t2.гость \t3.коллега\n",
							"\t\tlawyer\n1.адвокат \t2.повар \t3.учитель\n",
							"\t\tsquirrel\n1.жираф \t2.белка \t3.птица\n",
							"\t\tmonkey\n1.обезьяна \t2.медведь \t3.лошадь\n",
							"\t\tstation\n1.парковка \t2.остановка \t3.станция\n",
							"\t\tmountain\n1.гора \t2.холм \t3.низина\n",
							"\t\tmirror\n1.диван \t2.зеркало \t3.ковер\n",
							"\t\tporridge\n1.каша \t2.гриб \t3.салат\n",
							"\t\tsurname\n1.имя \t2.фамилия \t3.отчество\n"};
int aNormalGameThree[] = {3,2,1,2,1,3,1,2,1,2};
string qHardGameThree[] = {"\t\tyesterday\n1.вчера \t2.сегодня \t3.завтра\n",
							"\t\tbreakfast\n1.завтрак \t2.обед \t3.ужин\n",
							"\t\tfrying pan\n1.чайник \t2.сковородка \t3.кастрюля\n",
							"\t\traspberry\n1.вишня \t2.малина \t3.клубника\n",
							"\t\tsidewalk\n1.асфальт \t2.тротуар \t3.тропинка\n",
							"\t\tcrossroads\n1.перекрёсток \t2.поворотник \t3.заезд\n",
							"\t\taccountant\n1.работник \t2.бухгалтер \t3.директор\n",
							"\t\tjournalist\n1.журналист \t2.оператор \t3.диктор\n",
							"\t\tcompetitor\n1.союзник \t2.соработник \t3.конкурент\n",
							"\t\tacquaintance\n1.враг \t2.знакомый \t3.сосед\n"};
int aHardGameThree[] = {1,1,2,2,2,1,2,1,3,2};

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
int CheckAnswerGameThree(int answer, int rightanswer, int i)
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
    return *YourAnswers;
}

int QuestionFuncGameThree(int *allanswers,string *allquestions)
{
    int i;
    int answer = 0;
    int rightanswer = 0;
    string question = "";
    for (i = 0;i < 10;i++){
        question = allquestions[i];
        cout << question + "\n";
        rightanswer = allanswers[i];
        answer = CheckInput();
        CheckAnswerGameThree(answer,rightanswer,i);
    }
    return *YourAnswers;
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
   		QuestionFuncGameThree(aEasyGameThree, qEasyGameThree);
        cout << "\n0 - значит неправильно / 1 - значит правильно!\n";
        cout << "╔═══╤══════════════════╤════════════════╤═══╗\n"
                "║ № │       Слово      │      Ответ     │ # ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 1 │      sweater     │     свитер     │ "
             << YourAnswers[0]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 2 │       sock       │      носок     │ "
             << YourAnswers[1]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 3 │       tie        │     галстук    │ "
             << YourAnswers[2]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 4 │      wallet      │     бумажник   │ "
             << YourAnswers[3]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 5 │      wheel       │     колесо     │ "
             << YourAnswers[4]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 6 │       pen        │      ручка     │ "
             << YourAnswers[5]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 7 │       book       │      книга     │ "
             << YourAnswers[6]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 8 │       paper      │     бумага     │ "
             << YourAnswers[7]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 9 │      summer      │      лето      │ "
             << YourAnswers[8]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 10│       june       │      июнь      │ "
             << YourAnswers[9]
             << " ║\n"
                "╚═══╧══════════════════╧════════════════╧═══╝\n";
        "╚═══╧═════════════════╧═══╝\n";
        PressAnyKey();
}

void StartThreeNormalLevel()
{
    	QuestionFuncGameThree(aNormalGameThree, qNormalGameThree);
        cout << "\n0 - значит неправильно / 1 - значит правильно!\n";
        cout << "╔═══╤══════════════════╤════════════════╤═══╗\n"
                "║ № │       Слово      │      Ответ     │ # ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 1 │      garbage     │      мусор     │ "
             << YourAnswers[0]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 2 │       guest      │      гость     │ "
             << YourAnswers[1]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 3 │      lawyer      │     адвокат    │ "
             << YourAnswers[2]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 4 │     squirrel     │      белка     │ "
             << YourAnswers[3]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 5 │      monkey      │     обезьяна   │ "
             << YourAnswers[4]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 6 │      station     │     станция    │ "
             << YourAnswers[5]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 7 │      mountain    │      гора      │ "
             << YourAnswers[6]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 8 │      mirror      │     зеркало    │ "
             << YourAnswers[7]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 9 │     porridge     │      каша      │ "
             << YourAnswers[8]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 10│     surname      │     фамилия    │ "
             << YourAnswers[9]
             << " ║\n"
                "╚═══╧══════════════════╧════════════════╧═══╝\n";
        "╚═══╧══════════════════╧════════════════╧═══╝\n";
        "╚═══╧═════════════════╧═══╝\n";
        PressAnyKey();
}

void StartThreeHardLevel()
{
    QuestionFuncGameThree(aHardGameThree, qHardGameThree);
        cout << "\n0 - значит неправильно / 1 - значит правильно!\n";
        cout << "╔═══╤══════════════════╤════════════════╤═══╗\n"
                "║ № │       Слово      │      Ответ     │ # ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 1 │     yesterday    │      вчера     │ "
             << YourAnswers[0]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 2 │     breakfast    │     завтрак    │ "
             << YourAnswers[1]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 3 │    frying pan    │    сковородка  │ "
             << YourAnswers[2]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 4 │     raspberry    │      малина    │ "
             << YourAnswers[3]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 5 │      sidewalk    │     тротуар    │ "
             << YourAnswers[4]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 6 │     crossroads   │   перекрёсток  │ "
             << YourAnswers[5]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 7 │     accountant   │    бухгалтер   │ "
             << YourAnswers[6]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 8 │    journalist    │    журналист   │ "
             << YourAnswers[7]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 9 │    competitor    │    конкурент   │ "
             << YourAnswers[8]
             << " ║\n"
                "╟───┼──────────────────┼────────────────┼───╢\n"
                "║ 10│    acquaintance  │     знакомый   │ "
             << YourAnswers[9]
             << " ║\n"
                "╚═══╧══════════════════╧════════════════╧═══╝\n";
        "╚═══╧═════════════════╧═══╝\n";
        PressAnyKey();
}

#endif // LEARNINGENGLISHWORDS_GAME_H
