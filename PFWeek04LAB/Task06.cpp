#include <iostream>
using namespace std;

void calculateBill(string day, int amout);

main()
{
  string day;
  int amount;
  while(true)
  {
    cout << "Enter Day: ";
    cin >> day;
    cout << "Enter Amount: ";
    cin >> amount; 
    calculateBill(day, amount);
  }
}

void calculateBill(string day, int amount)
{
  if(day == "sunday")
  {
    cout << "Payable amount is " << 0.9*amount << endl;
  }
  if(day == "monday")
  {
    cout << "Payable amount is " <<0.95*amount << endl;
  }
 if(day == "tuesday")
  {
    cout << "Payable amount is " <<0.95*amount << endl;
  }
 if(day == "wednesday")
  {
    cout << "Payable amount is " <<0.95*amount << endl;
  }
 if(day == "thursday")
  {
    cout << "Payable amount is " <<0.95*amount << endl;
  }
 if(day == "friday")
  {
    cout << "Payable amount is " <<0.95*amount << endl;
  }
 if(day == "saturday")
  {
    cout << "Payable amount is " <<0.95*amount << endl;
  }
}