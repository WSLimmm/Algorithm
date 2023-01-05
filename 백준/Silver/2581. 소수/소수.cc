#include <iostream>
using namespace std;

bool Check(int input);

int main()
{
	int num, start, end, min = 10001, sum = 0;
	cin >> start >> end;

	for (int num = start; num <= end; num++)
	{
		if (!Check(num))
			continue;
		
		sum += num;
		if (num < min)
			min = num;
	}

	if (sum == 0)
		cout << "-1" << endl;
	else
		cout << sum << "\n" << min;

	return 0;
}

bool Check(int input)
{
	if (input <= 1)
		return false;
	if (input == 2)
		return true;

	for (int i = 2; i < input; i++)
	{
		if (input % i == 0)
			return false;
	}

	return true;
}