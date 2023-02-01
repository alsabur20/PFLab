#include<iostream>
using namespace std;

main()
{
    int arrSize1=2;
    int arrSize2;

    int arr1[arrSize1];
    
    cout<<"Enter 1st Element of 1st Array; ";
    cin>>arr1[0];
    cout<<"Enter 2nd Element of 1st Array; ";
    cin>>arr1[1];
    cout<<"Enter size of 2nd Array: ";
    cin>>arrSize2;

    int arr2[arrSize2];
    for(int idx=0;idx<arrSize2;idx++)
    {
        cout<<"Enter Element "<<idx<<" of 2nd Array: ";
        cin>>arr2[idx];
    }
    cout<<endl<<arr1[0]<<", ";
    for(int index=0;index<arrSize2;index++)
    {
        cout<<arr2[index]<<", ";
    }
    cout<<arr1[1];
}