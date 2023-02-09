#include <iostream>

using namespace std;

main()
{
    string test;
    cout << "Enter string: ";
    getline(cin, test);
    int length = test.length();

    int spaceIndex = 0, lastIndex = length;
    for (int i = length; i >= 0; i--)
    {
        if (test[i] == ' ')
        {
            spaceIndex = i;
            for (int j = spaceIndex; j <= lastIndex; j++)
            {
                cout << test[j];
            }
            lastIndex = spaceIndex;
        }
        if (i == 0)
        {
            for (int k = 0; k <= spaceIndex; k++)
            {
                cout << test[k];
            }
        }
    }
}