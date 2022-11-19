#include <iostream>
using namespace std;

int main() {
	long long n;
	int count = 0;
	cin >> n;

	while (n > 1) {
		if (n % 2 == 0) {
			n = n / 2;
		}
		else {
			n = n + 1;
		}
		count++;
	}
	cout << count;

	return 0;
}