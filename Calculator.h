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
bool Calculated= true;