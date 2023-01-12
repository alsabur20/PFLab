#include <iostream>
using namespace std;

string checkTitle(float age,char gender);

main()
{
    float age;
    char gender;

    cout << "Enter Age: ";
    cin >> age;
    cout << "Enter Gender (m/f): ";
    cin >> gender;

    string title = checkTitle(age, gender);

    cout << title << endl; 
}

string checkTitle(float age, char gender)
{
    string title;
    if(age < 16 && gender == 'm')
    {
        title = "Master";
    }
    else if(age >= 16 && gender == 'm')
    {
        title = "Mr.";
    }
    else if(age <16 && gender == 'f')
    {
        title = "Miss";
    }
    else if(age > 16 && gender == 'f')
    {
        title = "Mrs.";
    }
    return title;
}
