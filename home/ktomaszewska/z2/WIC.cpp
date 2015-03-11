#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int tablica[n];
    for (int i = 0; i < n; i++)
    {
        cin >> tablica[i];
    }

   int maks=0;
   int wic=0;

   for (int j = 0; j < n; j++)
    {
        if (tablica[j]>=maks)

            {wic=maks; maks=tablica[j];}
        else
            { if (tablica[j]>=wic)
                wic=tablica[j];
            }


    }
   cout<<wic;


}
