#include <iostream>
using namespace std;

int main() {
    int a, b, k;
    cin >> a >> b >> k;
    int wynik;
    if (a < k && b < k)
        wynik = 0;
    else if (k == 1)
        wynik = b - a;
    else if ((a >= k && a == b && a % k == 0) )
        wynik = 1;
    else if (a < k && b >= k)
        wynik = b / k;
    else if (a == k || a > k && b > k && a % k == 0)
        wynik = b / k - a / k + 1;
    else if (a > k && b > k)
        wynik = b / k - a / k;

    cout << wynik << endl;
}
