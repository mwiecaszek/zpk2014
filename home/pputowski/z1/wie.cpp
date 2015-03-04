#include <iostream>
using namespace std;

int main() {
    int r;
    cin >> r;
    // Dzielimy liczbê roku na 19 i wyznaczamy resztê a.
    int a = r % 19;
    // Dzielimy liczbê roku przez 100, wynik zaokr¹glamy w dó³ (odcinamy czêœæ u³amkow¹) i otrzymujemy liczbê b.
    int b = r / 100;
    // Dzielimy liczbê roku przez 100 i otrzymujemy resztê c.
    int c = r % 100;
    // Liczymy: b : 4 i wynik zaokr¹glamy w dó³ i otrzymujemy liczbê d.
    int d = b / 4;
    // Liczymy: b : 4 i wyznaczamy resztê e.
    int e = b % 4;
    // Liczymy: (b + 8) : 25 i wynik zaokr¹glamy w dó³ i otrzymujemy liczbê f.
    int f = ( b + 8 ) / 25;
    // Liczymy: (b – f + 1) : 3 i wynik zaokr¹glamy w dó³ i otrzymujemy liczbê g.
    int g = ( b - f + 1 ) / 3;
    // Liczymy: (19 x a + b – d – g + 15) : 30 i wyznaczamy resztê h.
    int h = ( 19 * a + b - d - g + 15 ) % 30;
    // Liczymy: c : 4 i wynik zaokr¹glamy w dó³ i otrzymujemy cyfrê i.
    int i = c / 4;
    // Liczymy: c : 4 i wyznaczamy resztê k.
    int k = c % 4;
    // Liczymy: (32 + 2 x e + 2 x i – h – k) : 7 i otrzymujemy resztê l.
    int l = ( 32 + 2 * e + 2 * i - h - k ) % 7;
    // Liczymy: (a + 11 x h + 22 x l) : 451 i wynik zaokr¹glamy w dó³ i otrzymujemy liczbê m.
    int m = ( a + 11 * h + 22 * l) / 451;
    // Liczymy: (h + l – 7 x m + 114) : 31 i otrzymujemy resztê p.
    int p = ( h + l - 7 * m + 114 ) % 31;

    cout << p + 1 << " " << ( h + l - 7 * m + 114 ) / 31 << endl;
}
