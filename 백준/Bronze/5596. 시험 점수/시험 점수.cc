#include <iostream>
using namespace std;

int main()
{
	int input, minSum = 0, manSum = 0;

	for (int i = 0; i < 4; i++)
	{
		cin >> input;
		minSum += input;
	}

	for (int i = 0; i < 4; i++)
	{
		cin >> input;
		manSum += input;
	}

	if (minSum >= manSum)
		cout << minSum << endl;
	else
		cout << manSum << endl;

	return 0;
}