#include <iostream>
using namespace std;

int main() {
	int rightNumber = 1;
	int leftNumber = 1;
	bool right = true;
	int N;
	cin >> N;
	for (int i = 0; i < N-1; i++) {

		if (right) {
			if (leftNumber == 1) {
				right = false;
				rightNumber++;
			}
			else {
				rightNumber++;
				leftNumber--;
			}
		}
		else {
			if (rightNumber == 1) {
				right = true;
				leftNumber++;
			}
			else {
				rightNumber--;
				leftNumber++;
			}
		}
	}
	cout << leftNumber << '/' << rightNumber << endl;
}