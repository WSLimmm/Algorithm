#include <iostream>
using namespace std;

const int ALPHA = 26;

int main()
{
	string str;
	int alphabet[ALPHA] = { };
	cin >> str;

	for (int i = 0; i < str.length(); i++)
	{
		int num = str[i] - 97;
		alphabet[num]++;
	}

	for (int i = 0; i < ALPHA; i++)
		cout << alphabet[i] << " ";

	return 0;
}