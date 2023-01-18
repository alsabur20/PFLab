#include <iostream>
using namespace std;

int calculateGCD(int number1, int number2);
int calculateLCM(int number1, int number2, int gcd);

main()
{
    int number1, number2;
    cout << "Enter Number 1: ";
    cin >> number1;
    cout << "Enter Number 2: ";
    cin >> number2;

    int gcd = calculateGCD(number1, number2);
    int lcm = calculateLCM(number1, number2, gcd);
    cout << lcm;
}

int calculateGCD(int number1, int number2)
{
    int smaller;
    int gcd;
    if (number1 < number2)
    {
        smaller = number1;
    }
    else
    {
        smaller = number2;
    }
    for (int counter = 1; counter <= smaller; counter++)
    {
        if ((number1 % counter) == 0 && (number2 % counter) == 0)
        {
            gcd = counter;
        }
    }

    return gcd;
}

int calculateLCM(int number1, int number2, int gcd)
{
    int lcm = (number1 * number2) / gcd;
    return lcm;
}
