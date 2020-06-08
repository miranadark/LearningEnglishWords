#include "../src/Game.h"
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

int main(int argc, char** argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}