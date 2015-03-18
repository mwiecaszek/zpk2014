#include<iostream>
#include<conio.h>
using namespace std;
 

 
int main()
{
    int len;
	int* tab;
	int* tab_oc;
	cout<<"Podaj liczbe ocen: ";
	cin >> len ;
	tab = new int[len];
	tab_oc = new int[5];
    cout<<"Podaj "<< len << " ocen: ";
    for (int x = 0; x < len ; x++)
	{
		cin >> tab[x];
	}

	for (int x = 0; x < len ; x++)
	{
		tab_oc[x] = 0;
	}


	for (int x = 0; x < len ; x++)
	{
		tab_oc[tab[x]]++;
	}
	
	for (int x = 0; x < 6 ; x++)
	{
		cout << tab_oc[x] << " ";
	}
	getch();
 
}