#include <iostream>
using namespace std;

int main()
{
	char input[100];
	cin >> input;

	int i = 0;
	cout << input[i];

	while (input[i] != '\0')
	{
		if (input[i] == '-')
			cout << input[i + 1];

		i++;
	}

	return 0;
}