#include <iostream>
using namespace std;
void header();
void menu();

main()
{ 
int choice;
string key;
string student1;
float matric1;
float inter1;
float ecat1;
float aggregate1;
float permatric1;
float perinter1;
float perecat1;
int rollnumber1;
string student2;
float matric2;
float inter2;
float ecat2;
float aggregate2;
float permatric2;
float perinter2;
float perecat2;
int rollnumber2;


while(true)
{
 system("cls");
 header();
 menu();

cout <<"enter choice";
cin >>choice;

if (choice==1)
{
system("cls");
cout <<"enter student1"<<endl;
cin >> student1;
cout <<" enter matric1 "<< endl;
cin >> matric1;
cout <<"enter inter1"<< endl;
cin >> inter1;
cout << " enter ecat1"<< endl;
cin >> ecat1;
cout << "press any key to continue"<< endl;
cin >> key;
}
if (choice==2)
{
system("cls");
permatric1=(matric1/1100)*100;
perinter1=(inter1/550)*100;
perecat1= (ecat1/400)*100;
aggregate1=(permatric1*0.3)+(perinter1*0.3)+(perecat1*0.4);  

cout <<aggregate1<< endl;
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
permatric2=(matric2/1100)*100;
perinter2=(inter2/550)*100;
perecat2= (ecat2/400)*100;
aggregate2=(permatric2*0.3)+(perinter2*0.3)+(perecat2*0.4);
  
cout <<aggregate2<< endl;
cout << "press any key to continue"<< endl;
cin >> key;
}
if (choice==5)
{
   if (ecat1>ecat2)
   {
     system("cls");
     cout <<"student1  has rollnumber 1"<<endl;
     cout << "press any key to continue"<< endl;
     cin >> key;
    }
   if (ecat1<ecat2)
   {
    system("cls");
    cout <<"student2  has rollnumber 1"<<endl;
    cout << "press any key to continue"<< endl;
    cin >> key;
   }
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
}

void menu()
{

cout<< "press1 to enter details of student1"<< endl;
cout<< "press2 to enter aggregate of student1"<< endl;
cout<< "press3 to enter details of student2"<< endl;
cout<< "press4 to enter aggregate of student1"<< endl;
cout<< "press5 to display rollnumber of student"<< endl;
}
