#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, c, d, e, f;

    cin >> a >> d;
    cin >> b >> e;
    cin >> c >> f;

    double arr[3];
    arr[0] = sqrt(pow(a - b, 2) + pow(d - e, 2));
    arr[1] = sqrt(pow(b - c, 2) + pow(e - f, 2));
    arr[2] = sqrt(pow(c - a, 2) + pow(f - d, 2));

    double temp;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    double result = 0.5 * (((a * e) + (b * f) + (c * d)) - ((d * b) + (e * c) + (f * a)));
    if (result < 0)
        result = result * -1;

    if (arr[0] > arr[1] + arr[2])
        cout << 0 << endl;
    else
    {
        cout << fixed;
        cout.precision(2);
        cout << result << endl;
    }
}

//참고 공식 신발끈 공식