#include <iostream>
using namespace std;

int a[100][100] = { };
int input;

int main() {

	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10; j++) {
			cin >> input;
			a[i][j] = input;
		}
	}

	int x = 2, y = 2;

	while (true) {
		if (a[x][y] == 2) {	// �� ó�� a[2][2]�� 2�� ��
			a[x][y] = 9;
			break;
		}
		else {
			a[x][y] = 9;
		}

		if (a[x][y + 1] == 1) {
			if (a[x + 1][y] == 1) {		// ���̻� �̵��� �� ���� ��
				break;
			}
			else if (a[x + 1][y] == 0) {
				a[x + 1][y] = 9;
				x = x + 1;
			}
			else {
				a[x + 1][y] = 9;		// �Ʒ��ʿ��� 2�� ������ ��
				break;
			}
		}
		else if (a[x][y + 1] == 0) {
			a[x][y + 1] = 9;
			y = y + 1;
		}
		else {				// �����ʿ��� 2�� ������ ��
			a[x][y + 1] = 9;
			break;
		}
	}

	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10; j++) {
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}

	return 0;
}