#include <iostream>
using namespace std;

void add(int number1, int number2);
void product(int number1, int number2);

main()
{
  int number1;
  int number2;
  cout << "Enter First Number: ";
  cin >> number1;
  cout << "Enter Second Number: ";
  cin >> number2;
  add(number1,number2);
  product(number1,number2);
}

void add(int number1, int number2)
{
  int sum;
  sum = number1 + number2;
  cout << "Sum is :" << sum << endl;
}

void product(int number1, int number2)
{
  int product;
  product = number1 * number2;
  cout << "Product is :" << product << endl;
}