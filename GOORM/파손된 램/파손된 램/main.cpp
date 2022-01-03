#include <iostream>
#include <vector>
using namespace std;

void checkRam(int arr[], int size)
{
    vector <int> ARR;
    for (int i = 0; i < size; i++)
    {
        if ((arr[i] & (arr[i] - 1)) != 0)
        {
            ARR.push_back(i);
        }
    }
    if (ARR.size() == 0)
        cout << 0 << endl;
    else{
        cout << ARR.size() << endl;
        for(int i = 0; i < ARR.size(); i++){
            cout << ARR[i] + 1<< " ";
        }
        cout << endl;
    }
}

int main()
{
    int N;
    cin >> N;
    int *arr = new int[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    checkRam(arr, N);

    delete[] arr;
}