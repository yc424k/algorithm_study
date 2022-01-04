#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    vector<int> arr;
    for(int i = 0; i < N; i++){
        int n;
        cin >> n;
        arr.push_back(n);
    }

    int result = *min_element(arr.begin(), arr.end()); 
    cout << result << endl;
}