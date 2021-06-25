#include <iostream>
#include <string>
//#include "Calculator.h"
using namespace std;

float Calculator(float firstNumber, float SecondNumber, char Operation)
{
    switch (Operation)
    {
    default: return 0;
    case '+': return firstNumber + SecondNumber;
    case '-': return firstNumber - SecondNumber;
    case '*': return firstNumber * SecondNumber;
    case '/': return firstNumber / SecondNumber;
    }
}
bool Calculated = true;

void Print(size_t text)
{
    cout << text;
}

void StandartMode()
{
    Calculated = false;
    float FirstNumber;
    float SecondNumber;
    char Operation;
    cout << "\nFirst Number: ";
    cin >> FirstNumber;
    cout << "Second Number: ";
    cin >> SecondNumber;
    cout << "Operation: ";
    cin >> Operation;
    Print(Calculator(FirstNumber, SecondNumber, Operation));
    Calculated = true;
}
int main()
{
    while (true)
    {
        if (Calculated == true)
        {
            StandartMode();
        }
       
    }
}
