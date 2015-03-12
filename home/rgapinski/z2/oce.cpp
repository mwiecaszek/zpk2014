#include <iostream>
using namespace std;

int main(){
    int n, k, i;
    cin >> n;
    int tablica_robocza[n], tablica_ocen[n];
    for(k = 0; k <= 5; k++){
        tablica_ocen[k] = 0;
        }
    for(k = 0; k < n; k++){
        cin >> tablica_robocza[k];
        }
    for(k = 0; k < n; k++){
        for(i = 1; i <= 6; i++ ){
            if(tablica_robocza[k] == i)
                tablica_ocen[i-1]++;
            }
        }
    for(k = 0; k <= 5; k++) {
        cout << tablica_ocen[k] << " "; }
        cout << endl;
}
