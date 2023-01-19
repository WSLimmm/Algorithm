#include <iostream>
using namespace std;

int main()
{
	int n;
	string str1, str2;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> str1 >> str2;

		cout << "Distances: ";
		for (int j = 0; j < str1.length(); j++)
		{
			int distance;
			if (str2[j] >= str1[j])
				distance = str2[j] - str1[j];
			else
				distance = (str2[j] + 26) - str1[j];

			cout << distance << " ";
		}

		cout << endl;
	}

	return 0;
}