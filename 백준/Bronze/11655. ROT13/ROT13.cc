#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	getline(cin, str);

	for (int i = 0; i < str.length(); i++)
	{
		if ((str[i] >= 78 && str[i] <= 90) || (str[i] >= 110 && str[i] <= 122))
			str[i] -= 13;
		else if ((str[i] >= 65 && str[i] <= 77) || (str[i] >= 97 && str[i] <= 109))
			str[i] = (str[i] + 26) - 13;

		cout << str[i];
	}

	return 0;
}