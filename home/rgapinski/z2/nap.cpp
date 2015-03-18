#include <iostream>
using namespace std;

int main(){
    int n, k;
    cin >> n;
    int tablica[n];
    for(k = 0; k < n ; k++){
        cin >> tablica[k];
    }
    for(k = 0; k < n; k++){
        if (k % 2 == 0)
            cout << tablica[k] << " ";
    }
    cout << endl;
    for(k = 0; k < n; k++){
        if (k % 2 != 0)
            cout << tablica[k] << " ";
    }
}
