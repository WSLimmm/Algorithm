#include <iostream>
using namespace std;

int main() {
	int a[20][20] = { };
	int n, x, y;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		a[x][y] = 1;
	}

	for (int i = 1; i < 20; i++) {
		for (int j = 1; j < 20; j++) {
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}

	return 0;
}