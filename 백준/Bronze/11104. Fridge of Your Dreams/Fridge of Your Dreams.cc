#include <iostream>
#include <string>
using namespace std;

int main() {
	int n, total;
	string num;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> num;
		total = stoi(num, nullptr, 2);
		cout << total << "\n";
	}

	return 0;
}