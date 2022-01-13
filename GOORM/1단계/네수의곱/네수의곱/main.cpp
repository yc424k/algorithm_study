#include <iostream>
using namespace std;

int mul(int x, int b) { return x * b; }

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    cout << mul(a, mul(b, mul(c, d)));
}