#include <iostream>
#include <math.h>
using namespace std;

main() {
    int n;
    cin >> n;
    bool p = true;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n%i == 0) {
            p = false;
        }
    }
    if (p == true) cout << "pierwsza" << endl;
        else cout << "zlozona" << endl;
}
