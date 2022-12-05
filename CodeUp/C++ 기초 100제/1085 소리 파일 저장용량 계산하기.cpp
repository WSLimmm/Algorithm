#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	long long h, b, c, s;
	double storage;
	cin >> h >> b >> c >> s;

	storage = (h * b * c * s) / 8;	// 총 저장공간을 바이트(byte)로 표현.
	storage = storage / 1024;		// 총 저장공간을 키로바이트(KB)로 표현.
	storage = storage / 1024;		// 총 저장공간을 메가바이트(MB)로 표현.
	cout << fixed << setprecision(1) << storage << " MB";

	return 0;
}