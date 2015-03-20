#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	unsigned int k;
	unsigned int i;
	unsigned int waga = 0;

		cin >> k;

	unsigned int t[k + 1];

	for (i = 0; i <= k; i++)
	{
		cin >> t[i];
	}

	for (i = 0; i <= k; i++)
	{
		waga = waga + t[i] * pow(2, i);
		cout << waga + 1 << endl;
	}
}
