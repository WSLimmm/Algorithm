#include <iostream>
#include <string>
using namespace std;

int main()
{
	string n;
	int m;
	cin >> n >> m;

	int num = stoi(n);
	string str = "";
	
	for (int i = 0; i < num; i++)
		str += n;
	
	if (str.length() > m)
		cout << str.substr(0, m);
	else
		cout << str;

	return 0;
}