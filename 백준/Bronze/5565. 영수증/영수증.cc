#include <iostream>
using namespace std;

int main() {
	int total, a[10], sum = 0;
	cin >> total;

	for (int i = 0; i < size(a) - 1; i++) {
		cin >> a[i];
		sum = sum + a[i];
	}
	a[9] = total - sum;
	cout << a[9];

	return 0;
}