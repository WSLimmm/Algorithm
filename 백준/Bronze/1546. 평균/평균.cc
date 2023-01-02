#include <iostream>
using namespace std;

int main()
{
	int n;
	float score, result = 0, max = -999;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> score;
		if (score > max)
			max = score;
		result += score;
	}

	result = ((result / max) * 100) / n;
	cout << result;

	return 0;
}