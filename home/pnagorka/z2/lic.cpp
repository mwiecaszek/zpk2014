#include <iostream>
// #include <conio.h>
using namespace std;

int main()
{
    unsigned int n, i = 2;
    string wynik = "pierwsza";

    cin >> n;

    while (i * i <= n && wynik == "pierwsza")
    {
        if (n % i == 0)
            wynik = "zlozona";
        i++;
    }

    cout << wynik << endl;
}
