#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int a, b, c, sum;
	float average;
	cin >> a >> b >> c;

	sum = a + b + c;
	average = float(sum) / 3;

	cout << sum << endl;
	cout << fixed << setprecision(1) << average << endl;

	return 0;
}