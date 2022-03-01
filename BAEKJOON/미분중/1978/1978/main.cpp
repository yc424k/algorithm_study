#include <iostream>
#include <cmath>
using namespace std;

bool checkPrime(int n) {
	if (n == 2)
		return true;
	if (n == 1 || n % 2 == 0)
		return false;
	for (int i = 3; i <= sqrt(n); i+=2) {
		if (n % i == 0)
			return false;
	}
	return true;
}

int main() {
	int n;
	int count = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int N;
		cin >> N;
		if (checkPrime(N))
			count++;
	}

	cout << count << endl;
}