#include <iostream>
using namespace std;

const int BURGER = 3;
const int DRINK = 2;

int main()
{
	int burger[BURGER] = { };
	int drink[DRINK] = { };
	int input, burgerMin = 2001, drinkMin = 2001, price;

	for (int i = 0; i < BURGER; i++)
	{
		cin >> input;
		burger[i] = input;
	}

	for (int i = 0; i < DRINK; i++)
	{
		cin >> input;
		drink[i] = input;
	}

	for (int i = 0; i < BURGER; i++)
	{
		if (burgerMin > burger[i])
			burgerMin = burger[i];
	}

	for (int i = 0; i < DRINK; i++)
	{
		if (drinkMin > drink[i])
			drinkMin = drink[i];
	}

	price = (burgerMin + drinkMin) - 50;
	cout << price << endl;

	return 0;
}