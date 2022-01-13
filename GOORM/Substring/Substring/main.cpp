#include <iostream>
using namespace std;

int main(){
    string str;
    getline(cin, str);

    int a,b;
    cin >> a >> b;
    for(int i = a-1; i < a+b-1; i++){
        cout<<str[i];
    }
}