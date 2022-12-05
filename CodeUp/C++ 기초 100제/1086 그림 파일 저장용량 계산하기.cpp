#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	long long w, h, b;
	double storage;
	cin >> w >> h >> b;

	storage = (w * h * b) / 8;		// 총 저장공간을 바이트(byte)로 표현.
	storage = storage / 1024;		// 총 저장공간을 키로바이트(KB)로 표현.
	storage = storage / 1024;		// 총 저장공간을 메가바이트(MB)로 표현.
	cout << fixed << setprecision(2) << storage << " MB";

	return 0;
}