#include <iostream>
using namespace std;

main () {
    char; //cyfra z kodu szestanstkowego
    char j; //litera z kodu szestnastkowego
    cin >> i >> j ;
    i *= 16;
    int k;
    if (j=='A')
        k=10;
        else if (j=='B')
            k=11;
        else if (j=='C')
            k=12;
        else if (j=='D')
            k=13;
        else if (j=='E')
            k=14;
        else if (j=='F')
            k=15;
    i += k;
    char znak = i+48;
    cout << i << endl;
    cout << znak << endl;
}
