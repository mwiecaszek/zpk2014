#include <iostream>
using namespace std;

int main() {
    int n, x, k, suma1 =0, suma2=0;
    cin >> n;
    cin >> x;
    int t[n];

// wczytaywanie liczb
for (k=0 ; k<n ; k++) {
   cin >> t[k];
}

// pierwsze miejsce
for (k=0 ; k<n ; k++) {
   if ( t[k] == x) {
    cout << k+1 << " ";
    break;}
    else
    suma1++;
}
// drugie miejsce
for (k= n-1 ; k>=0 ; k--) {
   if ( t[k] == x) {
    cout << k+1;
    break; }
    else
    suma2++;
}
//brak szukanej liczby
if (suma1==suma2 && suma1==n)
    cout << -1 << " " << -1;
}
