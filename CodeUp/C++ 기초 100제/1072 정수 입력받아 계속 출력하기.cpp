#include <iostream>
using namespace std;

int main() {
	int n, x;
	cin >> n;

play:
	cin >> x;
	cout << x << endl;
	if (n > 1) {
		n--;
		goto play;
	}

	return 0;
}