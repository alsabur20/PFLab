#include <iostream>
#include <windows.h>
#include <conio.h>
#include <fstream>
#include <iomanip>

using namespace std;

string usernames[10];
string passwords[10];
int userCount = 0;

bool signIn(string username, string password);
void addUsers(string username, string password);
void viewUsers();
void writeFile(string username, string password);
bool isValidUsername(string username);
int takeChoice();
void loadDataFromFile();

main()
{
    loadDataFromFile();
    string username, password;
    int choice;
    while (choice != 0)
    {
        choice = takeChoice();
        if (choice == 1)
        {
            cout << "Enter Username: ";
            cin >> username;
            cout << "Enter Password: ";
            cin >> password;
            bool x = isValidUsername(username);
            if (x == true)
            {
                addUsers(username, password);
                writeFile(username, password);
                cout << "Signed Up Successfully!!" << endl;
            }
            else
            {
                cout << "User Already Exists!!" << endl;
                getch();
            }
        }
        else if (choice == 2)
        {
            cout << "Enter Username: ";
            cin >> username;
            cout << "Enter Password: ";
            cin >> password;
            bool x = signIn(username, password);
            if (x == true)
            {
                cout << "Login Successfull!!" << endl;
            }
            else
            {
                cout << "Invalid Credentials" << endl;
            }
        }
        else if (choice == 3)
        {
            viewUsers();
        }
        else
        {
            cout << "Invalid Choice!!" << endl;
        }
    }
}

bool signIn(string username, string password)
{
    for (int i = 0; i < userCount; i++)
    {
        if (username == usernames[i] && password == passwords[i])
        {
            return true;
        }
    }
    return false;
}

void addUsers(string username, string password)
{
    usernames[userCount] = username;
    passwords[userCount] = password;
    userCount++;
}

void viewUsers()
{
    cout << left << setw(20) << "Usernames" << setw(20) << "Passwords" << endl;
    for (int i = 0; i < userCount; i++)
    {
        cout << left << setw(20) << usernames[i] << setw(20) << passwords[i] << endl;
    }
}

void writeFile(string username, string password)
{
    fstream file;
    file.open("UserDetails.txt", ios::app);
    file << username << "\n";
    file << password << "\n";
    file.close();
}

bool isValidUsername(string username)
{
    for (int i = 0; i < userCount; i++)
    {
        if (username == usernames[i])
        {
            return false;
        }
    }
    return true;
}
int takeChoice()
{
    int choice;
    cout << "01. SignUp" << endl;
    cout << "02. SignIn" << endl;
    cout << "03. View Users" << endl;
    cout << "00. Exit" << endl;
    cin >> choice;
    return choice;
}
void loadDataFromFile()
{
    string username, password;
    fstream file;
    int counter = 0;
    file.open("UserDetails.txt", ios::in);
    while (getline(file, username) && getline(file, password))
    {
        usernames[userCount] = username;
        passwords[userCount] = password;
        userCount++;
    }
    file.close();
}