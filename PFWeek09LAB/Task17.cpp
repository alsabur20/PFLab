#include <iostream>
using namespace std;

main()
{
    int arrSize = 4;
    int amount;

    float array[arrSize] = {2, 100, 0, 0};
    /*
    cout<<"Enter quarters: ";
    cin>>array[0];
    cout<<"Enter dimes: ";
    cin>>array[1];
    cout<<"Enter nickels: ";
    cin>>array[2];
    cout<<"Enter pennies: ";
    cin>>array[3];
    */
    cout << "Enter Total Due Amount: ";
    cin >> amount;

    float sum = 0;
    for (int idx = 0; idx < arrSize; idx++)
    {
        sum = sum + array[idx];
    }

    if (sum <= amount)
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
}
