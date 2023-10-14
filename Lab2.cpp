#include <iostream>
#include "Dodatkowe.h"

using namespace std;

int szereg(const int& last)
{
	int output = 0;
	int lastS = 0;
	for (int x = 1; x <= last; x++)
	{
		lastS += x;
		output += lastS;
	}

	return output;
}

void zad22()
{
	int a = 0, b = 0;

	cout << "Podaj a i b: ";
	cin >> a >> b;

	for (int x = 0; x < a; x++)
		cout << "*";
	cout << "\n";

	for (int x = 0; x < b; x++)
		cout << "*\n";

	cout << "\n";
	for (int x = 0; x < a; x++)
	{
		for (int y = 0; y < b; y++)
			cout << "*";
		cout << "\n";
	}
	
	cout << "\n\n";

	//obwod prostokata
	//a - wysokosc, b - szerokosc (niestety na odwrot, przez to jak wyglada pisanie w petli
	for (int x = 0; x < b; x++)
		cout << "*";
	cout << "\n";

	for (int x = 1; x < a; x++)
	{
		for (int y = 0; y < b; y++)
		{
			if (y == 0 || y == b - 1)
				cout << "*";
			else
				cout << " ";
		}
		cout << "\n";
	}

	for (int x = 0; x < b; x++)
		cout << "*";
	cout << "\n";
}

void bonus()
{
	int a = 0;
	cout << "Podaj przyprostokatana: ";
	cin >> a;

	//wariant 1
	for (int x = 1; x <= a; x++)
	{
		for (int y = 0; y < x; y++)
			cout << "*";
		cout << "\n";
	}

	cout << "\n\n";

	for (int x = 1; x <= a; x++)
	{
		for (int y = 1; y <= a; y++)
		{
			if (y >= x)
				cout << "*";
			else
				cout << " ";
		}
		cout << "\n";
	}
	cout << "\n";
}

int main()
{
	//dodatkowe();
	int szereg_num = 0;
	cout << "Podaj dla jakiej liczby chcesz policzyc szereg: ";
	cin >> szereg_num;
	cout << "Suma szeregu: " << szereg(szereg_num) << "\n";

	zad22();
	bonus();
}