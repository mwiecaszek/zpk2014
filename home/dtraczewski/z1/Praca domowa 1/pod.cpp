#include <iostream>
using namespace std;

int main() {
    unsigned int a, b, k;
    unsigned int wynik;
    cin >> a >> b >> k;
    if (a % k == 0)
        wynik = b / k - a / k + 1;
    else
        wynik = b / k - a / k;
    cout << wynik << endl;
}
