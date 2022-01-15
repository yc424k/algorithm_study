#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    int r, count;
    string T;
    int sum;
    int i;
    cin >> r >> T;

    reverse(T.begin(), T.end());

    if (T.length() == 1)
    {
        if (T[0] < 58)
        {
            if (r == (T[0] - 48))
            {
                std::cout << r + 1 << endl;
                return 0;
            }
        }
        else
        {
            if (r == (T[0] - 55))
            {
                cout << r + 1 << endl;
                return 0;
            }
        }
    }
    
    else
    {
        for (i = 2; i <= 16; i++)
        {
            //cout << i << "진수" << endl;
            sum = 0;
            for (int j = 0; j < T.length(); j++)
            {
                if (T[j] < 58)
                {
                    //cout << T[j] - 48 << "*" << i << "^" << j << "=" << (T[j] - 48) * (pow(i, j)) << endl;
                    sum += (T[j] - 48) * (pow(i, j));
                }
                else
                {
                    //cout << T[j] - 55 << "*" << i << "^" << j << "=" << (T[j] - 55) * (pow(i, j)) << endl;
                    sum += (T[j] - 55) * (pow(i, j));
                }
            }
            if (sum == r)
                break;
        }
        cout << i << endl;
    }
}