#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int tablica[n][m];

    for(int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            cin >> tablica[i][j];
        }
    }
    int suma, suma_min;
    suma=0;
    suma_min=10000000000;

    for(int i=0; i<n; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            for (int k=0;k<m;k++)
                {if(tablica[i][k]>=tablica[j][k]) suma=suma+tablica[j][k];
                    else suma=suma+tablica[i][k];
                }

        if (suma<suma_min) suma_min=suma;
        suma=0;
        }

    }

   cout<<suma_min;
}
