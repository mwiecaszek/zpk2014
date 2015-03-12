#include <iostream>
using namespace std;

int main(){

    int n;
    int m;
    cin >> n;
    cin >> m;

    int t[n][m];
    for( int i=0; i < n; i++) {
        for( int j=0; j < m; j++) {
            cin >> t[i][j];
        }
    }

    int wynik = 1000001;

    for( int i=0; i < n-1; i++) {
        for( int k=i+1; k < n; k++) {
            int koszt = 0;
            for( int j=0; j < m; j++) {
                koszt = koszt + min(t[i][j], t[k][j]);
            }
            if( koszt < wynik) {
                wynik = koszt;
            }
        }
    }

    cout << wynik << endl;
}
