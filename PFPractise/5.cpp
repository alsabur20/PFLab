#include <iostream>
using namespace std;
void header();
void value1(int matric1, int inter1, int ecat1,float aggregate1);
void value2(int matric2, int inter2, int ecat2,float aggregate2);
void compareaggregate( string student1,int ecat1,string student2,int ecat2);
main()
{
int choice;
int key;
string student1;
int matric1;
int inter1;
int ecat1;
float aggregate1;
int permatric1;
int perinter1;
int perecat1;
int rollnumber1;
string student2;
int matric2;
int inter2;
int ecat2;
float aggregate2;
int permatric2;
int perinter2;
int perecat2;
int rollnumber2;
int choice;

 while (true)
 { 
   header();
   cout <<"enter choice";
   cin >>choice;
   
   if (choice==1)
   { 
    system("cls"); 
    cout<< "your choice";
    cout <<"enter student1: "<<endl;
    cin >> student1;
    cout <<" enter matric1: "<< endl;
   cin >> matric1;
   cout <<"enter inter1:"<< endl;
   cin >> inter1;
   cout << " enter ecat1:"<< endl;
   cin >> ecat1;
   cout << "press any key to continue:"<< endl;
   cin >> key;
   }
    if (choice==2)
   { 
   system("cls");
   cout<< " you choose:2 "<<endl;
   value1(matric1,  inter1,  ecat1, aggregate1);
   cout << "press any key to continue"<< endl;
   cin >> key;
   }
   if (choice==3)
   {
   system("cls"); 
   cout <<"enter student1"<<endl;
   cin >> student2;
   cout <<" enter matric2"<< endl;
   cin >> matric2;
   cout <<"enter inter2"<< endl;
   cin >> inter2;
   cout << " enter ecat2"<< endl;
   cin >> ecat2;
  cout << "press any key to continue"<< endl;
  cin >> key;
    }
   if (choice==4)
    { 
  
    system("cls");
   value2( matric2,  inter2,  ecat2, aggregate2);
   cout<< " you choose :4"<<endl;
    cout << "press any key to continue"<< endl;
   cin >> key;
    }

   if (choice==5)
   {
   system("cls"); 
   cout<<" you choose:5"<<endl;
   compareaggregate(  student1,ecat1, student2, ecat2);
    cout << "press any key to continue"<< endl;
    cin >> key;
 
   }
  
 }
}

void header()
{

cout << "****************************"<< endl;
cout << "*                          *"<< endl;
cout << "*  UET ADMISSION MANAGEMENT*"<< endl;
cout << "*      SYSTEM              *"<< endl;
cout << "*                          *"<< endl;
cout << "****************************"<< endl;

cout << "welcome to uet admission management system"<< endl;
 
cout<< "press1 to enter details of student1"<< endl;
cout<< "press2 to enter aggregate of student1"<< endl;
cout<< "press3 to enter details of student2"<< endl;
cout<< "press4 to enter aggregate of student1"<< endl;
cout<< "press5 to display the student with rollnumber 1"<< endl;

}

void value1(int matric1, int inter1, int ecat1,float aggregate1)
{
aggregate1=0.3*(matric1/1100*100)+0.3*(inter1/550*100)+0.4*(ecat1/400*100);
cout <<"value1"<< endl;
}
void value2(int matric2, int inter2, int ecat2,float aggregate2)
{
aggregate2=0.3*(matric2/1100*100)+0.3*(inter2/550*100)+0.4*(ecat2/400*100);
cout <<"value2"<< endl;
}
void compareaggregate( string student1,int ecat1,string student2,int ecat2)
{
 if (ecat2>ecat1)
{
cout << "Roll no 01 is " << student2<< endl;

}
}

