#include <iostream>
using namespace std;

main()
{
    string name;
    cout << "Enter String: ";
    getline(cin, name);

    int length = name.length();

    char test;

    cout << "Enter test Character: ";
    cin >> test;

    bool x = false;

    for (int index = 0; index < length; index++)
    {
        if (test == name[index])
        {
            x = true;
            break;
        }
    }
    cout << x;
}