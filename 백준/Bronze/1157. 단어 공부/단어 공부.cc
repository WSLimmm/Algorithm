#include <iostream>
using namespace std;

const int COUNT = 26;

int main()
{
	string str;
	int arr[COUNT] = { };
	cin >> str;

	int max = -1;
	int maxIndex;
	for (int i = 0; i < str.length(); i++)
	{
		str[i] = toupper(str[i]);
		int num = str[i] - 65;
		arr[num]++;
		
		if (max < arr[num])
		{
			max = arr[num];
			maxIndex = num;
		}
	}

	int count = 0;
	for (int i = 0; i < COUNT; i++)
	{
		if (max == arr[i])
			count++;
	}

	if (count >= 2)
		cout << "?";
	else
		cout << (char)(maxIndex + 65);

	return 0;
}