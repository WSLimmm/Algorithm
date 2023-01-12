#include <iostream>
using namespace std;

void Sort(int arr[], int count);

const int COUNT = 10;

int main()
{
	long long input;
	int arr[COUNT] = { };
	int i = 0;

	cin >> input;
	while (input != 0)
	{
		arr[i] = input % 10;
		input /= 10;
		i++;
	}

	Sort(arr, COUNT);

	for (int j = 0; j < i; j++)
		cout << arr[j];
		
	return 0;
}

void Sort(int arr[], int count)
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
}