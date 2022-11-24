#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
using namespace std;

int main() {
	int year, month, day;
	scanf("%d.%d.%d", &year, &month, &day);
	printf("%02d-%02d-%04d", day, month, year);

	return 0;
}