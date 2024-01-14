#include <iostream>
using namespace std;

int main()
{
	int input, average = 0, array[1001] = { }, most = 0, mostIndex;

	for (int i = 0; i < 10; i++)
	{
		cin >> input;
		average += input;
		array[input]++;

		if (array[input] > most)
		{
			most = array[input];
			mostIndex = input;
		}
	}
	
	cout << average / 10 << "\n" << mostIndex << endl;

	return 0;
}