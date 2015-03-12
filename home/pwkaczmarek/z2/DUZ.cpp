#include <iostream>
#include <string>
using namespace std;
int porownaj_rowne(string a, string b){
    int dlugosc = a.length();
    int wynik = 0;
    for(int i = 0; i < dlugosc; i++){
        if(a[i] > b[i]){
            wynik = 1;
            break;
        }
        if(a[i] < b[i]){
            wynik = 2;
            break;
        }
    }
    return wynik;
}

int main(){
    string a, b, znak;
    bool wynik = false;
    int dl_a, dl_b, typ = 0, porownanie = 0;

    cin >> a >> znak >> b;
    dl_a = a.length();
    dl_b = b.length();

    // okreœlenie typu znaku
    if(znak.length() == 1){
        if(znak[0] == '<')
            typ = 1;
        if(znak[0] == '>')
            typ = 2;
    }
    if(znak.length() == 2){
        if(znak[0] == '=' && znak[1] == '=')
            typ = 3;
        if(znak[0] == '!' && znak[1] == '=')
            typ = 4;
        if(znak[0] == '<' && znak[1] == '=')
            typ = 5;
        if(znak[0] == '>' && znak[1] == '=')
            typ = 6;
    }
    // uzaleznienie od dlugosci
    if(dl_a > dl_b){
        if(typ == 2 || typ == 4 || typ == 6)
            wynik = true;
    }
    if(dl_a < dl_b){
        if(typ == 1 || typ == 4 || typ ==5)
            wynik = true;
    }
    if(dl_a == dl_b){
        porownanie = porownaj_rowne(a, b);
        if(porownanie == 0 && (typ == 3 || typ == 5 || typ == 6))
            wynik = true;
        if(porownanie == 1 && (typ == 2 || typ == 4 || typ == 6))
            wynik = true;
        if(porownanie == 2 &&(typ == 1 || typ == 4 || typ == 5))
            wynik = true;
    }
    if(wynik)
        cout << "TAK" << endl;
    else
        cout << "NIE" <<endl;
}
