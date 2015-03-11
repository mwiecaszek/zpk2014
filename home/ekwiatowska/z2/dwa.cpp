#include <iostream>
using namespace std;

int n, m, a;
int t[100][100];
int s[10000];

int porownaj(int i, int j){
    int suma=0;
    for (int k=0; k<m; k++){
        if (t[i][k]<t[j][k])
            suma += t[i][k];
        else
            suma += t[j][k];
    }
    return suma;
}

int minimum(){
    int mini=s[0];
    for (int i=1; i<a; i++)
        if (s[i]<mini)
            mini=s[i];
    return mini;
}


int main() {
    cin >> n >> m;
    for (int i=0; i<n; i++)
        for (int j=0; j<m; j++)
            cin >> t[i][j];

    a=0;
    for (int i=0; i<n-1; i++)
        for (int j=i+1; j<n; j++){
            s[a]=porownaj(i,j);
            a++;
        }

    cout << minimum() << endl;
}
