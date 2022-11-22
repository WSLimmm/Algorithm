#include <iostream>
using namespace std;

int divisor (int x, int y) {		// 최대공약수
	int z = x % y;

	while (z != 0) {
		x = y;
		y = z;
		z = x % y;
	}
	return y;
}

int multiple(int x, int y) {		// 최소공배수
	return (x * y) / divisor(x, y);
}

int main() {
	int a, b, div, mul;	// div 최대공약수  mul 최소공배수
	cin >> a >> b;

	div = divisor(a, b);
	mul = multiple(a, b);

	cout << div << "\n" << mul;
	
	return 0;
}