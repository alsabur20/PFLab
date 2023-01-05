#include<iostream>
using namespace std;

bool isSymmetrical(int number);

main()
{
 int number;
 bool isTrue;

 cout << "Enter 3-digits number: ";
 cin >> number;

 isTrue = isSymmetrical(number);
 
 if(isTrue == true)
 {
  cout << endl;
  cout << "Number is Symmetrical";
 }
 if(isTrue == false)
 {
  cout << endl;
  cout << "Number is not symmetrical";
 }
}

bool isSymmetrical(int number)
{
 int first,last;

 first = number/100;
 last = number%10;

 if(first == last)
 { 
  return true;
 }
 if(first != last)
 {
  return false;
 }
 return 0;
}
