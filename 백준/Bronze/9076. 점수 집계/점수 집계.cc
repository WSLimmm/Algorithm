#include <iostream>
using namespace std;

const int COUNT = 5;

void DeleteValue(int arr[], int count);
void Sort(int arr[], int count);

int main()
{
	int n, input;
	int arr[COUNT] = { };
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int sum = 0;
		for (int j = 0; j < COUNT; j++)
		{
			cin >> input;
			arr[j] = input;
		}

		DeleteValue(arr, COUNT);
		Sort(arr, COUNT);

		sum = arr[COUNT - 1] + arr[COUNT - 2] + arr[COUNT - 3];

		if (arr[COUNT - 1] - arr[COUNT - 3] >= 4)
			cout << "KIN" << endl;
		else
			cout << sum << endl;
	}

	return 0;
}

void DeleteValue(int arr[], int count)
{
	int max = -1, maxIndex = 0;
	int min = 11, minIndex = 0;

	for (int i = 0; i < count; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
			maxIndex = i;
		}
		if (min > arr[i])
		{
			min = arr[i];
			minIndex = i;
		}
	}

	arr[maxIndex] = 0;
	arr[minIndex] = 0;
}

void Sort(int arr[], int count)
{
	for (int i = 0; i < count; i++)
	{
		int min = 101, minIndex = 0;
		for (int j = i + 1; j < count; j++)
		{
			if (min > arr[j])
			{
				min = arr[j];
				minIndex = j;
			}

			if (j == count - 1 && arr[i] > arr[minIndex])
			{
				int temp = arr[i];
				arr[i] = arr[minIndex];
				arr[minIndex] = temp;
			}
		}
	}
}