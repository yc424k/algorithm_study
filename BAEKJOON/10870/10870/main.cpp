#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v;
	v.push_back(0);
	v.push_back(1);

	int N;
	cin >> N;

	if (N == 0) {
		cout << 0 << endl;
		return 0;
	}
	if (N == 1) {
		cout << 1 << endl;
		return 0;
	}

	for (int i = 2; i <= N; i++) {
		v.push_back(v[i-2] + v[i - 1]);
	}

	//for (auto i : v) {
	//	cout << i << " ";
	//}
	cout << v.back() << endl;
}
