#include <iostream>
using namespace std;

int main() {
    int a, b, k;
    cin >> a >> b >> k;

    int kraw_boczna, kraw_dolna, wynik;

    kraw_boczna = b/k;
    kraw_dolna = a/k;

    if (a<k || b<k)
        cout << 0 << endl;
    else {
        if (kraw_boczna == 1 || kraw_dolna == 1){
            wynik = kraw_boczna*kraw_dolna;
            cout << wynik << endl;
        }
        else {
            wynik = 2*kraw_dolna + 2*(kraw_boczna-2);
            cout << wynik << endl;
        }
    }
}
