#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
	int len, value, first, last;
	int* tab;

	first = -1;
	last = -1;

	cin >> len >> value;
	tab = new int[len];

	for (int x = 0; x < len ; x++)
	{
		tab[len] = 0;
	}

	cout << "Wpisz ciag liczb: " << endl;
	for (int x = 0; x < len ; x++)
	{
		cin >> tab[x];
	}

	for (int x = 0; x < len ; x++)
	{
		if (tab[x] == value)
		{
			first = x + 1;
			break;
		}
	}

	for (int x = len - 1; x >= 0; x--) 
	{
		if (tab[x] == value)
		{
			last = x + 1;
			break;
		}
	}
	cout << first << " " << last;

	getch();

}