#include <iostream>
using namespace std;

int main()
{
	int n, k, i, count = 0;
	cin >> n >> k;

	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			count++;
		}
		if (count == k)
		{
			break;
		}
	}
	if (k > count)
		cout << "0" << endl;
	else
		cout << i << endl;

	return 0;
}