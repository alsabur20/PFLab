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

    cout <<endl;
    cout << "Enter number for product: ";
    cin >> number;

    for (int index = arraySize-1; index >=0; index--)
    {
        cout << array[index] * number <<" ";
    }
}