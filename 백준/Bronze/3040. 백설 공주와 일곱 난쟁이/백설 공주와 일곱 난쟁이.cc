#include <iostream>
using namespace std;

void Sort(int arr[], int count);
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
	Sort(arr, COUNT);

	for (int i = 0; i < COUNT; i++)
	{
		if (arr[i] == 0)
			continue;
		
		cout << arr[i] << endl;
	}

	return 0;
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