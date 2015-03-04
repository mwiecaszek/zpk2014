#include<iostream>
using namespace std;

int main() {
    int numer, rok;
    cin >> numer >> rok;
    int wynik;
    wynik = ((numer % 10) * 2 + 5) * 50 + 1764 - rok;
    cout << wynik << endl;
}
