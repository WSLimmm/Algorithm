#include <iostream>
using namespace std;

const long long COUNT = 100000;
long long arr[COUNT] = { };

int main()
{
	long long input, k, sum = 0;
	int num = 0;
	cin >> k;

	for (int i = 0; i < k; i++)
	{
		cin >> input;
		if (input == 0 && num > 0)
		{
			arr[num] = 0;
			num--;
		}
			
		else if (input > 0)
		{
			arr[num] = input;
			num++;
		}
	}

	for (int j = 0; j < num; j++)
		sum += arr[j];
	
	cout << sum;

	return 0;
}