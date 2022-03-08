#include <iostream>
using namespace std;

int main()
{
    string str;

    getline(cin, str);

    int count = 0;
    
    // cout << str.size() << endl;
    if(str.size() == 1){
        // cout << "TEST" << endl;
        if(str[0] == ' '){
            cout << count << endl;
            return 0;
        }
    }

    for (int i = 0; i < str.size(); i++)
    {
        if(i == 0){
            if(str[i] == ' ')
                continue;
        }
        if ((str[i] == ' ') || (str[i+1] == '\0'))
        {
            count++;
        }
    }
    cout << count << endl;
}