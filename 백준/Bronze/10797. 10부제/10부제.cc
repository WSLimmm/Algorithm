#include <iostream>
using namespace std;

int main()
{
	int d, count = 0;
	int car[5] = { };
	cin >> d;

	for (int i = 0; i < 5; i++)
	{
		cin >> car[i];
		if (car[i] % 10 == d)
			count++;
	}
	cout << count << endl;

	return 0;
}