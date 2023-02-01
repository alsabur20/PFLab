#include <iostream>
using namespace std;

main()
{
    int arraySize = 5;

    cout<<"Enter Sixe of Array: ";
    cin>>arraySize;
    float cgpa[arraySize];

    // cgpa[0] = 3.75;
    // cgpa[1] = 2.50;
    // cgpa[2] = 3.90;
    // cgpa[3] = 1.90;
    // cgpa[4] = 4.00;

    for (int index = 0; index < arraySize; index++)
    {
        cout << "Enter CGPA at " << index << " index: ";
        cin >> cgpa[index];
    }

    for (int index = 0; index < arraySize; index++)
    {
        cout<<cgpa[index]<<" ";
        //cout << "CGPA of student at " << index << " Index is: " << cgpa[index] << endl;
    }
}