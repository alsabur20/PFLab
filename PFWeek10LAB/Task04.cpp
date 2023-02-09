#include <iostream>

using namespace std;

int numbers[20];

bool isRepeatingCycle(int size, int cycleLength);

main()
{
    int size;
    cout << "Enter Array Length: ";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter Number: ";
        cin >> numbers[i];
    }
    int cycleLength;
    cout << "Enter cycle length: ";
    cin >> cycleLength;
    if (cycleLength > size)
    {
        cout << "True";
    }
    else
    {
        bool flag = isRepeatingCycle(size, cycleLength);
        if (flag == 1)
        {
            cout << "True";
        }
        else
        {
            cout << "False";
        }
    }
}

bool isRepeatingCycle(int size, int cycleLength)
{
    int counter = 0;
    bool flag = true;

    for (int i = 0; i < cycleLength; i++)
    {
        if (numbers[i] != numbers[cycleLength + i])
        {
            flag = false;
            break;
        }
        if (cycleLength + 1 >= size)
        {
            break;
        }
    }

    // if (counter == cycleLength)
    // {
    //     flag = true;
    // }
    // cout<<counter<<endl;
    return flag;
}
