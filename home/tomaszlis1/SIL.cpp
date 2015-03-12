//#include <iostream>
#include<conio.h>
using namespace std;

int main1() 
{
    int i;
	int out = 1;
	cout << "Wpisz liczbe: ";
	cin >> i;

	if (i >= 0 && i <=12)
	{
		if (i==0)
		{
			out = 1;
		}
		else
		{
			for(int x=1; x <= i; x++)
			{
				out *= x;
			}
		}
		cout << "Silnia wynosi: " << out;
	}
	else
	{
		cout << "Podaj liczbe z zakresu 0 - 12.";
	}

	getch();
}