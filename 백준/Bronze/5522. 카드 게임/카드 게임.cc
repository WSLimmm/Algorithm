#include <iostream>
using namespace std;

int main() {
	int a, sum = 0;

	for (int i = 1; i <= 5; i++) {
		cin >> a;
		sum = sum + a;
	}
	cout << sum;

	return 0;
}