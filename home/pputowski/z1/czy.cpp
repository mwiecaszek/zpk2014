#include <iostream>
using namespace std;

int main() {
    unsigned long long i;
    int t = 1;
    cin >> i;
    while ( i != 1 )
    {
        if ( i % 2 == 0 )
            i = i / 2;
        else
        {
            i = 1;
            cout << "NIE" << endl;
            t = 0;
        }
    }
    if( t != 0 )
        cout << "TAK" << endl;
}
