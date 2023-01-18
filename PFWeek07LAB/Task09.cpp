#include <iostream>
using namespace std;

float calculatePrice(float money, int year);

main()
{
    float inheritedMoney;
    int year;

    cout << "Enter Inherited Amount: ";
    cin >> inheritedMoney;
    cout << "Enter Year till he has to live: ";
    cin >> year;
    float moneySpent = calculatePrice(inheritedMoney, year);
    if (moneySpent < inheritedMoney)
    {
        cout << "Yes! He will live a carefree life and will have " << inheritedMoney - moneySpent << " dollars left.";
    }
    else
    {
        cout << "He will need " << moneySpent - inheritedMoney << " dollars to survive";
    }
}

float calculatePrice(float money, int year)
{
    float fResult = 0, result1 = 0, result2 = 0, age = 19, inter = 0, evenAmount = 0, oddAmount = 0;
    for (int counter = 1800; counter <= year; counter++)
    {
        if ((counter % 2) == 0)
        {
            result1 = evenAmount + 12000;
            evenAmount = result1;
        }
        else // if ((counter % 2) == 1)
        {
            result2 = oddAmount + (12000 + (50 * age));
            oddAmount = result2;
            age += 2;
        }
    }
    fResult = result1 + result2;
    return fResult;
}
