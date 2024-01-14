#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	cin >> str;
	int size = str.length();

	for (int i = 0; i < size; i++)
	{
		cout << str[i];
		if ((i + 1) % 10 == 0 && i != 0)
			cout << endl;
	}

	return 0;
}