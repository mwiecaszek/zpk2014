#include <iostream>
#include <sstream>
using namespace std;

int main(){
int numer_tel,rok_ur;
cin >> numer_tel >> rok_ur;

int ost_cyfra = numer_tel % 10;
int wynik = (ost_cyfra * 2 + 5) * 50 + 1764 - rok_ur;
cout << wynik;
}
