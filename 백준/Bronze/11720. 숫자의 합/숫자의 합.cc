#include <iostream>
using namespace std;


int main()
{
	int n, sum = 0;
	char arr;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> arr;
		sum += (arr - 48);
	}
	cout << sum;

	return 0;
}