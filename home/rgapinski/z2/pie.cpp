#include <iostream>
using namespace std;

int main(){
    int n, k, x, a1 = -1, a2 = -1;
    cin >> n >> x;
    int tablica[n];
    for(k = 0; k < n; k++){
        cin >> tablica[k];
        }
    for(k = 0; k < n; k++){
        if (a1 == -1 && tablica[k] == x){
            a1 = k + 1;
            a2 = a1;
            }
        else if (tablica[k] == x){
            a2 = k + 1;
            }
        }
    cout << a1 << " " << a2 << endl;
}
