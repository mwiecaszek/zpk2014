#include <iostream>
#include <cmath>

using namespace std;

int main(){

int n,m;
cin >> n >> m;

int tab[n][m];

for(int i = 0; i < n; ++i){
    for(int j = 0; j < m; ++j){
        cin >> tab[i][j];
    }
}

double koszt = 0;
double koszty[n*(n-1)/2];
int i = 0;

for(int k = 0; k < n - 1; ++k){
    for(int l = k + 1; l < n; ++l){
        koszt = 0;
        for(int j = 0; j < m; ++j){
            koszt = (tab[k][j]<tab[l][j]) ? koszt + tab[k][j] : koszt + tab[l][j];
            }
        koszty[i] = koszt;
        ++i;
    }
}

double min_koszt = koszty[0];

for(int m = 1; m < n*(n-1)/2; ++m){
    if(min_koszt > koszty[m]) min_koszt = koszty[m];
}

cout << min_koszt << endl;

return 0;

}







