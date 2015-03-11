#include <iostream>
#include <string>
using namespace std;

bool czyRowne (string x, string y) {
    if (x.length() != y.length())
        return false;
    unsigned short dlugosc = x.length();
    for (unsigned short i = 0; i < dlugosc; i++)
        if (x[i] != y[i])
            return false;
    return true;
}

bool czyRozne (string x, string y) {
    if (x.length() != y.length())
        return true;
    unsigned short dlugosc = x.length();
    for (unsigned short i = 0; i < dlugosc; i++)
        if (x[i] != y[i])
            return true;
    return false;
}

bool czyMniejsze (string x, string y) {
    if (x.length() < y.length())
        return true;
    else if (x.length() > y.length())
        return false;
    unsigned short dlugosc = x.length();
    for (unsigned short i = 0; i < dlugosc; i++) {
        if (x[i] > y[i])
            return false;
        else if (x[i] < y[i])
            return true;
    }
    return false;
}

bool czyWieksze (string x, string y) {
    if (x.length() < y.length())
        return false;
    else if (x.length() > y.length())
        return true;
    unsigned short dlugosc = x.length();
    for (unsigned short i = 0; i < dlugosc; i++) {
        if (x[i] > y[i])
            return true;
        else if (x[i] < y[i])
            return false;
    }
    return false;
}

bool czyNieMniejsze (string x, string y) {
    if (czyMniejsze(x, y))
        return false;
    return true;
}

bool czyNieWieksze (string x, string y) {
    if (czyWieksze(x, y))
        return false;
    return true;
}

int main() {
    string x, y, znak;
    cin >> x >> znak >> y;
    bool wynik;
    if (znak == "<")
        wynik = czyMniejsze(x, y);
    if (znak == ">")
        wynik = czyWieksze(x, y);
    if (znak == "<=")
        wynik = czyNieWieksze(x, y);
    if (znak == ">=")
        wynik = czyNieMniejsze(x, y);
    if (znak == "==")
        wynik = czyRowne(x, y);
    if (znak == "!=")
        wynik = czyRozne(x, y);
    if (wynik)
        cout << "TAK" << endl;
    else
        cout << "NIE" << endl;
}
