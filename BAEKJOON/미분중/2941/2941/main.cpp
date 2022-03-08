#include <iostream>

using namespace std;

int main()
{
    string str;
    cin >> str;

    int count = str.length();

    for (int i = 0; i < str.length() - 1; i++)
    {
        if (str[i] == 'c')
        {
            if (str[i + 1] == '-' || str[i + 1] == '=')
            {
                count -= 1;
                i++;
            }
        }
        if (str[i] == 'd')
        {
            if (i <= str.length() - 3)
            {
                if (str[i + 1] == 'z' && str[i + 2] == '=')
                {
                    count -= 2;
                    i += 2;
                }
                if (str[i + 1] == '-')
                {
                    count -= 1;
                    i++;
                }
            }
        }
        if (str[i] == 'l')
            if (str[i + 1] == 'j')
            {
                count -= 1;
                i++;
            }
        if (str[i] == 'n')
        {
            if (str[i + 1] == 'j')
            {
                count -= 1;
                i++;
            }
        }
        if (str[i] == 's')
        {
            if (str[i + 1] == '=')
            {
                count -= 1;
                i++;
            }
        }
        if (str[i] == 'z')
        {
            if (str[i + 1] == '=')
            {
                count -= 1;
                i++;
            }
        }
    }
    cout << count << endl;
}