#ifndef LEARNINGENGLISHWORDS_TEST_FUNC_H
#define LEARNINGENGLISHWORDS_TEST_FUNC_H
#include "../src/Game.h"
#include <gtest/gtest.h>
#include <iostream>

using namespace std;

int testQuestionFunc(string *allanswers,string *allquestions,string *answers)
{
    int i;
    string answer = "";
    string rightanswer = "";
    string question = "";
    for (i = 0;i < 10;i++){
        question = allquestions[i];
        rightanswer = allanswers[i];
        answer = answers[i];
        CheckAnswer(answer,rightanswer,i);
    }
    return *YourAnswers;
}

int testQuestionFuncGameThree(int *allanswers,string *allquestions,int *answers)
{
    int i;
    int answer = 0;
    int rightanswer = 0;
    string question = "";
    for (i = 0;i < 10;i++){
        question = allquestions[i];
        rightanswer = allanswers[i];
        answer = answers[i];
        CheckAnswerGameThree(answer,rightanswer,i);
    }
    return *YourAnswers;
}

int testCheckInput(string input)
{
    int Number = 0;
    string getLevelNumber;
    getLevelNumber = input;
    Number = atoi(getLevelNumber.c_str());
    return Number;
}

#endif // LEARNINGENGLISHWORDS_TEST_FUNC_H
