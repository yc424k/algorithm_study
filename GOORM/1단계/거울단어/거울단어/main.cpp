#include <iostream>
using namespace std;

int main()
{
    int N;



    cin >> N;
    for (int j = 0; j < N; j++)
    {
        string str;
        cin >> str;

        int count = 0;
        for (int i = 0; i < ((str.length() + 1) / 2); i++)
        {
            switch (static_cast<int>(str[i]))
            {
            case 98:
                if (str[str.length() - (i + 1)] == 'd')
                    count++;
                break;
            case 100:
                if (str[str.length() - (i + 1)] == 'b')
                    count++;
                break;

            case 105:
                if (str[i] == str[str.length() - (i + 1)])
                    count++;
                break;

            case 108 ... 111:
                if (str[i] == str[str.length() - (i + 1)])
                    count++;
                break;

            case 112:
                if (str[str.length() - (i + 1)] == 'q')
                    count++;
                break;
            case 113:
                if (str[str.length() - (i + 1)] == 'p')
                    count++;
                break;

            case 115:
                if (str[str.length() - (i + 1)] == 'z')
                    count++;
                break;

            case 117 ... 120:
                if (str[i] == str[str.length() - (i + 1)])
                    count++;
                break;

            case 122:
                if (str[str.length() - (i + 1)] == 's')
                    count++;
                break;
            }
        }
        if (count == (str.length() + 1) / 2)
            cout << "Mirror" << endl;
        else
            cout << "Normal" << endl;
    }
}