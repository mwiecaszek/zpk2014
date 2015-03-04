#include <iostream>
using namespace std;

int main()  {
    unsigned int a, b, k, wynik;
    cin >> a >> b >> k;
    wynik = (b - a)/k;
    if (b%k <= (b - a)%k)
        wynik++;
    cout << wynik << endl;
}
