#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	long long h, b, c, s;
	double storage;
	cin >> h >> b >> c >> s;

	storage = (h * b * c * s) / 8;	// �� ��������� ����Ʈ(byte)�� ǥ��.
	storage = storage / 1024;		// �� ��������� Ű�ι���Ʈ(KB)�� ǥ��.
	storage = storage / 1024;		// �� ��������� �ް�����Ʈ(MB)�� ǥ��.
	cout << fixed << setprecision(1) << storage << " MB";

	return 0;
}