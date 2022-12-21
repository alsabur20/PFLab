#include <iostream>
using namespace std;

main()
{
float current;
float charge;
int time;

cout<<"Enter Charge(Q): ";
cin>>charge;
cout<<"Enter Time(t): ";
cin>>time;

current=charge/time;

cout<< endl;

cout<<"Current(I) is ";
cout<< current;
}