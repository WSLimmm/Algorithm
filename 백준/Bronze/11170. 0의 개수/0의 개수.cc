#include <iostream>
using namespace std;

int main()
{
	int n, first, last;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int count = 0;
		cin >> first >> last;

		for (int j = first; j <= last; j++)
		{
			int num = j;
			if (num == 0)
				count++;
			
			while (num != 0 && num >= 10)
			{
				if (num % 10 == 0)
					count++;

				num /= 10;
			}
		}

		cout << count << endl;
	}

	return 0;
}