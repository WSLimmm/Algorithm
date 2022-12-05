#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
using namespace std;

int main() {
	int n;
	scanf("%X", &n);

	for (int i = 1; i < 16; i++) {
		printf("%X*%X=%X\n", n, i, n * i);
	}

	return 0;
}