#include <iostream>
using namespace std;

int Rev(int num);

int main()
{
	int x, y;
	cin >> x >> y;

	int result = Rev(Rev(x) + Rev(y));
	cout << result;

	return 0;
}

int Rev(int num)
{
	int result = 0;

	int i = 0;
	while (num != 0)
	{
		if (result == 0)
			result += num % 10;
		else
		{
			result *= 10;
			result += num % 10;
		}

		num /= 10;
		i++;
	}

	return result;
}