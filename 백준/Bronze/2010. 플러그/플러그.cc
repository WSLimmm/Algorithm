#include <iostream>
using namespace std;

int main()
{
	int n, multitab, result = 0;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> multitab;
		result += multitab;
	}
	
	result -= (n - 1);
	cout << result;

	return 0;
}