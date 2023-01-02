#include <iostream>
using namespace std;

int main()
{
	int n, result = 0, add = 1;
	int array[100] = { };
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		cin >> array[i];
		if (array[i] == 1)
		{
			result += add;
			add++;
		}
		else if (array[i] == 0)
		{
			add = 1;
		}
	}

	cout << result;

	return 0;
}