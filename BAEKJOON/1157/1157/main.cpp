#include <iostream>
using namespace std;

int main()
{
	int arr[26] = {
		0,
	};

	string s;
	cin >> s;

	for (int i = 0; i < s.size(); i++)
	{
		s[i] = tolower(s[i]);
	}

	for (int i = 0; s[i] != '\0'; i++)
	{
		arr[s[i] - 97]++;
	}

	int max = arr[0];
	int check = 0;
	int same = 0;

	for (int i = 1; i < 26; i++)
	{
		if(max == arr[i])
			same = max;
		if (max < arr[i])
		{
			max = arr[i];
			check = i;
		}
	}
	if(max == same)
		cout << "?" << endl;
	else
		cout << (char)(check + 'A') << endl;
}