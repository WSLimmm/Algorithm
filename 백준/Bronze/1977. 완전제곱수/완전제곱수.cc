#include <iostream>
using namespace std;

int main() {
	unsigned long long n, m, total = 0, min = 999999, pow;
	cin >> m >> n;

	for (int i = 0; i <= n; i++) {
		pow = i * i;
		if (pow >= m && pow <= n) {
			total = total + pow;

			if (min > pow) {
				min = pow;
			}
		}
	}
	if (total == 0) {
		cout << "-1";
		return 0;
	}

	cout << total << "\n" << min;

	return 0;
}