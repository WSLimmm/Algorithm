#include <iostream>;
using namespace std;

int main() {
	int num = 1, a, b, c, d, e;

	while (true) {
		cin >> a;
		if (a == 0) {
			break;
		}
		else {
			b = 3 * a;

			if (b % 2 == 0) {
				cout << num << ". even ";
				c = b / 2;
			}
			else {
				cout << num << ". odd ";
				c = (b + 1) / 2;
			}
			d = 3 * c;
			e = d / 9;
			cout << e << "\n";
		}
		num++;
	}
	return 0;
}