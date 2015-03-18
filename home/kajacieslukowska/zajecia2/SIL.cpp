#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int s = 1;
    if( n == 0) {
        cout << s;
    }
    else {
        for( int i=2; i <= n; i++) {
            s = s*i;
        }
        cout << s;
    }
}
