#include <iostream>
using namespace std;

int nwd(int a, int b) {
    if ( a < b) {
        int c = b;
        b = a;
        a = c;
    }
    while ( b > 0) {
        int r = a%b;
        a = b;
        b = r;
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
    int a = t[0];
    for( int i=1; i < n; i++) {
        a = nwd(a,t[i]);
    }
    cout << a << endl;
}
