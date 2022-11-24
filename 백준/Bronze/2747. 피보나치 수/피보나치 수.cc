#include <iostream>
using namespace std;

int Fibonacci(int n) {
	int num[45] = { 0, 1, };
	
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