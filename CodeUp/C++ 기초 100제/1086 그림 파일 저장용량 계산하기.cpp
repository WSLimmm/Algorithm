#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	long long w, h, b;
	double storage;
	cin >> w >> h >> b;

	storage = (w * h * b) / 8;		// �� ��������� ����Ʈ(byte)�� ǥ��.
	storage = storage / 1024;		// �� ��������� Ű�ι���Ʈ(KB)�� ǥ��.
	storage = storage / 1024;		// �� ��������� �ް�����Ʈ(MB)�� ǥ��.
	cout << fixed << setprecision(2) << storage << " MB";

	return 0;
}