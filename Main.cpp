#include <iostream>
#include <string>
#include "Main.h"
#include "Functions.h"

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
    if (FirstNumber > -99999999999999999)
    {}
    else
    {
        exit(65);
    }

    cout << "Second Number: ";
    cin >> SecondNumber;
    if (SecondNumber > -99999999999999999)
    {}

    else
    {
        cout << "Wrong Second Number";
        exit(66);
    }
    cout << "Operation: ";
    cin >> Operation;
    Print(Calculator(FirstNumber, SecondNumber, Operation));
}
int main()
{
    while (true)
    {
        StandartMode();
    }
}


//Error Codes:
//999:Error
//test