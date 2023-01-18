#include <iostream>
using namespace std;

void printtable(int x);

main()
{
    int number;
    cout << "Enter Number: ";
    cin >> number;
    printtable(number);
}

void printtable(int number)
{
    for (int count = 1; count <= 10; count++)
    {
        cout << number << " * " << count << " = " << number * count << endl;
    }
}
