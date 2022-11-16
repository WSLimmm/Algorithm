#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int a[3], mid;

	for (int i = 0; i < 3; i++) {
		cin >> a[i];
	}
	sort(a, a + 3);
	mid = a[1];
	cout << mid;

	return 0;
}