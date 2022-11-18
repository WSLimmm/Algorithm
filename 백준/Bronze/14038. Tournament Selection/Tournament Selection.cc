#include <iostream>
using namespace std;

int main() {
	int wincount = 0;
	char input;

	for (int i = 0; i < 6; i++) {
		cin >> input;

		if (input == 'W') {
			wincount = wincount + 1;
		}
	}
	switch (wincount) {
	case 6:
	case 5:
		cout << "1";
		break;
	case 4:
	case 3:
		cout << "2";
		break;
	case 2:
	case 1:
		cout << "3";
		break;
	default:
		cout << "-1";
		break;
	}

	return 0;
}