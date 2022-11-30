#include <iostream>
using namespace std;

int main() {
	int k, n, s, q, p;
	cin >> k;

	for (int i = 0; i < k; i++) {
		cin >> s;
		cin >> n;

		for (int j = 0; j < n; j++) {
			cin >> q >> p;
			s = s + (q * p);
		}
		cout << s << endl;
	}

	return 0;
}