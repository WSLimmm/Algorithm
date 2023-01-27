#include <iostream>
using namespace std;

const int COUNT = 31;

int main()
{
	int arr[COUNT] = { };
	
	for (int i = 0; i < 28; i++)
	{
		int input;
		cin >> input;
		arr[input]++;
	}

	for (int i = 1; i < COUNT; i++)
	{
		if (arr[i] == 0)
			cout << i << endl;
	}

	return 0;
}