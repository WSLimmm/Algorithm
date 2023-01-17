#include <iostream>
using namespace std;

const int COUNT = 10;

int main()
{
	int arr[COUNT] = { };
	int n, k, input, cnt = 0;
	cin >> n >> k;

	for (int i = 0; i < n; i++)
	{
		cin >> input;
		arr[i] = input;
	}
	
	for (int i = COUNT - 1; i >= 0; i--)
	{
		if (arr[i] > 0)
		{
			cnt += k / arr[i];
			k %= arr[i];
		}
	}

	cout << cnt;

	return 0;
}