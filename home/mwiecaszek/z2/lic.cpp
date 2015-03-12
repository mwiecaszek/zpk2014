#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    bool zlozona = false;
    for (int i = 2; i < n; i++) {
        if (n % i == 0)
            zlozona = true;
    }
    if (zlozona)
        cout << "zlozona" << endl;
    else
        cout << "pierwsza" << endl;
}
