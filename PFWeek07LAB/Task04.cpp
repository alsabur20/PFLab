#include <iostream>
using namespace std;

void frequencyCounter(int number,int digit);

main()
{
    int number,digit;
    cout << "Enter Number: ";
    cin >> number;
    cout<<"Enter digit: ";
    cin >> digit;
    
    frequencyCounter(number,digit);
}

void frequencyCounter(int number,int digit)
{
   int result=0,counter=0;
   while(number!=0){
   result=number%10;
   if(result==digit)
   {
    counter++;
   }
   number=number/10;}
   cout << counter;
}
