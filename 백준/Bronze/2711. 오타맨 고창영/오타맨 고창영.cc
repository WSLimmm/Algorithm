#include <iostream>
#include <string>
using namespace std;

int main()
{
	int t, n;
	string str;

	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> n >> str;
		str.erase(str.begin() + (n - 1));
		cout << str << endl;
	}

	return 0;
}