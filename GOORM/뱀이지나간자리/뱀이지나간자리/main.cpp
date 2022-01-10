#include <iostream>
using namespace std;

int main() {
	int x, y;
	cin >> y >> x;
	bool right = true;
	bool left = false;


	for (int i = 0; i < y; i++) {
		for (int j = 0; j < x; j++) {
			if (i % 2 == 0) {
				cout << "#";
			}
			else {
				if (right == true && j == (x - 1)) {
					cout << "#";
				}
				else if (left == true && j == 0) {
					cout << "#";
				}
				else {
					cout << ".";
				}

				if (j == x - 1) {
					if (right) {
						right = false;
						left = true;
					}
					else {
						right = true;
						left = false;
					}
						
				}
			}
		}
		cout << endl;
	}
}