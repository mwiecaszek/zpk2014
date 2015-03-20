#include<iostream>
#include<cstdlib>
using namespace std;

void Sort(int tab[], int n)
{
	int y;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(tab[j] > tab[j+1]){
				y = tab[j];
				tab[j] = tab[j+1];
				tab[j+1] = y;
			}
        }
    }
}
int main()
{
	int n, x;
	cin >> n;
	int *tab;
	tab = new int [n];
	for(int i=0;i<n;i++){
	cin >> tab[i];
	}
	Sort(tab,n);
	x=tab[n-2];
	cout << x;
}
