#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n, a, total = 0;
	cin >> n;

	while (n > 0) {
		a = pow(n % 10, 5);
		total = total + a;
		n = n / 10;
	}
	cout << total;

	return 0;
}