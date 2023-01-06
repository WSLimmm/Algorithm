#include <iostream>
using namespace std;

int main()
{
	int arr[43] = { }, input, count = 0;

	for (int i = 0; i < 10; i++)
	{
		cin >> input;
		input = input % 42;
		arr[input]++;
	}

	for (int i = 0; i <= sizeof(arr) / sizeof(int); i++)
	{
		if (arr[i] > 0)
			count++;
	}

	cout << count << endl;

	return 0;
}