#include <iostream>
using namespace std;

main()
{
string name;
float matric;
float intermediate;
float ecat;
float aggregate;

float matricpercent;
float interpercent;
float ecatpercent;

float matricweightage;
float interweightage;
float ecatweightage;

cout<<"Enter Name: ";
cin>> name;

cout<<"Enter Matric marks: ";
cin>> matric;
matricpercent=matric/1100*100;
matricweightage=matricpercent*10/100;

cout<<"Enter Inter marks: ";
cin>> intermediate;
interpercent=intermediate/1100*100;
interweightage=interpercent*40/100;

cout<<"Enter ECAT marks: ";
cin>> ecat;
ecatpercent=ecat/400*100;
ecatweightage=ecatpercent*50/100;

aggregate=matricweightage+interweightage+ecatweightage;

cout<<endl;

cout<<"Your name is ";
cout<<name << endl;
cout<<"Your aggregate is ";
cout<<aggregate;
cout<<"%.";



}