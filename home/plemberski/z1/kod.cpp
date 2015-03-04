#include <iostream>
using namespace std;

int main() {
    char zm_1, zm_2, wynik_chr;
    int int_1, int_2, wynik_int;
    cin >> zm_1 >> zm_2;

    /*zamieniamy zmienne CHR na liczby ca³kowite (format int)*/
    int_1 = zm_1; /*kod zakresu liczb od 1 do 9 to (49-57)*/
    int_2 = zm_2; /*kod zakresu duzych liter od A do F to (65-70), a ich wartoœc w uk³adzie szesnatkowym odpowiada zakresowi (10 - 15)*/

    if (int_2 >= 65) /*sprawdzamy czy litera*/
        wynik_int=(int_1-48)*16+int_2-55;
    else
        wynik_int=(int_1-48)*16+int_2-48; /*drugi znak jest liczba*/
    wynik_chr = wynik_int;
    cout << wynik_int << endl;
    cout << wynik_chr << endl;

}
