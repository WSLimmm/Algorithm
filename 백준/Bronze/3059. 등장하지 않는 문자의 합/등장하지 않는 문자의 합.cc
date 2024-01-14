#include <iostream>
using namespace std;

const int ALPHA = 26;

int main()
{
	int n;
	string str;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int sum = 0;
		int arr[ALPHA] = { };
		cin >> str;

		for (int j = 0; j < str.length(); j++)
		{
			if (arr[str[j] - 65] == 0)
				arr[str[j] - 65]++;
		}

		for (int j = 0; j < ALPHA; j++)
		{
			if (arr[j] == 0)
				sum += j + 65;
		}
		
		cout << sum << endl;
	}

	return 0;
}