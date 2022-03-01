#include <iostream>

using namespace std;

int main() {
	int size;
	cin >> size;

	int* arr = new int[size];
	for (int i = 0; i < size; i++) {
		string s;
		cin >> s;
		int count = 0;
		int sum = 0;
		for (int j = 0; s[j] != '\0'; j++) {
			if (s[j] == 'O') {
				count++;
			}
			else {
				count = 0;
			}
			sum += count;
			
		}
		cout << sum << endl;
	}

	delete[] arr;
}