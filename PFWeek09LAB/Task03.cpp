#include <iostream>
using namespace std;

main()
{
    int arraySize;
    int number;

    cout << "N: ";
    cin >> arraySize;

    float array[arraySize];
    bool isFound = false;

    for (int index = 0; index < arraySize; index++)
    {
        cout << "Enter number: ";
        cin >> array[index];
    }

    cout << "Enter test value: ";
    cin >> number;

    for (int index = 0; index < arraySize; index++)
    {
        if (number == array[index])
        {
            isFound = true;
            break;
        }
    }
    
    if (isFound == true)
    {
        cout << "Found";
    }
    else
    {
        cout << "Not Found";
    }
}