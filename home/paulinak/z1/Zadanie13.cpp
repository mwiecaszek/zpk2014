#include <iostream>
using namespace std;

int main ()
{
    int n;

    cin >> n;

    int potega = 1;
        cout << potega << endl;

    while (potega <= n)
    {
        potega *= 2;

        if (potega <=n)
        {
            cout << potega << endl;
        }
    }
}
