#include<iostream>
using namespace std;

string isEvenish(int number);

main()
{
 int number;
 string test;
 cout << "Enter 5-digit number: ";
 cin >> number;

 test = isEvenish(number);

 if(test == "Evenish")
 {
  cout << endl;
  cout << "Evenish"; 
 }
 if(test == "Oddish")
 {
  cout << endl;
  cout << "Oddish"; 
 }


}
string isEvenish(int number)
{
 int d1,d2,d3,d4,d5,sum,even;
 
 d1 = number%10;
 d2 = number/10%10;
 d3 = number/100%10;
 d4 = number/1000%10;
 d5 = number/10000%10;

 sum = d1+d2+d3+d4+d5;
 even = sum%2;
 
 if(even == 0)
 {
  return "Evenish";
 }
 if(even == 1)
 {
  return "Oddish";
 }
 return 0;
}