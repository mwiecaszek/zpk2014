#include <iostream>
using namespace std;

main () {
    int n;
    cin >> n;
    int s = 1;
    if (n > 0) {
        for (int i = 1; i <= n; i++) {
            s *= i;
        }
    }
    cout << s << endl;
}
