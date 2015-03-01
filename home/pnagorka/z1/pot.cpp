#include <iostream>
using namespace std;

int main()
{
    unsigned int n, wynik = 1;

    cin >> n;

    while (wynik <= n)
    {
        cout << wynik << endl;
        wynik = wynik * 2;
    }
}
