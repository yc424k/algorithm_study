#include <iostream>
#include <string>
using namespace std;

int main()
{
    int size;
    cin >> size;

    int count = 0;
    for (int i = 1; i < size; i++)
    {
        string s = to_string(i);
        for (int j = 0; s[j] != '\0'; j++)
        {   
            if ((s[j] == '3') || (s[j] == '6') || (s[j] == '9'))
            {
                count++;
            }
        }
        
    }
    cout << count << endl;
}