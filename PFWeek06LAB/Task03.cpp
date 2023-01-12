#include <iostream>
using namespace std;

float totalIncome(string screenType, int rows, int columns);

main()
{
    string screenType;
    int rows, columns;
    float result;

    cout << "Enter Screen Type: ";
    cin >> screenType;
    cout << "Enter rows: ";
    cin >> rows;
    cout << "Enter columns: ";
    cin >> columns;

    result = totalIncome(screenType, rows, columns);

    cout << result;
}

float totalIncome(string screenType, int rows, int columns)
{
    float total;

    if (screenType == "Premiere")
    {
        total = 12.00 * rows * columns;
    }
    else if (screenType == "Normal")
    {
        total = 7.50 * rows * columns;
    }
    else
    {
        total = 5.00 * rows * columns;
    }

    return total;
}
