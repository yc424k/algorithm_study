#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int lp;
		string s;
		cin >> lp >> s;
		for (int j = 0; s[j] != '\0'; j++) {
			for (int z = 0; z < lp; z++) {
				cout << s[j];
			}
			
		}
		cout << endl;
	}
}