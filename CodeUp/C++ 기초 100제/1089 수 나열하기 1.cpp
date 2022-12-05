#include <iostream>
using namespace std;

int main() {
	int a, d, n, i = 0;
	cin >> a >> d >> n;

	while (i < n - 1) {
		a = a + d;
		i++;
	}
	cout << a;

	return 0;
}