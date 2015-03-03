#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int wynik=0;
    wynik = a%10 * 2;
    wynik+=5;
    wynik*=50;
    wynik+=1764;
    wynik-=b;
    cout << wynik << endl;

}
