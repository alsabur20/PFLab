#include <iostream>

using namespace std;

string words[20];

int countChars(char test, int arrSize);

main()
{
    int arrSize, counter = 0;
    char test;

    cout << "Enter no. of words you want to enter: ";
    cin >> arrSize;

    for (int i = 0; i < arrSize; i++)
    {
        cout << "Enter word " << i + 1 << ": ";
        cin >> words[i];
    }

    cout << "Enter character you want to check: ";
    cin >> test;

    counter = countChars(test, arrSize);

    cout << "Character found " << counter << " times.";
}

int countChars(char test, int arrSize)
{
    int counter = 0;
    for (int i = 0; i < arrSize; i++)
    {
        string testS = words[i];
        for (int j = 0; testS[j] != '\0'; j++)
        {
            if (test == testS[j])
            {
                counter++;
            }
        }
    }
    return counter;
}
