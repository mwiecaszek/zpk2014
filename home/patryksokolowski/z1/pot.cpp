#include <iostream>
using namespace std;

int main(){

int n;
cin >> n;
int wynik = 1;
cout << wynik << "\n";
while (wynik < n){
    wynik = wynik * 2;
    if (wynik <= n){
        cout << wynik << "\n";
}
}
}
