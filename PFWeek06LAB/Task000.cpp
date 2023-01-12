#include <iostream>
using namespace std;

main()
{
    float price;
    float amount;
    string day;
    string month;

    cout << "Enter Amount: ";
    cin >> price;
    cout << "Enter Day: ";
    cin >> day;
    cout << "Enter Month: ";
    cin >> month;

    if (day == "Sunday" && (month == "March" || month == "October" || month == "August"))
    {
        amount = price * 0.9;
    }
    else if (day == "Monday" && (month == "November" || month == "December"))
    {
        amount = price * 0.95;
    }
    else
    {
        amount = price;
    }

    cout << "Your Payable Amount is " << amount;
}