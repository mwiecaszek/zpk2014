#include <iostream>
using namespace std;

int NWD (int a, int b) {
    int r = a % b;
    while (r != 0) {
        a = b; b = r; r = a % b;
    }
    return b;
}

int main() {
    int n;
    cin >> n;
    int a;
    cin >> a;
    int b;
    for (int i = 0; i < n - 1; i++) {
        cin >> b;
        NWD (a, b);
    }
    cout << NWD (a, b) << endl;
}
