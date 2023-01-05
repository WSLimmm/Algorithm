#include <iostream>
#include <cmath>
using namespace std;

int Change(int num);

int main()
{
	int a, b;
	cin >> a >> b;

	a = Change(a);
	b = Change(b);

	if (a > b)
		cout << a << endl;
	else if (a < b)
		cout << b << endl;

	return 0;
}

int Change(int num)
{
	int temp = 0;
	
	for (int i = 2; i >= 0; i--)
	{
		temp += (num % 10) * pow(10, i);
		num /= 10;
	}

	return temp;
}