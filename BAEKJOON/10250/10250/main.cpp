#include <iostream>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    for (int t = 0; t < testcase; t++)
    {
        int i, j, count = 0;
        int H, W, N;

        cin >> H >> W >> N;

        for (i = 1; i <= W; i++)
        {
            for (j = 1; j <= H; j++)
            {
                //cout << "j:" <<j <<" " <<"i:" <<i<<" "<<"count:"<<count<<endl;
                count++;
                if (count == N)
                    break;
                
            }
            if (count == N)
                break;
        }
        cout << j*100 + i << endl;
    }
}