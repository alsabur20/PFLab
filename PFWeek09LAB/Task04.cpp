#include <iostream>
using namespace std;

main()
{
    int arraySize;

    cout << "Enter Array Size: ";
    cin >> arraySize;

    float array[arraySize];

    for (int index = 0; index < arraySize; index++)
    {
        cout << "Enter number: ";
        cin >> array[index];
    }
    
    for (int index = arraySize - 1; index >= 0; index--)
    {
        cout << array[index] << " ";
    }
}