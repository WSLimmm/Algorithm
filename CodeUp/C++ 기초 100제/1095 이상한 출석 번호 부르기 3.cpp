#include <iostream>
using namespace std;

int main() {
	int n, input, a[10000] = { }; // a[10000] �迭�� ��� ���� 0���� �ʱ�ȭ.
	int min = 999;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> input;
		a[i] = input;

		if (min > input) {
			min = input;
		}
	}
	cout << min;

	return 0;
}