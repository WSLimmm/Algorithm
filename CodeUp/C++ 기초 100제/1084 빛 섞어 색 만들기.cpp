#include <iostream>
using namespace std;

int main() {
	int a, b, c, count = 0;
	cin >> a >> b >> c;

	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			for (int k = 0; k < c; k++) {
				cout << i << " " << j << " " << k << "\n";
				count++;
			}
		}
	}
	cout << count;

	return 0;
}