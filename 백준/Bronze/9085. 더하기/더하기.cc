#include <iostream>
using namespace std;

int main()
{
	int x, y, input, sum;
	cin >> x;

	for (int i = 0; i < x; i++)
	{
		cin >> y;
		sum = 0;

		for (int j = 0; j < y; j++)
		{
			cin >> input;
			sum = sum + input;
		}
		cout << sum << endl;
	}

	return 0;
}