#include <iostream>
using namespace std;

int main()
{
    double x, y;
    cin >> x >> y;
    double result = x * y / 2;
    cout << fixed;
    cout.precision(1);
    cout << result << endl;
}