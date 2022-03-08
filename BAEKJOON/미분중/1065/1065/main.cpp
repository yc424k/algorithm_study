#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;

	int count = 0;
	for (int i = 1; i <= n; i++) {
		if (i < 100) {
			count++;
			continue;
		 }
		
		string s = to_string(i);
		int check = 0;

		for (int j = 0; j < s.length(); j++) {
			if (j == s.length()-1)
				count++;
			if (j == 0) {
				check = (s[j + 1] - '0') - (s[j] - '0');
			}
			else if ((s[j + 1] - '0') - (s[j] - '0') != check) {
				break;
			}
				
		}
	}

	cout << count << endl;
}