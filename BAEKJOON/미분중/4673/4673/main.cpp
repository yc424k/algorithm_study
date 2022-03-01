#include <iostream>
using namespace std;

int main()
{
    int arr[10001] = {
        0,
    };
    for (int i = 1; i <= 10000; i++)
    {
        string s = to_string(i);

        int sum = 0;
        for (int j = 0; s[j] != '\0'; j++)
        {
            sum += s[j] - '0';
        }
        if (sum + i <= 10000)
        {
            arr[sum + i] = 1;
        }
    }
    for (int i = 1; i <= 10000; i++)
    {
        if (arr[i] == 0)
            cout << i << endl;
    }
}