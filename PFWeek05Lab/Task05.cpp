#include<iostream>
using namespace std;

main()
{
 int hours,mins,add15,finalMins,finalHours;
 
 cout << "Enter hours: ";
 cin >> hours;
 cout << "Enter mins: ";
 cin >> mins;
 cout << endl;

 add15 = mins+15;
 if(add15 > 59)
 {
  finalMins = add15-59;
  finalHours = hours+1;
  if(finalHours == 24)
  { 
   finalHours = 0;
  }
  cout << finalHours << ":" << finalMins;
 }
 if(add15 < 59)
 {
  finalMins = add15;
  finalHours = hours;
  if(finalHours == 24)
  { 
   finalHours = 0;
  }
  cout << finalHours << ":" << finalMins;
 }
 
}