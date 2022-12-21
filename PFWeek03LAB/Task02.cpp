#include <iostream>
using namespace std;

main()
{
float dollarInput;
float dollar;
float rupees;

dollar = 226.58;

cout<< "Enter amount(in dollars): ";
cin>> dollarInput;
cout<< endl;
cout<< "Your amount (in rupees) is: ";
rupees = dollarInput*dollar;
cout<< rupees;
}