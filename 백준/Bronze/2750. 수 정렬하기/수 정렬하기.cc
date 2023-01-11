#include <iostream>
using namespace std;

void Sort(int arr[], int n);

const int SIZE = 1000;

int main()
{
	int n, input, arr[SIZE] = { };
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> input;
		arr[i] = input;
	}

	Sort(arr, n);

	for (int i = 0; i < n; i++)
		cout << arr[i] << endl;

	return 0;
}

void Sort(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		int min = arr[i];
		int minIndex = i;

		for (int j = i + 1; j < n; j++)
		{
			if (min > arr[j])
			{
				min = arr[j];
				minIndex = j;
			}
		}

		if (minIndex == i)
			continue;
		else
		{
			int temp = arr[i];
			arr[i] = arr[minIndex];
			arr[minIndex] = temp;
		}
	}
}