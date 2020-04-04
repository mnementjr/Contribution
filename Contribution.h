#pragma once

#include <string>

using namespace std;

class Contribution {
protected:
    static int commonInterest;
public:
    static void SetInterest(int commonInterest)
    {
        Contribution::commonInterest = commonInterest;
    }
    static int GetInterest()
    {
        return commonInterest;
    }

};

int Contribution::commonInterest = 5;
