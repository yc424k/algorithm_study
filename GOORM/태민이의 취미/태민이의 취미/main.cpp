#include <iostream>
using namespace std;

int main() { 
	long long num = 0;
	cin >> num;
	unsigned long long sum = num * (num+1)/2 % 1000000007;
	unsigned long long result = sum * sum % 1000000007;
	cout << result;
}