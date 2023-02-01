#include <iostream>
using namespace std;

main()
{
    string name;
    cout << "Enter String: ";
    getline(cin, name);

    int length = name.length();

    int counter = 0;

    for (int index = 0; index < length; index++)
    {
        if (name[index] == 'a' || name[index] == 'e' || name[index] == 'i' || name[index] == 'o' || name[index] == 'u')
        {
            counter++;
        }
    }
    cout << "No. of Vowels: " << counter;
}