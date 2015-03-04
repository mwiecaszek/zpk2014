#include <iostream>
using namespace std;

int main() {
    int n, k;
    k = 1;

    cin >> n;

    while(k * 2 <= n) {
        k = k * 2;
        cout << k << endl;
    }

}

