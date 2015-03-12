//#include <iostream>
//#include<conio.h>
//using namespace std;
//
//int main()
//{
//	int i = 0;
//	int* tab;
//	cout << "Liczba znakow: ";
//	cin >> i;
//	tab = new int[i];
//
	for (int x = 0; x < i ; x++)
	{
		tab[i] = 0;
	}

	cout << "Wpisz ciag liczb: " << endl;
	for(int x = 0; x < i; x++) 
	{
		cin >> tab[x];
	}
	cout << endl;

	cout << "Liczby Antka: ";
	for (int x = 0; x < i; x++) 
	{
		if (x % 2 == 0)
		{
			cout << tab[x] << " ";
		}
	}
	cout << endl;

	cout << "Liczby Zuzi: ";
	for (int x = 0; x < i; x++) 
	{
		if (x % 2 == 1)
		{
			cout << tab[x] << " ";
		}
	}
	cout << endl;

	getch();

}