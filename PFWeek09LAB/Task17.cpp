#include <iostream>
using namespace std;

main()
{
    int arrSize = 4;
    float amount;

    float array[arrSize] = {30,40,20,5};
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

    float cents,dimes,nickels,pennies;
    cents=array[0]*25;
    dimes=array[1]*10;
    nickels=array[2]*5;
    pennies=array[3]*1;
    float sum = (cents+dimes+nickels+pennies)/100;
    

    if (sum >= amount)
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
}
