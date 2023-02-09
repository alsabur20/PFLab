#include <iostream>

using namespace std;

bool checkCondition(int left, int mid, int right);

int main()
{
    int size;
    cout << "Enter no. of elements you want to enter: ";
    cin >> size;

    int sampleArray[20];
    int answerArray[20];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter number " << i + 1 << " :";
        cin >> sampleArray[i];
    }
    int indexAns = 0;

    for (int i = 1; i < size - 1; i++)
    {
        int left = sampleArray[i - 1];
        int mid = sampleArray[i];
        int right = sampleArray[i + 1];
        bool flag = checkCondition(left, mid, right);
        if (flag == true)
        {
            answerArray[indexAns] = sampleArray[i];
            indexAns++;
        }
    }

    if (indexAns != 0)
    {
        cout << "Answer Array: [ ";
        for (int i = 0; i < indexAns; i++)
        {
            cout << answerArray[i] << " ";
        }
        cout << "]";
    }
    else
    {
        cout << "No peak found!!";
    }
}
bool checkCondition(int left, int mid, int right)
{
    bool flag = false;
    if (mid > left && mid > right)
    {
        flag = true;
    }
    return flag;
}