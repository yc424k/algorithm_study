#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	int count[4] = { 0, 0,0,0};
	int money = 1000 - N;
	
	while (money > 0) {
		if (money >= 500) {
			money -= 500;
			count[0]++;
		}
		else if (money >= 100) {
			money -= 100;
			count[1]++;
		}
		else if (money >= 50) {
			money -= 50;
			count[2]++;
		}
		else {
			money -= 10;
			count[3]++;
		}
	}

	for (int &a : count)
		cout << a << " ";
}