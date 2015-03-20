#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int t[n];
    for( int i=0; i < n; i++) {
        cin >> t[i];
    }

    int w[6];
    for( int i=0; i < 6; i++) {
        w[i] = 0;
    }

    for( int i=0; i < n; i++) {
        for( int j=1; j < 7; j++) {
            if ( t[i] == j)
                w[j-1] = w[j-1] + 1;
        }
    }

     for( int i=0; i < 6; i++) {
        cout << w[i] << " ";
    }
}
