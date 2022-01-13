#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    if(N % 400 == 0)
        cout << "Leap Year" << endl;
    else if(N % 100 == 0)
        cout << "Not Leap Year" << endl;
    else if(N % 4 == 0)
        cout << "Leap Year" << endl;
    else
        cout << "Not Leap Year" << endl;
}