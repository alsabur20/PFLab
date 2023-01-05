#include<iostream>
#include<cmath>
using namespace std;


main()

{
 float vPool,rateP1,rateP2;
 float hours,finalV,perPoolFilled,perVP1,perVP2,vP1,vP2,totalVolumeFilled,overflownVolume;

 cout << "Enter Volume of Pool: ";
 cin >> vPool;
 cout << "Enter Rate of flow of Pipe 1: ";
 cin >> rateP1;
 cout << "Enter Rate of flow of Pipe 2: ";
 cin >> rateP2;
 cout << "Enter hours for which worker was absent: ";
 cin >> hours;


 vP1 = rateP1 * hours;
 vP2 = rateP2 * hours;
 totalVolumeFilled = vP1 + vP2;
 perVP1 = (vP1 / totalVolumeFilled) * 100;
 perVP2 = (vP2 / totalVolumeFilled) * 100; 
 perPoolFilled = (totalVolumeFilled / vPool) * 100;
 overflownVolume =totalVolumeFilled - vPool;
 if(perPoolFilled > 100)
 {
  cout << endl;
  cout << "For " << hours << " hours the pool overflows with " << overflownVolume << " liters.";
 }
 if(perPoolFilled < 100)
 {
  cout << endl;
  cout << "The pool is "<< floor(perPoolFilled) << "% full. Pipe 1: " << floor(perVP1) << "% Pipe 2: " << floor(perVP2) << "%";
 }
}



  
