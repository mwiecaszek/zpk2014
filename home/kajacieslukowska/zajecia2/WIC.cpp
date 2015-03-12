#include <iostream>
using namespace std;

int n_w( int tab[], int n, int m) {
    int a = 1;
    int i = 0;
    while( i < n ) {
        if ( tab[i] > a && tab[i] < m) {
            a = tab[i];
        }
        i = i + 1;
    }
    return a;
}

int main(){

    int n;
    cin >> n;

    int t[n];
    for( int i=0; i < n; i++) {
        cin >> t[i];
    }

    cout << n_w(t, n, n_w(t, n, 1000001)) << endl;
}
