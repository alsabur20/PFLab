#include <iostream>

using namespace std;

main()
{
    int boxes;
    cout<<"Enter number of boxes: ";
    cin>>boxes;
    int size=boxes*3;
    int dimensions[size];

    for(int i=0;i<size;i++)
    {
        cout<<"Enter dimension: ";
        cin>>dimensions[i];
    }
    int sum=0;
    for(int i=0;i<size;i=i+3)
    {
        sum=sum+(dimensions[i]*dimensions[i+1]*dimensions[i+2]);
    }
    cout<<"Total volume: "<<sum;
}