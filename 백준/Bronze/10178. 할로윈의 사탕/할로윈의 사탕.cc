#include <iostream>
using namespace std;

int main()
{
	int n, c, v;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> c >> v;
		cout << "You get " << c / v << " piece(s) and your dad gets " << c % v << " piece(s)." << endl;
	}

	return 0;
}