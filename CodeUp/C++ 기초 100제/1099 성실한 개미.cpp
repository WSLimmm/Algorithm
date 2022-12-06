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
		if (a[x][y] == 2) {	// 맨 처음 a[2][2]가 2일 때
			a[x][y] = 9;
			break;
		}
		else {
			a[x][y] = 9;
		}

		if (a[x][y + 1] == 1) {
			if (a[x + 1][y] == 1) {		// 더이상 이동할 수 없을 때
				break;
			}
			else if (a[x + 1][y] == 0) {
				a[x + 1][y] = 9;
				x = x + 1;
			}
			else {
				a[x + 1][y] = 9;		// 아래쪽에서 2를 만났을 때
				break;
			}
		}
		else if (a[x][y + 1] == 0) {
			a[x][y + 1] = 9;
			y = y + 1;
		}
		else {				// 오른쪽에서 2를 만났을 때
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