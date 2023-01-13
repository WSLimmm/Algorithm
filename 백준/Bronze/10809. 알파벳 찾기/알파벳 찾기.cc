#include <iostream>
#include <string>
using namespace std;

const int ALPHA = 26;

int main()
{
	string input;
	int alphabet[ALPHA] = { };
	cin >> input;
	
	for (int i = 0; i < ALPHA; i++)
		alphabet[i] = -1;

	for (int x = 0; x < input.length(); x++)
	{
		int i = input[x] - 97;
		for (int j = 0; j < ALPHA; j++)
		{
			if (j == i && alphabet[j] == -1)
				alphabet[j] = x;
		}
	}

	for (int i = 0; i < ALPHA; i++)
		cout << alphabet[i] << " ";

	return 0;
}