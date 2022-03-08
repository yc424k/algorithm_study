#include <iostream>
using namespace std;

int main()
{
    int A, B, V;
    cin >> A >> B >> V;

    V -= B;
    A -= B;

    if (V % A == 0)
    {
        cout << V / A << endl;
    }
    else
    {
        cout << (V / A) + 1 << endl;
    }
}