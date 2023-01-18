#include <iostream>
using namespace std;

void totalDigits(int number);

main()
{
    int number;
    cout << "Enter Number: ";
    cin >> number;
    totalDigits(number);
}

void totalDigits(int number)
{
    int counter = 0;
    while (number != 0)
    {
        number = number / 10;
        counter = counter + 1;
    }
    cout << counter;
}
