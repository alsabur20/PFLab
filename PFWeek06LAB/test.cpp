#include <iostream>
using namespace std;

int isGreatest(int num1, int num2, int num3);
main()
{
    int num1, num2, num3;

    cout << "Enter Number 1: ";
    cin >> num1;
    cout << "Enter Number 2: ";
    cin >> num2;
    cout << "Enter Number 3: ";
    cin >> num3;

    int greatest = isGreatest(num1, num2, num3);
    cout << greatest;
}

int isGreatest(int num1, int num2, int num3)
{
    int greatest;
    if (num1 > num2 && num1 > num3)
    {
        greatest = num1;
    }
    else if (num2 > num1 && num2 > num3)
    {
        greatest = num2;
    }
    else if (num3 > num1 && num3 > num2)
    {
        greatest = num3;
    }
    else
    {
        greatest = num1;
    }
    return greatest;
}