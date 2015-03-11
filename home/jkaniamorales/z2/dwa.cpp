#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;


int main() {

    int n, m;
    cin >> n >> m;
    int t[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>> t[i][j];
        }
    }

    int koszty[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            koszty[i][j]=0;
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            for(int k=0; k<m; k++){
                koszty[i][j]+=min(t[i][k],t[j][k]);
            }
        }
    }

    int wynik=koszty[0][0];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(koszty[i][j]<wynik)
                wynik=koszty[i][j];
        }
    }

    cout << wynik;

}
