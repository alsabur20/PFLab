#include <iostream>
#include<cmath>
using namespace std;

main()
{
    string yearType;
    float holidays, countOfWeekends;
    float finalDays;
    float playingHolidays;

    cout << "Enter Type of Year: ";
    cin >> yearType;
    cout << "Enter Count of Holidays in Year: ";
    cin >> holidays;
    cout << "Enter the Count of Weekends: ";
    cin >> countOfWeekends;

    playingHolidays = holidays * 2 / 3;

    if (yearType == "leap")
    {
        finalDays = ((playingHolidays + 36) * 0.15) + (playingHolidays + 36);
    }
    else
    {
        finalDays = 36 + playingHolidays;
    }

    cout << "Vladmir plays: " << floor(finalDays) << " days.";
}