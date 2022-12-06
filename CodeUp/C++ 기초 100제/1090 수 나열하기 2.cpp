#include <iostream>
using namespace std;

int main() {
	long long a, r, n, i = 0;
	cin >> a >> r >> n;

	while (i < n - 1) {
		a = a * r;
		i++;
	}
	cout << a;

	return 0;
}