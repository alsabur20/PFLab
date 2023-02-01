#include<iostream>
using namespace std;

main()
{
    int arrSize;
    cout<<"Enter number of resitors: ";
    cin>>arrSize;

    float array[arrSize];
    for(int index=0;index<arrSize;index++)
    {
        cout<<"Enter resistane of resistor number "<<index+1<<" : ";
        cin>>array[index];
    }
    float tResistance=0;
    for(int idx=0;idx<arrSize;idx++)
    {
        tResistance=tResistance+array[idx];
    }
    cout<<"Total Resistance: "<<tResistance<<" ohms";
}