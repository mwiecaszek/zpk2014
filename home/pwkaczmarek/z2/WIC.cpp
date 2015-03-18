#include <iostream>
using namespace std;

int najwieksza_mniejsza(int t[], int m, int d){
    int wynik = 0;
    for(int i = 0; i < d; i ++){
        if(t[i] < m && t[i] > wynik)
            wynik = t[i];
    }
    return wynik;
}

int main(){
    int n, m = 0, wynik;
    cin >> n;
    int t[n];
    for(int i = 0; i < n; i++){
        cin >> t[i];
        if(t[i] > m)
            m = t[i];
    }
    wynik = najwieksza_mniejsza(t, m, n);
    cout << wynik << endl;
}
