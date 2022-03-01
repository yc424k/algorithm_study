#include <iostream>
using namespace std;

int main() {
	int arr[26]{ 0, };

	for (int i = 0; i < 26; i++) {
		arr[i] = -1;
	}

	string s;
	cin >> s;

	for (int i = 0; s[i] != '\0'; i++) {
		if (arr[s[i]-97] >= 0) {
			continue;
		}
			
		arr[s[i] - 97] = i;
	}

	for (int i = 0; i < 26; i++) {
		
		cout << arr[i] << " ";
	}
}