#include <iostream>
using namespace std;

int main() {
    int a, b, k, n, i;
    n=0;
    cin >> a >> b >> k;
    for (i=a; i<=b; i++){
        if (i%k==0)
        n++;
    }
    cout << n << endl;
}
