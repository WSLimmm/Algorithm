#include <iostream>
using namespace std;

int main() {
	int n, input, a[23] = { }; // a[23] �迭�� ��� ���� 0���� �ʱ�ȭ.
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> input;
		a[input - 1] += 1;
	}
	for (int j = 0; j < size(a); j++) {
		cout << a[j] << " ";
	}

	return 0;
}