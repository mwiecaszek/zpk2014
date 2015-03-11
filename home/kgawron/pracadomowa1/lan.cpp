#include <iostream>
using namespace std;

    int main()
{
    unsigned int numer, rok, x;

    cin >> numer >> rok;

        x = (numer % 10) * 2;
        x += 5;
        x *= 50;
        x += 1764;
        x -= rok;

 cout << x << endl;
}
