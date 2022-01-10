#include <iostream>
using namespace std;

int findChar(string str, char c){
    int count = 0;

    for(int i = 0; i < str.length(); i++){
        if(str[i] == c){
            count++;
        }
    }
    return count;
}

int main(){
    string str;
    getline(cin, str);

    char c;
    cin >> c;

    cout << findChar(str, c) << endl;
}