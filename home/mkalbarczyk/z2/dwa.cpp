#include<iostream>
using namespace std;



int main(){

int n,m,a;
cin>>n>>m;
int t[n][m];
int suma=0;
int wynik=0;
int wynik_ostat=0;

for (int i=0;i<n;i++){
    for (int j=0; j<m;j++){
        t[i][j]=0;
}
}

for (int i=0;i<n;i++){
    for (int j=0; j<m;j++){
        cin>>a;
        t[i][j]=a;
}
}


for (int i=0;i<n;i++){
    for (int j=0; j<m;j++){
        cout<<t[i][j]<<" ";
}
cout<<endl;
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
    if(wynik<wynik_ostat && wynik!=0|| wynik_ostat==0) wynik_ostat = wynik;
}
cout<<wynik_ostat;
}
