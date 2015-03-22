#include <iostream>
using namespace std;

int main()
{
    int n, x, h, j;
    cin >> n >> x;
    int tab[n];
	h=0;
	j=n-1;
    for (int i = 0; i < n; i++){
        cin >> tab[i];
    }
    while(h<n){
        if(tab[h]==x){
        cout << h+1 << " ";
		break;
        }
		h++;
	}
    while(j>=0){
        if(tab[j]==x){
        cout <<j+1;
		break;
        }
		j--;
    }
	if(j==-1 && h==n){
    cout << -1 << " " << -1;
	}
}
