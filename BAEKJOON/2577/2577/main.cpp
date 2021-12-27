#include <iostream>
#include <string>

using namespace std;

int main() {
	int arr[3];

	for (int i = 0; i < 3; i++) {
		cin >> arr[i];
	}

	string s = to_string(arr[0] * arr[1] * arr[2]);

	int count[10] = { 0, };

	for (int i = 0; s[i] != '\0'; i++) {
		count[s[i] - '0']++;
	}
	
	for (int i = 0; i < 10; i++) {
		cout << count[i] << endl;
	}
}