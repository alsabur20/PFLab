#include <iostream>
#include <cmath>
using namespace std;


main()
{
  float num1,num2,total,squareroot,power,cuberoot,roundup,rounddown;
  
  cout << "Enter Number1: ";
  cin >> num1;
  cout << "Enter Number2: ";
  cin >> num2;

  total = max(num1,num2);
  cout << total << " is greater" << endl;

  total = min(num1,num2);
  cout << total << " is minimun" << endl;

  squareroot = sqrt(num1);
  cout << "Square root is: " << squareroot;

  power = pow(num1,num2);
  cout << power << endl;

  cuberoot = cbrt(num1);
  cout << "Cuberoot is: " <<cuberoot << endl;

  roundup = ceil(num1);
  cout << "Ceiling is: " <<roundup << endl;
  
  rounddown = floor(num1);
  cout << "Floor is: " << rounddown << endl;
}