#include <iostream>
using namespace std;

int main()
{
	int N, arr[10] = { 0, };

	cin >> N;
	while (N != 0)
	{
		arr[N % 10]++;
		N /= 10;
	}

	int max_ = -1;
	for (int i = 0; i < 10; i++)
	{
		if (i == 6 || i == 9)
			continue;

		if (max_ <= arr[i])
			max_ = arr[i];
	}
	
	max_ = max(max_, (arr[6] + arr[9] + 1) / 2);
	cout << max_;

	return 0;
}