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

    if (test == name[length - 1])
    {
        x = true;
    }

    cout << x;
}