#include <iostream>
using namespace std;

main()
{
    int arraySize;
    int number;

    cout << "Enter Array Size: ";
    cin >> arraySize;

    float array[arraySize];

    for (int index = 0; index < arraySize; index++)
    {
        cout << "Enter number: ";
        cin >> array[index];
    }

    float smallest = array[0];

    for (int index = 0; index < arraySize; index++)
    {
        if (array[index] < smallest)
        {
            smallest = array[index];
        }
    }
    cout << smallest;
}