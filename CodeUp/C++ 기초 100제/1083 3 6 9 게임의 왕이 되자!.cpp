#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		if (i % 10 == 3 || i % 10 == 6 || i % 10 == 9) {
			cout << "X ";
		}
		else {
			cout << i << " ";
		}
	}

	return 0;
}