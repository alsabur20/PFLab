#include <iostream>
using namespace std;

float lowestPrice(int distance, string time);

main()
{
    int distance;
    string time;

    cout << "Enter distance: ";
    cin >> distance;
    cout << "Enter time: ";
    cin >> time;

    float price = lowestPrice(distance, time);

    cout << price;
}

float lowestPrice(int distance, string time)
{
    float price;
    if(distance < 20 && time == "day")
    {
        price = (distance * 0.79)+0.70 ;
    }
    else if (distance < 20 && time == "night")
    {
        price = (distance * 0.90)+0.70;
    }
    else if((distance > 20 && distance < 100) && (time == "day" || time == "night"))
    {
        price = distance * 0.09;
    }
    else if(distance >=100 && (time == "day" || time == "night"))
    {
        price = distance * 0.06;
    }
    return price;
}
