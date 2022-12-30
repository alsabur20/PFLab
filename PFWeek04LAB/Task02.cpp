#include <iostream>
using namespace std;

void add(int number1, int number2);
void subtract(int number1, int number2);
void product(int number1, int number2);
void divide(int number1, int number2);

main()
{
   int number1;
   int number2;
   char operation;
  
   while(true)
   {
      cout << "Enter First Number: ";
      cin >> number1;
      cout << "Enter Second Number: ";
      cin >> number2;
      cout << "Enter operator(+,-,/,*): ";
      cin >> operation;
    
      if(operation == '+')
      {
         add(number1,number2);
      }
      if(operation == '-')
      {
         subtract(number1,number2);
      }
      if(operation == '/')
      {
         divide(number1,number2);
      }
      if(operation == '*')
      {
         product(number1,number2);
      }
    }
}

void add(int number1, int number2)
{
  int sum;
  sum = number1 + number2;
  cout << "Sum is :" << sum << endl;
}

void subtract(int number1, int number2)
{
  int subtract;
  subtract = number1 - number2;
  cout << "Subtraction is :" << subtract << endl;
}

void product(int number1, int number2)
{
  int product;
  product = number1 * number2;
  cout << "Product is :" << product << endl;
}

void divide(int number1, int number2)
{
  float division;
  division = number1 / number2;
  cout << "Division is :" << division << endl;
}

