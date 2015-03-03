#include <iostream>
using namespace std;

int main() {
    int nowy = 0, poprzedni = 0;
    unsigned int liczba = 0;
    while (nowy != -1) {
        if (nowy != poprzedni)
            liczba++;
        poprzedni = nowy;
        cin >> nowy;
    }
    cout << liczba << endl;
}
