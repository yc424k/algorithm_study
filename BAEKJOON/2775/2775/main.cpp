#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int N = 0; N < n; N++) {
		int x, y;

		cin >> y >> x;

		int** arr = new int* [y + 1];
		for (int i = 0; i <= y; i++)
			arr[i] = new int[x];

		//cout << "Test" << endl;

		for (int i = 0; i <= y; i++) {
			for (int j = 0; j < x; j++) {
				if (i == 0) {
					arr[i][j] = j + 1;
				}
				else if (j == 0) {
					arr[i][j] = 1;
				}
				else {
					arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
				}
			}
		}

		/*cout << "Test" << endl;

		for (int i = 0; i <= y; i++) {
			for (int j = 0; j < x; j++) {
				cout << arr[i][j] << " ";
			}
			cout << endl;
		}*/

		cout << arr[y][x - 1] << endl;

		for (int i = 0; i < y; i++)
			delete[] arr[i];
		delete[] arr;
	}

}