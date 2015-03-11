#include <iostream>
#include <string>
using namespace std;

int najwieksza_mniejsza(int n, int t[], int m){
    int wic = 0;

    for(int i=0; i<n; i++){

        if (t[i]>wic && t[i]<m)
            wic = t[i];
    }
    return wic;
 }


int main() {
    int n,maks = 0;
    cin >> n;
    int t[n];

    for(int i=0; i<n; i++){
        cin >> t[i];

        if (t[i]>maks)
            maks = t[i];
    }
    cout << najwieksza_mniejsza(n, t, maks) << endl;
}
