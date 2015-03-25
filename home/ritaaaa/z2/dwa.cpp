#include<iostream>
using namespace std;


int main(){

int n,m,z;
cin >> n >> m;
int t[n][m];
int suma=0;
int wynik=0;
int wyn=0;

for (int i=0;i<n;i++){
    for (int j=0; j<m;j++){
        t[i][j]=0;}
}

for (int i=0;i<n;i++){
    for (int j=0; j<m;j++){
        cin>>z;
        t[i][j]=z;}
}

for (int i=0;i<n;i++){
    wynik=0;
    for(int j=i+1;j<n;j++){
        suma=0;
        for(int k=0;k<m;k++){
            if(t[i][k]<t[j][k]) suma=suma+t[i][k];
            if(t[i][k]>=t[j][k]) suma=suma+t[j][k];
        }
        if (suma<wynik || wynik==0) wynik = suma;
    }
    if(wynik<wyn && wynik!=0|| wyn==0) wyn = wynik;
}
cout << wyn;
}
