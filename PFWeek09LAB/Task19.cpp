#include <iostream>
using namespace std;

main()
{
    string test;
    cout << "Enter string: ";
    getline(cin, test);

    string vowels = "aeiou";

    for (int idx = 0; test[idx] != '\0'; idx++)
    {
        if (test[idx] == 'a' || test[idx] == 'e' || test[idx] == 'i' || test[idx] == 'o' || test[idx] == 'u' || test[idx] == 'A' || test[idx] == 'E' || test[idx] == 'I' || test[idx] == 'O' || test[idx] == 'U')
        {
            continue;
        }
        cout << test[idx];
    }
}