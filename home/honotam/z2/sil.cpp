#include <iostream>
using namespace std;

int main()
{
    int n;
    int wynik = 1;
    cin >> n;

    for (int i = 1; i <= n; i++)
        wynik = wynik * i;

    cout << wynik << endl;
}
