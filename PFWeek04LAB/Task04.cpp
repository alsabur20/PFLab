#include <iostream>
using namespace std;

void isEven(int input);

main()
{
 int input;
 while(true)
 {
  cout << "Enter Number: ";
  cin >> input;
  isEven(input);
 }
}

void isEven(int input)
{
  if(input % 2== 0)
  {
    cout << "EVEN" << endl;
  }
  if(input % 2 != 0)
  {
    cout << "ODD" << endl;
  }
}