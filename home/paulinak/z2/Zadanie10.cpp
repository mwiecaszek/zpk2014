#include <iostream>
using namespace std;
	
	
int najwieksza_mniejsza(int t[], int m, int x)
	{
	int wice = 0;
	
	for(int i = 0; i < x; i ++)
	{
		if(t[i] < m && t[i] > wice)
		wice = t[i];
	}
		return wice;
	}
	
	int main()	
	{
		int y;
		int m = 0;
		int wice;
			cin >> y;
	
		int t[y];
	
	for(int i = 0; i < y; i++)
	{
		cin >> t[i];
		
		if(t[i] > m)
			m = t[i];
	}

	wice = najwieksza_mniejsza(t, m, y);
		
	cout << wice << endl;
}
