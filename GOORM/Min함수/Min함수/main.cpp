#include <iostream>
using namespace std;

int Min(int a, int b) { return a < b ? a : b; }

int main(){
    int a, b;
    cin >> a >> b;

    cout << Min(a, b) << endl;
}