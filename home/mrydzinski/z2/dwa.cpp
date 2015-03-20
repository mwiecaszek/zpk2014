#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int tab[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> tab[i][j];
        }
    }
    int koszt[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            koszt[i][j]=0;
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            for(int k=0; k<m; k++){
                koszt[i][j]+=min(tab[i][k],tab[j][k]);
            }
        }
    }
	int x=koszt[0][0];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(koszt[i][j]<x){
                x=koszt[i][j];
			}	
        }
    }
    cout << x;
}
