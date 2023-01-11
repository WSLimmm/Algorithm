#include <iostream>
using namespace std;

long long FindMax(long long arr[], int count);
long long FindMin(long long arr[],int count);

const int COUNT = 50;

int main()
{
	int n;
	long long arr[COUNT] = { }, input, max, min;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> input;
		arr[i] = input;
	}

	if (n <= 1)
		cout << arr[0] * arr[0] << endl;
	else if (n == 2)
		cout << arr[0] * arr[1] << endl;
	else
	{
		max = FindMax(arr, n);
		min = FindMin(arr, n);

		long long result = max * min;
		cout << result << endl;
	}

	return 0;
}

long long FindMax(long long arr[], int count)
{
	long long maxValue = -1;
	for (int i = 0; i < count; i++)
	{
		if (arr[i] > maxValue)
			maxValue = arr[i];
	}

	return maxValue;
}

long long FindMin(long long arr[], int count)
{
	long long minValue = 1000001;
	for (int i = 0; i < count; i++)
	{
		if (arr[i] < minValue)
			minValue = arr[i];
	}

	return minValue;
}