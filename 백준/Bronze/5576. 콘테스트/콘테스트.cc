#include <iostream>
using namespace std;

void Sort(int arr[], int count);

const int COUNT = 10;

int main()
{
	int wUni[COUNT] = { };
	int kUni[COUNT] = { };
	int input, wSum = 0, kSum = 0;

	for (int i = 0; i < COUNT; i++)
	{
		cin >> input;
		wUni[i] = input;
	}

	for (int i = 0; i < COUNT; i++)
	{
		cin >> input;
		kUni[i] = input;
	}

	Sort(wUni, COUNT);
	Sort(kUni, COUNT);

	for (int i = 0; i < 3; i++)
	{
		wSum += wUni[i];
		kSum += kUni[i];
	}

	cout << wSum << " " << kSum << endl;

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