#include <iostream>
using namespace std;

void Sort(int arr[], int count);
int FindMax(int arr[], int count);
int FindMin(int arr[], int count);
int FindLargeGap(int arr[], int count);

const int COUNT = 50;

int main()
{
	int k, n, input;
	int arr[COUNT] = { };
	cin >> k;

	for (int i = 0; i < k; i++)
	{
		int max = -1;
		int min = 101;
		int largeGap = 0;

		cin >> n;
		for (int j = 0; j < n; j++)
		{
			cin >> input;
			arr[j] = input;
		}

		Sort(arr, n);
		max = FindMax(arr, n);
		min = FindMin(arr, n);
		largeGap = FindLargeGap(arr, n);

		cout << "Class " << (i + 1) << endl;
		cout << "Max " << max << ", Min " << min << ", Largest gap " << largeGap << endl;
	}

	return 0;
}

void Sort(int arr[], int count)
{
	for (int i = 0; i < count; i++)
	{
		int max = -1;
		int maxIndex = 0;
		for (int j = i + 1; j < count; j++)
		{
			if (max < arr[j])
			{
				max = arr[j];
				maxIndex = j;
			}

			if (j == count - 1 && arr[i] < arr[maxIndex])
			{
				int temp = arr[i];
				arr[i] = arr[maxIndex];
				arr[maxIndex] = temp;
			}
		}
	}
}

int FindMax(int arr[], int count)
{
	int max = -1;
	for (int i = 0; i < count; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}

	return max;
}

int FindMin(int arr[], int count)
{
	int min = 101;
	for (int i = 0; i < count; i++)
	{
		if (arr[i] < min)
			min = arr[i];
	}

	return min;
}

int FindLargeGap(int arr[], int count)
{
	int largeGap = 0;
	for (int i = 1; i < count; i++)
	{
		int gap = arr[i - 1] - arr[i];
		if (largeGap < gap)
			largeGap = gap;
	}

	return largeGap;
}