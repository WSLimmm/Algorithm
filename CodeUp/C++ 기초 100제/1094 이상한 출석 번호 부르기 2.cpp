#include <iostream>
using namespace std;

int main() {
	int n, input, a[10000] = { }; // a[10000] �迭�� ��� ���� 0���� �ʱ�ȭ.
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> input;
		a[i] = input;
	}
	for (int j = n; j > 0; j--) {
		cout << a[j] << " ";
	}

	return 0;
}