#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int right = 1, left = 1;
    bool check = true;

    for (int i = 1; i < N; i++)
    {
        if (right == 1 && check)
        {
            right += left;
            left = 1;
            check = false;
        }
        else if (left == 1 && check)
        {
            left += right;
            right = 1;
            check = false;
        }
        else
        {
            right--;
            left++;
            check = true;
        }
    }

    cout << left << "/" << right << endl;
}