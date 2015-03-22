#include<iostream>
using namespace std;
 
int NWD(int a, int b) {
    int r = a % b;
    while (r != 0) {
        a = b;
        b = r;
        r = a % b;
    }
    return b;
}
int main()
{
	int n, x, i;
	cin >> n;
	int tablica[n];
	for(int i=0;i<n;i++){
	cin >> tablica[i];
	}
	for(int j=1;j<n;j++){
	if(j==1){
	x=NWD(tablica[0],tablica[1]);
	}
	else
	x=NWD(x,tablica[j]);
	}
	cout << x;
}
