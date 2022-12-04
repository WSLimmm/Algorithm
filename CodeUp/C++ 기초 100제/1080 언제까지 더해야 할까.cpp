#include <iostream>
using namespace std;

int main() {
	int n, total = 0, i = 0;
	cin >> n;

	while (total < n) {
		i++;
		total = total + i;
	}
	cout << i;

	return 0;
}