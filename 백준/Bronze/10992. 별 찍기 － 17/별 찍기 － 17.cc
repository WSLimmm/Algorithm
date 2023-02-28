#include <iostream>
using namespace std;

int main()
{
	int input;
	cin >> input;
	for (int i = 1; i < input; i++)
	{
		for (int j = 0; j < input - i; j++)
			cout << " ";

		cout << "*";

		for (int j = 1; j < (i * 2) - 2; j++)
			cout << " ";

		if (i != 1)
			cout << "*";

		cout << endl;
	}

	for (int i = 0; i < (input * 2) - 1; i++)
		cout << "*";

	return 0;
}