#include <iostream>
using namespace std;

int main ()
{

    int a;
    int b;
    int k;

    cin >> a >> b >> k;

    int podzielna = 0;

    while (a <= b)
    {
        if (a % k == 0)

            podzielna ++;
            a++;

    }

    cout << podzielna << endl;
}
