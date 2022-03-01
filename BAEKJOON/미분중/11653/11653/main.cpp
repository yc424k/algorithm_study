#include <iostream>
using namespace std;

int main() {
	int N;
	int i = 2;

	cin >> N;

	while (N != 0) {
		if (N == 1)
			break;
		if (N - i == 0) {
			cout << i << endl;
			break;
		}
		if (N % i != 0)
			++i;
		else {
			cout << i << endl;
			N /= i;
		}
			
	}
}