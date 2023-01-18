#include <iostream>
using namespace std;

void printPercentage(int entries);
main()
{
    int entries;
    cout << "Enter number of entries:";
    cin >> entries;
    printPercentage(entries);
}

void printPercentage(int entries)
{
    int number1;
    float c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0;
    float p1 = 0, p2 = 0, p3 = 0, p4 = 0, p5 = 0;
    for (int x = 1; x <= entries; x++)
    {
        cout << "Enter Number: ";
        cin >> number1;
        if (number1 >= 0 && number1 < 200)
        {
            c1++;
        }
        else if (number1 >= 200 && number1 < 400)
        {
            c2++;
        }
        else if (number1 >= 400 && number1 < 600)
        {
            c3++;
        }
        else if (number1 >= 600 && number1 < 800)
        {
            c4++;
        }
        else if (number1 >= 800 && number1 < 1000)
        {
            c5++;
        }
    }
    p1 = c1 / entries * 100;
    p2 = c2 / entries * 100;
    p3 = c3 / entries * 100;
    p4 = c4 / entries * 100;
    p5 = c5 / entries * 100;
    cout << p1 << " %" << endl
         << p2 << " %" << endl
         << p3 << " %" << endl
         << p4 << " %" << endl
         << p5 << " %";
}
