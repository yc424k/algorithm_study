#include <iostream>
using namespace std;

int main(){
    string str;
    int count = 0;

    getline(cin, str);

    for(int i = 0; i < str.length(); i++){
        if((str[i] != ' ')&& (str[i+1] == ' ') || (str[i] != ' ')&& (str[i+1] == '\0'))
            count++;
    }

    cout << count << endl;
}