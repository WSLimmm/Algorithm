#include <iostream>
using namespace std;

bool Check(int input);

int main()
{
	int n, input, count = 0;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> input;
		if (input <= 1)
			continue;

		if (Check(input))
			count++;
	}
	cout << count;

	return 0;
}

bool Check(int input)
{
	if (input == 2)
		return true;

	for (int i = 2; i < input; i++)
	{
		if (input % i == 0)
			return false;
	}

	return true;
}