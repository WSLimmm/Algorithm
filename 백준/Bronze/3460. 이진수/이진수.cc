#include <iostream>
using namespace std;

int main()
{
	long long t, n;
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		int j = 0;
		cin >> n;

		while (n != 0)
		{
			if (n % 2 == 1)
				cout << j << " ";
			n /= 2;
			j++;
		}
		cout << endl;
	}

	return 0;
}