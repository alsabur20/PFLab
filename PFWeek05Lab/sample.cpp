#include<iostream>
using namespace std;

string digitOne(int digit1);
string digitTwo(int digit2);

main()
{
 int numberInput,digit1,digit2;
 string first,second;

 cout << "Enter number: ";
 cin >> numberInput;
 
  digit1 = numberInput / 10;
  digit2 = numberInput % 10;



  first = digitOne(digit1);
  second = digitTwo(digit2);
 
  cout << first << second;
 
}

string digitOne(int digit1)
{
 if(digit1 == 2)
 { 
  return "Twenty ";
 }
 if(digit1 == 3)
 { 
  return "Thirty ";
 }
 if(digit1 == 4)
 { 
  return "Fourty ";
 }
 if(digit1 == 5)
 { 
  return "Fifty ";
 }
 if(digit1 == 6)
 { 
  return "Sixty ";
 }
 if(digit1 == 7)
 { 
  return "Seventy ";
 }
 if(digit1 == 8)
 { 
  return "Eighty ";
 }
 if(digit1 == 9)
 { 
  return "Ninety ";
 }

}
string digitTwo(int digit2)
{
  if(digit2 == 0)
  {
   return "";
  }
  if(digit2 == 1)
  {
   return "One";
  }
  if(digit2 == 2)
  {
   return "Two";
  }
  if(digit2 == 3)
  {
   return "Three";
  }
  if(digit2 == 4)
  {
   return "Four";
  }
  if(digit2 == 5)
  {
   return "Five";
  }
  if(digit2 == 6)
  {
   return "Six";
  }
  if(digit2 == 7)
  {
   return "Seven";
  }
  if(digit2 == 8)
  {
   return "Eight";
  }
  if(digit2 == 9)
  {
   return "Nine";
  }
  return 0;
}