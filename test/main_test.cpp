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


int main(int argc, char** argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}