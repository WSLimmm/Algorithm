#include <iostream>
using namespace std;

int main() {
	int n, input, a[10000] = { }; // a[10000] 배열의 모든 값을 0으로 초기화.
	int min = 999;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> input;
		a[i] = input;

		if (min > input) {
			min = input;
		}
	}
	cout << min;

	return 0;
}