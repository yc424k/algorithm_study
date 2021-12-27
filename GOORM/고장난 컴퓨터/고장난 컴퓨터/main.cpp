#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	unsigned int size, time;
	cin >> size >> time;
	unsigned int* arr1 = new unsigned int[size];

	int count = 0;
	for (int i = 0; i < size; i++) {
		cin >> arr1[i];
		if (i == 0) {
			count++;
		}
		else {
			if ((arr1[i] - arr1[i - 1]) <= time)
				count++;
			else
				count = 1;
		}
	}


	cout << count;
	delete[] arr1;
}