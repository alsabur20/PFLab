#include <iostream>

using namespace std;

int saturdayMiles[20];
int checkProgress(int numberOfWeeks);

main()
{
    int numberOfWeeks;
    cout << "Enter number of weeks: ";
    cin >> numberOfWeeks;

    for (int i = 0; i < numberOfWeeks; i++)
    {
        cout << "Enter miles ran on Week " << i + 1 << " :";
        cin >> saturdayMiles[i];
    }
    int counter = checkProgress(numberOfWeeks);

    cout << "No of progress days: " << counter;
}

int checkProgress(int numberOfWeeks)
{
    int counter = 0;
    for (int i = 1; i < numberOfWeeks; i++)
    {
        if (saturdayMiles[i] > saturdayMiles[i - 1])
        {
            counter++;
        }
    }
    return counter;
}