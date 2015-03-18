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

	int nwd = tab[0];
	for (int x = 0; x < len-1 ; x++)
	{
	    while(nwd != tab[x+1])
		{
		   if(nwd > tab[x+1])
		   {
			   nwd = nwd - tab[x+1];
		   }
		   else
		   {
			   tab[x+1] = tab[x+1] - nwd;
		   }
		}
	}
 
    cout<< "NWD tych liczb wynosi: " << nwd <<endl;
	getch();
 
}