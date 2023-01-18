#include <iostream>
using namespace std;

float calculateMoney(int age, float toyPrice);
main()
{
    int age;
    float priceOfMachine;
    int toyPrice;
    float remainder;

    cout << "Enter AGE: ";
    cin >> age;
    cout << "Enter price of washing machine: ";
    cin >> priceOfMachine;
    cout << "Enter Unit price of each toy: ";
    cin >> toyPrice;

    float price = calculateMoney(age, toyPrice);
    if (price >= priceOfMachine)
    {
        remainder = price - priceOfMachine;
        cout << "Yes!" << endl
             << remainder;
    }
    else
    {
        remainder = priceOfMachine - price;
        cout << "No!" << endl
             << remainder;
    }
}
float calculateMoney(int age, float toyPrice)
{
    int noOfToys = 0;
    float moneySaved = 0;
    float moneyForBirthday = 10;

    for (int currentYear = 1; currentYear <= age; currentYear++)
    {
        if ((currentYear % 2)  == 0)
        {
            moneySaved += (moneyForBirthday - 1);
            moneyForBirthday += 10;
        }
        else
        {
            noOfToys++;
        }
    }
    moneySaved = moneySaved + (noOfToys * toyPrice);
    return moneySaved;
}