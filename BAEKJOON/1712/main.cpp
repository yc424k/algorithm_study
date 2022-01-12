#include <iostream>
using namespace std;

int main() {
	int A, B, C;
	cin >> A >> B >> C;
	int sum = A + B;
	int day = 0;

	if ((B >= C) || (C == 0)) {
		cout << -1 << endl;
		return 0;
	}
	cout << (A / (C - B)) + 1 << endl;
}