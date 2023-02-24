#include <iostream>
#include <windows.h>
#include <conio.h>
#include <fstream>

using namespace std;

string names[100];
int ages[100];
float matricMarkss[100];
float interMarkss[100];
float ecatMarkss[100];
int studentCount = 0;

void inputData();
void storeData();

main()
{
    int choice;
    while (choice != 0)
    {
        cout << "01. Enter Student Data" << endl;
        cout << "00. Exit" << endl;
        cout << "Enter Choice: ";
        cin >> choice;
        if (choice == 1)
        {
            inputData();
        }
    }
    storeData();
}

void inputData()
{
    system("cls");
    string name;
    int age;
    float matricMarks;
    float interMarks;
    float ecatMarks;
    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter Age: ";
    cin >> age;
    cout << "Enter Matric Marks: ";
    cin >> matricMarks;
    cout << "Enter Inter Marks: ";
    cin >> interMarks;
    cout << "Enter Ecat Marks: ";
    cin >> ecatMarks;
    names[studentCount] = name;
    ages[studentCount] = age;
    matricMarkss[studentCount] = matricMarks;
    interMarkss[studentCount] = interMarks;
    ecatMarkss[studentCount] = ecatMarks;
    studentCount++;
}

void storeData()
{
    fstream file;
    file.open("task10.txt", ios::app);
    for (int i = 0; i < studentCount; i++)
    {
        file << names[i] << "," << ages[i] << "," << matricMarkss[i] << "," << interMarkss[i] << "," << ecatMarkss[i] << endl;
    }
}
