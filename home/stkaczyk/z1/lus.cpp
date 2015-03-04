#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int liczba = n;

    int liczba_cyfr = 0;
    if (n == 0)
        liczba_cyfr = 1;
    else
        while (n > 0) {
            liczba_cyfr++;
            n /= 10;
        }
    int l, wynik = 0, i = 1, j = 1;
    long long int pot = 10, max_pot = 1;

    while (j < liczba_cyfr){
        max_pot *= 10;
        j++;
    }

    while (i <= liczba_cyfr) {
        l = (liczba % pot) / (pot/10);
        i++;
        pot *= 10;
        wynik += l * max_pot;
        max_pot /= 10;
    }
    cout << wynik << endl;
}
