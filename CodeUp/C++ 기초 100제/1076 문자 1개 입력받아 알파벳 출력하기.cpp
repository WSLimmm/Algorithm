#include <iostream>
using namespace std;

int main() {
	char n, a = 'a';
	cin >> n;

	do {
		cout << a << " ";
		a = a + 1;
	} while (a <= n);

	return 0;
}