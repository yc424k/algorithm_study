#include <iostream>
#include <vector>

int main()
{
    int a, b;
    std::vector<int> v;

    while (true)
    {
        std::cin >> a >> b;
        if ((a + b) == 0)
        {
            break;
        }
        // std::cout << a + b << '\n';
        v.push_back(a + b);
    }
    for (int i : v)
    {
        std::cout << i << '\n';
    }
}