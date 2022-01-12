#include <iostream>
using namespace std;

int main() {
	int arr[5] = { 0, };
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
	}

	int check[3] = { 0, };
	for (int i = 0; i < 5; i++) {
		check[arr[i] - 1]++;
	}
	if ((check[0] == 5) || (check[1] == 5) || (check[2] == 5))
		cout << 0 << endl;
	else if (check[0] == 0) {
		cout << check[2];
		//return 0;
	}
	else if (check[1] == 0) {
		cout << check[0];
		//return 0;
	}
	else if (check[2] == 0) {
		cout << check[1];
		//return 0;
	}
	else
		cout << 0 << endl;
}