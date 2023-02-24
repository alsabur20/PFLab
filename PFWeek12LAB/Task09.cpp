#include <iostream>
#include <windows.h>
#include <conio.h>
#include <fstream>

using namespace std;

main()
{
    int counter = 0;
    int length = 0;
    char ch;
    cout << "Enter Character: ";
    cin >> ch;
    string line;
    fstream file;
    file.open("task09.txt", ios::in);
    while (!file.eof())
    {
        if (getline(file, line))
        {
            length = line.length();
            for (int i = 0; i < length; i++)
            {
                if (line[i] == ch)
                {
                    counter++;
                }
            }
        }
    }
    cout << "The character " << ch << " appears " << counter << " times." << endl;
}