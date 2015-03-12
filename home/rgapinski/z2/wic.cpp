#include <iostream>
using namespace std;

int Porownywanie(int tablica[], int maxi, int ile){
    int k, rezultat = 0;
    for(k = 0; k < ile ; k++){
        if(tablica[k] > rezultat && tablica[k] < maxi)
            rezultat = tablica[k];
    }
    return rezultat;
}

int Maksimum(int tabli[], int liczba){
    int k, maxa = 0;
    for(k = 0; k < liczba; k++){
        if(tabli[k] > maxa)
            maxa = tabli[k];
    }
    return maxa;
}

int main(){
    int n, k, wynik;
    int maxi = 0;
    cin >> n;
    int tablica[n];
    for(k = 0; k < n ; k++){
        cin >> tablica[k];
    }
    maxi = Maksimum(tablica, n);
    wynik = Porownywanie(tablica, maxi, n);
    cout << wynik << endl;
}
