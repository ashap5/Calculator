#include <iostream>
#include "Functions.h"
#include "Main.h"
using namespace std;

float Calculator(float firstNumber, float SecondNumber, char Operation)
{
    switch (Operation)
    {
    default:
        cout << "Wrong Operator";
        StandartMode();
    case '+': return firstNumber + SecondNumber;
    case '-': return firstNumber - SecondNumber;
    case '*': return firstNumber * SecondNumber;
    case '/': return firstNumber / SecondNumber;
    }
}