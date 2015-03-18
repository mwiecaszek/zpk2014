#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    int t[n];
    int w[6];
    for( int i = 0; i < n; i++ )
        cin >> t[i];
    for( int i = 0; i < 6; i++ )
        w[i] = 0;
    for( int i = 0; i < n; i++ )
        w[t[i] - 1] += 1;
    for( int i = 0; i < 6; i++ )
        cout << w[i] << " ";

}

