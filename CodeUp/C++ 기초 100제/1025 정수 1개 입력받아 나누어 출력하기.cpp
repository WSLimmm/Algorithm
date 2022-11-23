#include <iostream>
using namespace std;

int main() {
	int input, a[5], k = 10000;
	cin >> input;

	for (int i = 0; i < 5; i++) {
		a[i] = input % 10;
		input = input / 10;
	}
	for (int i = 4; i >= 0; i--) {
		cout << "[" << a[i] * k << "]" << endl;
		k = k / 10;
	}

	return 0;
}