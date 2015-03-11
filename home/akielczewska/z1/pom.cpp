#include <iostream>
using namespace std;

main() {
    int p=0; //poprzedni odczyt
    int a=0; //aktualny odczyt
    int l=0; //liczba ludzi
    cin >> p;
    while (a!=-1) {
        cin >> a;
        if (a!=p) {
            l++;
        }
        p=a;
    }
    cout << l-1 << endl;
}
