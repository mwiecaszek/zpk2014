#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int i;
	int j=0;
	cout << "Podaj liczbe: ";
	cin >> i;

	if (i >= 2 && i <=1000000)
	{
		for(int x=1; x<=i; x++)
		{
			if(i % x == 0)
			{
				j++;
			}
		}
		if(j > 2)
		{
			cout << "zlozona" << endl;
		}
		else
		{
			cout << "pierwsza" << endl;
		}
	}
	getch();
}