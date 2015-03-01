#include <iostream>
using namespace std;

int main()
{
    unsigned int n, wynik = 0;

    cin >> n;

    while (n % 10 == 0)
        n = n / 10;
    while (n != 0)
    {
        wynik = 10 * wynik + (n % 10);
        n = n / 10;
    }

    cout << wynik << endl;
}
