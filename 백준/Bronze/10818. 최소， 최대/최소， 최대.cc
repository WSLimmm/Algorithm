#include <iostream>
using namespace std;

int main()
{
	int n, input, max = -1000001, min = 1000001;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> input;
		if (input > max)
			max = input;
		if (input < min)
			min = input;
	}
	cout << min << " " << max << endl;

	return 0;
}