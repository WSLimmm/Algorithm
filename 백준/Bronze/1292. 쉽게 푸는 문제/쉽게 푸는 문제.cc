#include <iostream>
using namespace std;

int main()
{
	int arr[1001] = { }, a, b, count = 1, num = 1, sum = 0;

	for (int i = 1; i < sizeof(arr) / sizeof(int); i++)
	{
		arr[i] = num;
		if (count == num)
		{
			count = 1;
			num++;
		}
		else
			count++;
	}
	cin >> a >> b;

	for (int i = a; i <= b; i++)
	{
		sum += arr[i];
	}
	cout << sum;

	return 0;
}