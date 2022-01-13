#include <iostream>
using namespace std;

struct Alpha
{
    int start = 100;
    int count = 0;
    int sum = 0;
};

int Nsum(int a, int b)
{
    int sum = a;
    for (int i = 0; i < b-1; i++)
    {
        sum += ++a;
    }
    return sum;
}

int main()
{
    int N;
    cin >> N;
    int count = 0;

    for (int i = 0; i < N; i++)
    {
        Alpha ap[26];
        string str;
        cin >> str;
        for (int j = 0; j < str.length(); j++)
        {
            if (j < ap[str[j] - 97].start)
            {
                ap[str[j] - 97].start = j;
            }
            ap[str[j] - 97].count++;
            ap[str[j] - 97].sum += j;
        }
        for (int j = 0; j < 26; j++)
        {
            //cout << j << endl;
            if (ap[j].start != 100)
            {
                //cout << "sum: "<<ap[j].sum << " Nsum: "<<Nsum(ap[j].start, ap[j].count) << endl;
                if (ap[j].sum != Nsum(ap[j].start, ap[j].count))
                {
                    break;
                }
            }
            if (j == 25)
                count++;
        }

        // for (int i = 0; i < 26; i++)
        // {
        //     cout << i << " 번쨰 -> ";
        //     cout << ap[i].start << ", count: " << ap[i].count << ", sum: " << ap[i].sum << ", Nsum"<<Nsum(ap[i].start, ap[i].count)<<endl;
        // }
    }

    cout << count << endl;
}