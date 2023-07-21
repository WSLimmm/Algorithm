#include <iostream>
using namespace std;

int main()
{
	unsigned long long X, a, result = 0;
	unsigned int N, b;

	cin >> X;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> a >> b;
		result += a * b;
	}

	if (X == result)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;

	return 0;
}