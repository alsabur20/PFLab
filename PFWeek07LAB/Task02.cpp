#include <iostream>
using namespace std;

void printSeries(int number);

main()
{
    int number;
    cout << "Enter Number: ";
    cin >> number;
    printSeries(number);
}

void printSeries(int number)
{
    int previous = 0, current = 1, next = 0;
    cout << previous << ", " << current;
    for (int count = 1; count <= number - 2; count++)
    {
        next = previous + current;
        cout << ", " << next;
        previous = current;
        current = next;
    }
}
