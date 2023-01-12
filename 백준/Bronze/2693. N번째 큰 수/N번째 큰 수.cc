#include <iostream>
using namespace std;

void Sort(int arr[], int count);

const int COUNT = 10;

int main()
{
	int n, input;
	int arr[COUNT] = { };
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < COUNT; j++)
		{
			cin >> input;
			arr[j] = input;
		}
		Sort(arr, COUNT);
		cout << arr[2] << endl;
	}

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