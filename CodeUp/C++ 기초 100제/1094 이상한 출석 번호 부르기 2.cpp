#include <iostream>
using namespace std;

int main() {
	int n, input, a[10000] = { }; // a[10000] 배열의 모든 값을 0으로 초기화.
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> input;
		a[i] = input;
	}
	for (int j = n; j > 0; j--) {
		cout << a[j] << " ";
	}

	return 0;
}