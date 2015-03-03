#include <iostream>
#include <cmath>
using namespace std;

int main(){

long liczba;
cin >> liczba;

long reszta, warunek;
bool flaga = 0;
warunek = liczba / 10;

if(warunek == 0 && liczba != 0){
    cout << liczba;
    return 0;
}

while(warunek != 0){
    reszta = liczba % 10;
    if(reszta != 0){
        cout << reszta;
        flaga = 1;
    }
    if(reszta == 0 && flaga == 1){
        cout << reszta;
    }
    warunek = liczba / 10;
    liczba = (liczba - reszta) / 10;
}

cin.get();

return 0;
}





