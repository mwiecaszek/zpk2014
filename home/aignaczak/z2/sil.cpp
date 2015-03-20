#include <iostream>
using namespace std;

int main() {
    int n, wynik;
    wynik = 1;
    cin >> n;

    if (n == 0)
        wynik;
    else {
        for(int i = 1; i <= n; i++) {
            wynik = wynik * i;
        }
    }
    cout << wynik;
}
