#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    cin.ignore(1);
    for (int j = 0; j < N; j++)
    {
        string str;
        getline(cin, str);
        int count = 0;
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U'){
                cout << str[i];
                count = 1;
            }
                

        }
        if(count == 0)
            cout << "???" << endl;
        else
            cout << endl;
    }
}