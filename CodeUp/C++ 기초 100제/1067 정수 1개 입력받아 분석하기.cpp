#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	if (n > 0) {
		cout << "plus" << endl;
		if (n % 2 == 0) {
			cout << "even" << endl;
		}
		else {
			cout << "odd" << endl;
		}
	}
	else {
		cout << "minus" << endl;
		if (n % 2 == 0) {
			cout << "even" << endl;
		}
		else {
			cout << "odd" << endl;
		}
	}

	return 0;
}