#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    int b[6];
    for( int i = 0; i < n; i++ )
        cin >> a[i];
    for( int i = 0; i < 6; i++ )
        b[i] = 0;
    for( int i = 0; i < n; i++ )
        b[a[i] - 1] += 1;
    for( int i = 0; i < 6; i++ )
        cout << b[i] << " ";
}
