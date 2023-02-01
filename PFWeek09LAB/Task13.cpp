#include <iostream>
using namespace std;

main()
{
    string test="abcdefghijklmnopqrstuvwxyz";
    string name;
    cout << "Enter String: ";
    getline(cin, name);

    int length = name.length();

    

    //char character=name[0];
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
    }
    
}