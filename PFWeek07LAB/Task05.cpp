#include <iostream>
using namespace std;

void digitSum(int number);

main()
{
    int number;
    cout << "Enter Number: ";
    cin >> number;

    digitSum(number);
}

void digitSum(int number)
{
    int result = 0,sum=0;
    while (number != 0)
    {
        result=number%10;
        sum=sum+result;
        number=number/10;
    }
    cout << sum;
}
