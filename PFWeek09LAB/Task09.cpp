#include <iostream>
using namespace std;

main()
{
    string name;
    getline(cin, name);

    int counter = name.length();

    if (counter % 2 == 0)
    {
        cout << "Even";
    }
    else
    {
        cout << "Odd";
    }
}