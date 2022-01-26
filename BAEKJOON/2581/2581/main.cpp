#include <iostream>
#include <cmath>
using namespace std;

bool checkPrime(int n) {
	if (n == 2)
		return true;
	if (n == 1 || n % 2 == 0)
		return false;
	for (int i = 3; i <= sqrt(n); i += 2) {
		if (n % i == 0)
			return false;
	}
	return true;
}

int main() {
	int primeNumerSum = 0;
	int primeNumberMin, primeNumberMax;
	bool primeNumberCheck = false;
	cin >> primeNumberMin >> primeNumberMax;

	for (int i = primeNumberMin; i <= primeNumberMax; i++) {
		if (checkPrime(i)) {
			primeNumerSum += i;
			if (!primeNumberCheck) {
				primeNumberMin = i;
				primeNumberCheck = true;
			}
			
		}
	}

	if (!primeNumberCheck)
		cout << -1 << endl;
	else {
		cout << primeNumerSum << endl;
		cout << primeNumberMin << endl;
	}
		

}