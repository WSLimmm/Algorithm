#include <iostream>
using namespace std;

int main() {
	long long n, p, price, max_price;
	string name, max_name;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> p;
		max_price = 0;

		for (int j = 0; j < p; j++) {
			cin >> price >> name;

			if (max_price < price) {
				max_price = price;
				max_name = name;
			}
		}
		cout << max_name << "\n";
	}
	
	return 0;
}