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
  if(day != "sunday")
  {
    cout << "Payable amount is " << amount << endl;
  }
}