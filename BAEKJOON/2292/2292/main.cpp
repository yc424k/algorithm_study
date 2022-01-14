#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int i;
    int distance = 1;

    for(i =1; distance < N; i++){
        distance += i*6;
    }

    cout << i << endl;
}