#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	string str1, str2;

	cin >> str1 >> str2;

	reverse(str1.begin(), str1.end());
	reverse(str2.begin(), str2.end());

	for(int i = 0 ; str1[i] != '\0'; i++){
		if (str1[i]  == str2[i] ) {
			continue;
		}
		if (str1[i] > str2[i] ) {
			cout << str1;
			break;
		}
		else {
			cout << str2;
			break;
		}
			
	}
}