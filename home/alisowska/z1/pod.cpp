#include <iostream>
using namespace std;

int main() {
    int a, b, k, w;
    cin >> a >> b >> k;
    w = 0;
    while (a<=b){
        if( a % k == 0)
            w++;
        a++;}
    cout << w;
}
