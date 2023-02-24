#include <iostream>
#include <windows.h>
#include <conio.h>
#include <fstream>

using namespace std;

main()
{
    int counter = 0;
    string line;
    fstream file;
    file.open("test.txt", ios::in);
    while (!file.eof())
    {
        getline(file, line);
        counter++;
    }
    file.close();
    cout << counter;
}