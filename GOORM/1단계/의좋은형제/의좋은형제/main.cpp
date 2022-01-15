#include <iostream>
using namespace std;

int main()
{
    int right, left, day;

    cin >> left >> right;
    cin >> day;

    for (int i = 0; i < day; i++)
    {
        //left->right
        if (i % 2 == 0)
        {
            if (left == 1)
            {
                right++;
                left--;
            }
            else
            {
                right += left - left / 2;
                left = left / 2;
                //right += left;
            }
        }
        //right->left
        else
        {
            if (right == 1)
            {
                left++;
                right--;
            }
            else
            {
                left += right - right / 2;
                right = right / 2;
                //left += right;
            }
        }
        //cout << i << "번째" << left << " " << right << endl;
    }

    cout << left << " " << right;
}