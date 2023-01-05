#include<iostream>
#include<cmath>
using namespace std;

float calculateHeight(float degrees,float base);

main()
{
 float degrees,base,height;

 cout << "Enter angle of elevation: ";
 cin >> degrees;
  
 cout << "Enter Distance: ";
 cin >> base;

 height = calculateHeight(degrees,base);
 
 cout << "Height is: " << height;


}

float calculateHeight(float degrees,float base)
{
 float radian,radians,angle,height;

 radian = 57.2958;
 radians = degrees / radian;
 angle = tan(radians);

 height = angle * base;
 return height;
}