#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
using namespace std;

int main() {
	int a, b;
	scanf("%d-%d", &a, &b);
	printf("%06d%07d", a, b);

	return 0;
}