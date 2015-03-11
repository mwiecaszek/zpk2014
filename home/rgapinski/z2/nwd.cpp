#include <iostream>
using namespace std;

int funkcja_NWD (int x1, int x2){
    int dzielony = x1 % x2;
    while (dzielony != 0){
        x1 = x2;
        x2 = dzielony;
        dzielony = x1 % x2;
    }
    return x2;
}

int main(){
    int a1, a2, n, ai, k;
    cin >> n;
    cin >> a1 >> a2;
    int wynik = funkcja_NWD (a1, a2);
    for (k = 2; k < n; k++){
        cin >> ai;
        wynik = funkcja_NWD(wynik, ai);
    }
    cout << wynik << endl;
}
