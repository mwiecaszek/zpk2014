#include<iostream>
using namespace std;

int main() {
    int a, b, k;
    cin >> a >> b >> k;
    int wynik;
    if (a % k != 0)
        wynik = (b / k) - (a / k);
    else
        wynik = b / k;
    cout << wynik << endl;
}
