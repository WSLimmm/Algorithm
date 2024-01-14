#include <iostream>
using namespace std;

int main()
{
	int a, b, c, temp, resultArray[10] = { };
	long long result;
	cin >> a >> b >> c;
	result = a * b * c;

	while (result != 0)
	{
		temp = result % 10;
		switch (temp)
		{
		case 0:
			resultArray[0]++;
			break;
		case 1:
			resultArray[1]++;
			break;
		case 2:
			resultArray[2]++;
			break;
		case 3:
			resultArray[3]++;
			break;
		case 4:
			resultArray[4]++;
			break;
		case 5:
			resultArray[5]++;
			break;
		case 6:
			resultArray[6]++;
			break;
		case 7:
			resultArray[7]++;
			break;
		case 8:
			resultArray[8]++;
			break;
		case 9:
			resultArray[9]++;
			break;
		}
		result /= 10;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << resultArray[i] << endl;
	}

	return 0;
}