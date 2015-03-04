#include <iostream>
using namespace std;

int main ()
{
    int pomiar = 0;
    int n = 0;
    int i = 1;

    while ( i>=0 )
    {
        cin >> i;

        if ( pomiar < i )
        {
            n++;
            pomiar = i;
        }
    }
    cout << n << endl;

}
