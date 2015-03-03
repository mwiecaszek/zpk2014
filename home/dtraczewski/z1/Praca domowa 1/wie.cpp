/*
Algorytm za: http://pl.wikipedia.org/wiki/Wielkanoc#Dla_kalendarza_gregoria.C5.84skiego_2

Dzielimy liczbê roku na 19 i wyznaczamy resztê a.
Dzielimy liczbê roku przez 100, wynik zaokr¹glamy w dó³ (odcinamy czêœæ u³amkow¹) i otrzymujemy liczbê b.
Dzielimy liczbê roku przez 100 i otrzymujemy resztê c.
Liczymy: b : 4 i wynik zaokr¹glamy w dó³ i otrzymujemy liczbê d.
Liczymy: b : 4 i wyznaczamy resztê e.
Liczymy: (b + 8) : 25 i wynik zaokr¹glamy w dó³ i otrzymujemy liczbê f.
Liczymy: (b - f + 1) : 3 i wynik zaokr¹glamy w dó³ i otrzymujemy liczbê g.
Liczymy: (19 x a + b – d – g + 15) : 30 i wyznaczamy resztê h.
Liczymy: c : 4 i wynik zaokr¹glamy w dó³ i otrzymujemy cyfrê i.
Liczymy: c : 4 i wyznaczamy resztê k.
Liczymy: (32 + 2 x e + 2 x i – h – k) : 7 i otrzymujemy resztê l.
Liczymy: (a + 11 x h + 22 x l) : 451 i wynik zaokr¹glamy w dó³ i otrzymujemy liczbê m.
Liczymy: (h + l – 7 x m + 114) : 31 i otrzymujemy resztê p.
Dzieñ Wielkanocy = p + 1.
Miesi¹c = Zaokr¹glenie w dó³ dzielenia (h + l – 7 x m + 114) przez 31.
*/

#include <iostream>
using namespace std;

int main() {
    unsigned int a, b, c, d, e, f, g, h, i, k, l, m, p, dzien, miesiac, rok;
    cin >> rok;
    a = rok % 19;
    b = rok / 100;
    c = rok % 100;
    d = b / 4;
    e = b % 4;
    f = (b + 8) / 25;
    g = (b - f + 1) / 3;
    h = (19 * a + b - d - g + 15) % 30;
    i = c / 4;
    k = c % 4;
    l = (32 + 2 * e + 2 * i - h - k) % 7;
    m = (a + 11 * h + 22 * l) / 451;
    p = (h + l - 7 * m + 114) % 31;
    dzien = p + 1;
    miesiac = (h + l - 7 * m + 114) / 31;
    cout << dzien << " " << miesiac << endl;
}
