#include <iostream>
using namespace std;

int main()
{
	int n, v, arr[201] = { }, input;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> input;
		if (input < 0)
			input = ((-1) * input) + 100;
		arr[input]++;
	}

	cin >> v;
	if (v < 0)
		v = ((-1) * v) + 100;

	cout << arr[v] << endl;

	return 0;
}