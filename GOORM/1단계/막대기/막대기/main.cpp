#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int N;
    cin >> N;

    stack<int> s;
    for (int i = 0; i < N; i++)
    {
        int n;
        cin >> n;
        s.push(n);
    }

    int max = s.top();
    s.pop();
    int count = 1;

    while (!s.empty())
    {
        if (max < s.top())
        {
            max = s.top();
            
            count++;
        }
        s.pop();
    }
    cout << count << endl;
}