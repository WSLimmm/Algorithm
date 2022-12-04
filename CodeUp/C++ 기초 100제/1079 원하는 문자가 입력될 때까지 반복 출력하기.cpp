#include <iostream>
using namespace std;

int main() {
	char n;

	while (true) {
		cin >> n;
		cout << n << endl;
		if (n == 'q') {
			break;
		}
	}

	return 0;
}