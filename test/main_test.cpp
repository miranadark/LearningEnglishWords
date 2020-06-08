#include "../src/Game.h"
#include "test_func.h"
#include <gtest/gtest.h>
#include <iostream>

using namespace std;

TEST(CheckAnswersTest,CheckAnswer)
{
    // Given
    string answer1 = "apple";
    string rightanswer1 = "apple";
    string answer2 = "add";
    string rightanswer2 = "add";
    string answer3 = "orange";
    string rightanswer3 = "ыы";
    string answer4 = "orange";
    string rightanswer4 = "ssaasasw2";
    // When
    int result1 = CheckAnswer(answer1,rightanswer1,0);
    int result2 = CheckAnswer(answer2,rightanswer2,1);
    int result3 = CheckAnswer(answer3,rightanswer3,2);
    int result4 = CheckAnswer(answer4,rightanswer4,3);
    // Then
    ASSERT_EQ(result1,1);
    ASSERT_EQ(result2,1);
    ASSERT_EQ(result3,0);
    ASSERT_EQ(result4,0);
}
TEST(CheckAnswersTest,CheckAnswerGameThree)
{
    // Given
    int answer1 = 1;
    int rightanswer1 = 1;
    int answer2 = 2;
    int rightanswer2 = 2;
    int answer3 = 3;
    int rightanswer3 = 3;
    int answer4 = 2;
    int rightanswer4 = 1;
    int answer5 = 3;
    int rightanswer5 = 2;
    int answer6 = 1;
    int rightanswer6 = 123;
    // When
    int result1 = CheckAnswerGameThree(answer1, rightanswer1, 0);
    int result2 = CheckAnswerGameThree(answer2, rightanswer2, 1);
    int result3 = CheckAnswerGameThree(answer3, rightanswer3, 2);
    int result4 = CheckAnswerGameThree(answer4, rightanswer4, 3);
    int result5 = CheckAnswerGameThree(answer5, rightanswer5, 4);
    int result6 = CheckAnswerGameThree(answer6, rightanswer6, 5);
    // Then
    ASSERT_EQ(result1, 1);
    ASSERT_EQ(result2, 1);
    ASSERT_EQ(result3, 1);
    ASSERT_EQ(result4, 0);
    ASSERT_EQ(result5, 0);
    ASSERT_EQ(result6, 0);
}

TEST(QuestionTests,QuestionFuncTest)
{
    // Given
    int correct[] = {1,1,1,1,1,1,1,1,1,1};
    int wrong[] = {0,0,0,0,0,0,0,0,0,0};
    int complex[] = {1,0,1,1,0,0,0,0,1,0};
    string allquestions[] = {"driv","chi","frie","plea","sor","gue","nie","cous","work","doct"};
    string allanswers[] = {"er","ef","nd","se","ry","st","ce","in","er","or"};
    string answers1[] = {"er","ef","nd","se","ry","st","ce","in","er","or"};
    string answers2[] = {"ere","ee","wwwww","ses","rypt","stw","w","qe","e","orer"};
    string answers3[] = {"er","ewf","nd","se","reey","sqt","cee","irrn","er","orrrrrrr"};
    // When
    testQuestionFunc(allanswers, allquestions,answers1);
    // Then
    int i;
    for(i = 0;i < 10;i++)
        ASSERT_EQ(YourAnswers[i],correct[i]);
    // When
    testQuestionFunc(allanswers, allquestions,answers2);
    // Then
    for(i = 0;i < 10;i++)
        ASSERT_EQ(YourAnswers[i],wrong[i]);
    // When
    testQuestionFunc(allanswers, allquestions,answers3);
    // Then
    ASSERT_EQ(YourAnswers[0],complex[0]);
    ASSERT_EQ(YourAnswers[1],complex[1]);
    ASSERT_EQ(YourAnswers[2],complex[2]);
    ASSERT_EQ(YourAnswers[3],complex[3]);
    ASSERT_EQ(YourAnswers[4],complex[4]);
    ASSERT_EQ(YourAnswers[5],complex[5]);
    ASSERT_EQ(YourAnswers[6],complex[6]);
    ASSERT_EQ(YourAnswers[7],complex[7]);
    ASSERT_EQ(YourAnswers[8],complex[8]);
    ASSERT_EQ(YourAnswers[9],complex[9]);
}

TEST(QuestionTests,QuestionFuncGameThreeTest)
{
    // Given
    int correct[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int wrong[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int complex[] = {1, 0, 1, 1, 0, 0, 0, 0, 1, 0};
    string allquestions[] = {"q1", "q2", "q3", "q4", "q5", "q6", "q7", "q8", "q9", "q10"};
    int allanswers[] = {3, 2, 1, 2, 1, 3, 1, 2, 1, 2};
    int answers1[] = {3, 2, 1, 2, 1, 3, 1, 2, 1, 2};
    int answers2[] = {2, 1, 4, 3, 2, 1, 2, 3, 11, 3};
    int answers3[] = {3, 22, 1, 2, 3, 2, 4, 3, 1, 0};
    // When
    testQuestionFuncGameThree(allanswers, allquestions, answers1);
    // Then
    int i;
    for (i = 0; i < 10; i++)
        ASSERT_EQ(YourAnswers[i], correct[i]);
    // When
    testQuestionFuncGameThree(allanswers, allquestions,answers2);
    // Then
    for(i = 0;i < 10;i++)
        ASSERT_EQ(YourAnswers[i],wrong[i]);
    // When
    testQuestionFuncGameThree(allanswers, allquestions,answers3);
    // Then
    ASSERT_EQ(YourAnswers[0],complex[0]);
    ASSERT_EQ(YourAnswers[1],complex[1]);
    ASSERT_EQ(YourAnswers[2],complex[2]);
    ASSERT_EQ(YourAnswers[3],complex[3]);
    ASSERT_EQ(YourAnswers[4],complex[4]);
    ASSERT_EQ(YourAnswers[5],complex[5]);
    ASSERT_EQ(YourAnswers[6],complex[6]);
    ASSERT_EQ(YourAnswers[7],complex[7]);
    ASSERT_EQ(YourAnswers[8],complex[8]);
    ASSERT_EQ(YourAnswers[9],complex[9]);
}


int main(int argc, char** argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}