#include <iostream>
using namespace std;

void DeleteValue(int arr[], int count, int sum);

const int COUNT = 9;

int main()
{
	int input, sum = 0;
	int arr[COUNT] = { };

	for (int i = 0; i < COUNT; i++)
	{
		cin >> input;
		arr[i] = input;
		sum += input;
	}

	DeleteValue(arr, COUNT, sum);

	for (int i = 0; i < COUNT; i++)
	{
		if (arr[i] == 0)
			continue;

		cout << arr[i] << endl;
	}

	return 0;
}

void DeleteValue(int arr[], int count, int sum)
{
	sum -= 100;
	for (int i = 0; i < count; i++)
	{
		for (int j = i + 1; j < count; j++)
		{
			if (arr[i] + arr[j] == sum)
			{
				arr[i] = 0;
				arr[j] = 0;
				return;
			}
		}
	}
}