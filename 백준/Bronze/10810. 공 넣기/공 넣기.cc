#include <iostream>
using namespace std;

int arr[101] = { };

int main()
{
	int N, M, i, j, k;
	cin >> N >> M;

	for (int x = 0; x < M; x++)
	{
		cin >> i >> j >> k;
		for (int y = i; y <= j; y++)
			arr[y] = k;
	}

	for (int x = 1; x <= N; x++)
		cout << arr[x] << " ";

	return 0;
}