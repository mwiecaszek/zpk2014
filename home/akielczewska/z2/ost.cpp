#include <iostream>
using namespace std;


main() {
    int n, o;
    cin >> n;
    if (n == 0) {
        o = 1;
    }
    else if (n%4 == 1) {
        o = 2;
    }
    else if (n%4 == 2) {
        o = 4;
    }
    else if (n%4 == 3) {
        o = 8;
    }
    else if (n%4 == 0) {
        o = 6;
    }
    cout << o;
}
