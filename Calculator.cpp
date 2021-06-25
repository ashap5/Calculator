#include <iostream>
#include <string>
#include "Calculator.h"

using namespace std;

void Print(size_t text)
{
    cout << text;
}

void StandartMode()
{
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
}
int main()
{
    //while (true)
    //{
      //  StandartMode();
    //}
}
