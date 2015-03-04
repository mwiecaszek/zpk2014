#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int potega = 1;
    while (potega <= n) {
        cout << potega << endl;
        potega *= 2;
    }
}
