#include <iostream>

using namespace std;

main()
{
    int size;
    cout << "Enter number of packages: ";
    cin >> size;
    int weights[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter weight of box number " << i + 1 << " : ";
        cin >> weights[i];
    }

    int smallest;
    int smallindex = 0;
    for (int i = 0; i < size-1; i++)
    {
        smallest = weights[i];
        smallindex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (weights[j] < smallest)
            {
                smallest = weights[j];
                smallindex = j;
            }
        }
        weights[smallindex] = weights[i];
        weights[i] = smallest;
    }
    cout << "[ ";
    for (int i = 0; i < size; i++)
    {
        cout << weights[i] << " ";
    }
    cout << "]";
}