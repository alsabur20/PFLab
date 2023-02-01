#include <iostream>
using namespace std;

main()
{
    int arraySize;

    cout << "N: ";
    cin >> arraySize;
    float array[arraySize];

    float sum = 0;
    float avg = 0;
    for (int index = 0; index < arraySize; index++)
    {
        cout << "Enter number: ";
        cin >> array[index];
        sum = sum + array[index];
    }
    cout << sum << endl;
    avg = sum / arraySize;
    cout << avg;
}