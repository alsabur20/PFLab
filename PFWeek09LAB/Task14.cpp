#include <iostream>
using namespace std;

main()
{
    // string test="abcdefghijklmnopqrstuvwxyz";
    string text;
    cout << "Enter String: ";
    getline(cin, text);

    int length = text.length();   

    /*char character=name[0];
    for (int index = 0; index < length; index++)
    {
        char character=name[index];
        for(int idx=0; idx<=25;idx++)
        {
            if(character==test[idx])
            {

                cout <<test[(idx+1)%26];
            }
        }
    }*/
    char x;
    for (int idx = 0; idx < length; idx++)
    {
        x = text[idx];
        if (x == 'a')
        {
            cout << "b";
        }
        if (x == 'b')
        {
            cout << "c";
        }
        if (x == 'c')
        {
            cout << "d";
        }
        if (x == 'd')
        {
            cout << "e";
        }
        if (x == 'e')
        {
            cout << "f";
        }
        if (x == 'f')
        {
            cout << "g";
        }
        if (x == 'g')
        {
            cout << "h";
        }
        if (x == 'h')
        {
            cout << "i";
        }
        if (x == 'i')
        {
            cout << "j";
        }
        if (x == 'j')
        {
            cout << "k";
        }
        if (x == 'k')
        {
            cout << "l";
        }
        if (x == 'l')
        {
            cout << "m";
        }
        if (x == 'm')
        {
            cout << "n";
        }
        if (x == 'n')
        {
            cout << "o";
        }
        if (x == 'o')
        {
            cout << "p";
        }
        if (x == 'p')
        {
            cout << "q";
        }
        if (x == 'q')
        {
            cout << "r";
        }
        if (x == 'r')
        {
            cout << "s";
        }
        if (x == 's')
        {
            cout << "t";
        }
        if (x == 't')
        {
            cout << "u";
        }
        if (x == 'u')
        {
            cout << "v";
        }
        if (x == 'v')
        {
            cout << "w";
        }
        if (x == 'w')
        {
            cout << "x";
        }
        if (x == 'x')
        {
            cout << "y";
        }
        if (x == 'y')
        {
            cout << "z";
        }
        if (x == 'z')
        {
            cout << "z";
        }
    }
}
