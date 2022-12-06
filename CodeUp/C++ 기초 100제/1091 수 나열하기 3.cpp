#include <iostream>
using namespace std;

int main() {
	long long a, m, d, n, i = 0;
	cin >> a >> m >> d >> n;

	while (i < n - 1) {
		a = a * m;
		a = a + d;
		i++;
	}
	cout << a;

	return 0;
}