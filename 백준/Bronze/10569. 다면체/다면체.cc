#include <iostream>
using namespace std;

int main()
{
	int t, v, e;
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> v >> e;
		cout << (e - v + 2) << endl;
	}

	return 0;
}