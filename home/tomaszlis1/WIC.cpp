#include<iostream>
#include<conio.h>
using namespace std;
 

 
int main()
{
    int len;
	int* tab;
	cout<<"Podaj ilosc liczb: ";
	cin >> len ;
	tab = new int[len];
    cout<<"Podaj "<< len << " liczby: ";
    for (int x = 0; x < len ; x++)
	{
		cin >> tab[x];
	}

	int max = tab[0];
	int second_max = 0;

	for (int x = 1; x < len ; x++)
	{
		if(tab[x] > max)
		{
			second_max = max;
			max = tab[x];
		}
		else if (tab[x] > second_max && tab[x] < max)
		{
			second_max = tab[x];
		}
	}
 
    cout<< "Druga najwieksza liczba wynosi: " << second_max <<endl;
	getch();
 
}