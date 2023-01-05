#include <iostream>
using namespace std;

int add(int number1,int number2);
float division(float number1,float number2);
int isGreater(int number3, int number4);

main()
{
  float number1,number2,total;
  int number3,number4,greater;

  cout << "Enter number1: ";
  cin >> number3;
  cout << "Enter number2: ";
  cin >> number4;
  
  greater = isGreater(number3,number4);
  cout << "Greater number is : " << greater << endl;
}

int add(int number1,int number2)
{
 int sum = number1 + number2;
 return sum;
}

float division(float number1,float number2)
{
 float divide = number1 / number2;
 return divide;
}

int isGreater(int number3, int number4)
{
 if(number3 > number4)
 {
  return number3;
 }
 if(number4 > number3)
 {
  return number4;
 }
 
}