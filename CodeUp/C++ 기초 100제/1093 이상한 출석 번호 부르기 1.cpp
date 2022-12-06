#include <iostream>
using namespace std;

int main() {
	int n, input, a[23] = { }; // a[23] 배열의 모든 값을 0으로 초기화.
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> input;
		a[input - 1] += 1;
	}
	for (int j = 0; j < size(a); j++) {
		cout << a[j] << " ";
	}

	return 0;
}