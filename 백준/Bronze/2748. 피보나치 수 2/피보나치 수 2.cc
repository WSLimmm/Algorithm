#include <iostream>
using namespace std;

long long Fibonacci(int n) {
	long long num[90] = { 0, 1, };

	for (int i = 2; i <= n; i++) {
		num[i] = num[i - 1] + num[i - 2];
	}

	return num[n];
}

int main() {
	int a;
	cin >> a;
	cout << Fibonacci(a);

	return 0;
}