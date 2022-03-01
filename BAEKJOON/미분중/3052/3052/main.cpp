#include <iostream>

using namespace std;

int main() {
	int count[42] = { 0, };

	for (int i = 0; i < 10; i++) {
		int n;
		cin >> n;
		count[n % 42]++;
	}

	int sum = 0;
	for (int i = 0; i < 42; i++) {
		if (count[i] != 0)
			sum++;
	}
	cout << sum << endl;
}