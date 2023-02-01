#include <iostream>
using namespace std;

main()
{
    string name;
    getline(cin, name);

    int counter = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        counter++;
    }

    for (int i = counter; i >= 0; i--)
    {
        cout << name[i];
    }
}