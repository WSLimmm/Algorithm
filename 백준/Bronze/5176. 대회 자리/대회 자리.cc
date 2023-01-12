#include <iostream>
using namespace std;

const int COUNT = 500;

int main()
{
	int k, p, m, input;
	cin >> k;

	for (int i = 0; i < k; i++)
	{
		int arr[COUNT] = { };
		int count = 0;
		cin >> p >> m;

		for (int j = 0; j < p; j++)
		{
			cin >> input;
			if (arr[input - 1] == 0)
				arr[input - 1]++;
			else
				count++;
		}
		cout << count << endl;
	}

	return 0;
}