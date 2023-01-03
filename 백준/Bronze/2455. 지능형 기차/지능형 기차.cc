#include <iostream>
using namespace std;

int main()
{
	int out, in, sum = 0, max = -999;

	for (int i = 0; i < 4; i++)
	{
		cin >> out >> in;
		sum += in - out;
		if (max < sum)
			max = sum;
	}
	cout << max;
	
	return 0;
}