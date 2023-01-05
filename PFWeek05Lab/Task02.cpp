#include<iostream>
#include<cmath>
using namespace std;

float positiveQuadraticFormula(float a,float b,float c);
float negativeQuadraticFormula(float a,float b, float c);

main()
{
 float a,b,c,x1,x2;

cout << "Enter value of a:"; 
cin >> a;
cout << "Enter value of b:";
cin >> b;
cout << "Enter value of c:";
cin >> c;
 
 x1 = positiveQuadraticFormula(a,b,c);
 x2 = negativeQuadraticFormula(a,b,c);

 cout << x1 << endl;
 cout << x2 << endl;

}
float positiveQuadraticFormula(float a,float b,float c)
{
 float bSquare,ac4,a2,discriminant,underrootAns,x1,x2;
 bSquare = pow(b,2);
 ac4 = a*c*4;
 a2 = 2*a;
 discriminant = bSquare - ac4;
 underrootAns = sqrt(discriminant);
  
 x1 = (-b+underrootAns)/a2;
 
 return x1;
}
float negativeQuadraticFormula(float a,float b, float c)
{
 float bSquare,ac4,a2,discriminant,underrootAns,x1,x2;
 bSquare = pow(b,2);
 ac4 = a*c*4;
 a2 = 2*a;
 discriminant = bSquare - ac4;
 underrootAns = sqrt(discriminant);
  
 x2 = (-b-underrootAns)/a2;

 return x2;
}