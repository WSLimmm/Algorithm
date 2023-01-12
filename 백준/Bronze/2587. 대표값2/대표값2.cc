#include <iostream>
using namespace std;

int FindMiddle(int arr[], int count);

const int COUNT = 5;

int main()
{
	int input, sum = 0, average, middle;
	int arr[COUNT] = { };

	for (int i = 0; i < COUNT; i++)
	{
		cin >> input;
		arr[i] = input;
		sum += input;
	}

	middle = FindMiddle(arr, COUNT);
	average = sum / COUNT;

	cout << average << "\n" << middle;
	return 0;
}

int FindMiddle(int arr[], int count)
{
	for (int i = 0; i < count; i++)
	{
		int max = -1, maxIndex = 0;
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
	int middleValue = arr[2];

	return middleValue;
}