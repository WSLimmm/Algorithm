#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	a = (a < b ? a : b) < c ? (a < b ? a : b) : c;
	cout << a;

	return 0;
}