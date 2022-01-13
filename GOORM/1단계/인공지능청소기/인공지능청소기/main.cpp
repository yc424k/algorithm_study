#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x, y;
        int count;

        cin >> x >> y >> count;

        int sum = abs(x) + abs(y);

        if (sum > count)
            cout << "NO" << endl;
        else if (((sum % 2 == 0) && (count % 2 == 0)) || ((sum % 2 == 1) && (count % 2 == 1)))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}