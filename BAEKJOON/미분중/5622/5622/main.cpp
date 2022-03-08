#include <iostream>
#include <string>

using namespace std;

int checkString(string str){
    int count = 0;

    for(int i = 0; i < str.length(); i++){
        if(str[i] == 'A' || str[i] == 'B' || str[i] == 'C')
            count += 2;
        if(str[i] == 'D' || str[i] == 'E' || str[i] == 'F')
            count += 3;
        if(str[i] == 'G' || str[i] == 'H' || str[i] == 'I')
            count += 4;
        if(str[i] == 'J' || str[i] == 'K' || str[i] == 'L')
            count += 5;
        if(str[i] == 'M' || str[i] == 'N' || str[i] == 'O')
            count += 6;
        if(str[i] == 'P' || str[i] == 'Q' || str[i] == 'R' || str[i] == 'S')
            count += 7;
        if(str[i] == 'T' || str[i] == 'U' || str[i] == 'V')
            count += 8;
        if(str[i] == 'W' || str[i] == 'X' || str[i] == 'Y' || str[i] == 'Z')
            count += 9;   
    }
    return count;
}

int main(){
    string str;
    cin >> str;

    cout << checkString(str) + str.length() << endl;
}