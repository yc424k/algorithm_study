#include <iostream>
using namespace std;

void checkString(string str)
{
    int check[4] = {0,};
    for (int i = 0; i < str.length(); i++)
    {
        if(str[i] == '1')
            check[0]++;
        if(str[i] == 'I')
            check[1]++;
        if(str[i] == 'l')
            check[2]++;
        if(str[i] == '|')
            check[3]++;
    }
    for(int x : check)
        cout << x << endl;
}

int main()
{
    string str;
    getline(cin ,str);

    checkString(str);
}