#include <iostream>
#include <string>
using namespace std;

void PrintString(string text)
{
    cout << text;
}

float Calculator(float firstNumber, float SecondNumber, string Operation)
{
    if (Operation == "+")
    {
        return firstNumber + SecondNumber;
    }
    else if (Operation == "-")
    {
        return firstNumber - SecondNumber;
    }
    else if (Operation == "*")
    {
        return firstNumber * SecondNumber;
    }
    else if (Operation == "/")
    {
        return firstNumber / SecondNumber;
    }
    else return 0;
}

int main()
{
    cout << Calculator(1, 5, "*");
    PrintString("\nCAUTE MORE");
    return 0;
}
