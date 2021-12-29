#include <iostream>
using namespace std;

int main() {
	int arr[26]{ 0, };

	for (int i = 0; i < 26; i++) {
		arr[i] = -1;
	}

	string s;
	cin >> s;

	for (int i = 0; i < s.size(); i++) {
		s[i] = tolower(s[i]);
	}

	for (int i = 0; s[i] != '\0'; i++) {
		if (arr[s[i] - 97] >= 0) {
			continue;
		}

		arr[s[i] - 97] = i;
	}

	int max = s[0];
	int check;
	for (int i = 1; i < 26; i++) {
		if (max == s[i]) {
			cout << "?" << endl;
		}
		if (max < s[i]) {
			check = i;
		}
		

	}
	cout << 'A' + check << endl;
}