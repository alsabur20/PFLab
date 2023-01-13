#include <iostream>
#include <cmath>
using namespace std;

main()
{
    string yearType;
    float holidays, countOfWeekends;
    float playingDays,playingInSofia,playing,weeksInSofia;
    int playingHolidays,tFinalDays;
    int weekends = 48;

    cout << "Enter Type of Year: ";
    cin >> yearType;
    cout << "Enter Count of Holidays in Year: ";
    cin >> holidays;
    cout << "Enter the Count of Weekends: ";
    cin >> countOfWeekends;

    playingHolidays = holidays *2/3;
    weeksInSofia = weekends - countOfWeekends;
    playingInSofia= weeksInSofia*3/4;
    playingDays = playingInSofia+playingHolidays+countOfWeekends;

    if (yearType == "leap")
    {
       tFinalDays = (playingDays*0.15) + playingDays;
    }
    else
    {
        tFinalDays =  playingDays;
    }

    cout << "Vladmir plays: " << tFinalDays << " days.";
   

}