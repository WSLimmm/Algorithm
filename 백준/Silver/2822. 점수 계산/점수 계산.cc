#include <iostream>
using namespace std;

void FindValue(int arr[], int size, int sizeMax, int* sum);

const int COUNT = 8;
const int COUNT_MAX = 5;

int main()
{
	int arr[COUNT] = { };
	int input, sum = 0;

	for (int i = 0; i < COUNT; i++)
	{
		cin >> input;
		arr[i] = input;
	}

	FindValue(arr, COUNT, COUNT_MAX, &sum);
	cout << sum << endl;

	for (int i = 0; i < COUNT; i++)
	{
		if (arr[i] == -1)
			cout << (i + 1) << " ";
	}

	return 0;
}

void FindValue(int arr[], int size, int sizeMax, int* sum)
{
	for (int i = 0; i < sizeMax; i++)
	{
		int max = -1;
		int maxIndex = -1;

		for (int j = 0; j < size; j++)
		{
			if (arr[j] > max)
			{
				max = arr[j];
				maxIndex = j;
			}
		}

		*sum += arr[maxIndex];
		arr[maxIndex] = -1;
	}
}