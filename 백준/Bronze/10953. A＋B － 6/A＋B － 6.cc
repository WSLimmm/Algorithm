#include <iostream>
#include <stdio.h>
#pragma warning(disable:4996)
using namespace std;

int main()
{
	int n, a, b;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		scanf("%d, %d", &a, &b);
		cout << a + b << endl;
	}

	return 0;
}