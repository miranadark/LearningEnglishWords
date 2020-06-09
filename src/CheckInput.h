#ifndef LEARNINGENGLISHWORDS_CHECKINPUT_H
#define LEARNINGENGLISHWORDS_CHECKINPUT_H

#include <iostream>

using namespace std;

int CheckInput()
{
    int Number = 0;
    string getLevelNumber;
    cin >> getLevelNumber;
    Number = atoi(getLevelNumber.c_str());
    return Number;
}

#endif // LEARNINGENGLISHWORDS_CHECKINPUT_H
