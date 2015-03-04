#include <iostream>
using namespace std;

int main(){
    char hex1, hex2;
    int z1, z2, dec;
    cin >> hex1 >> hex2;
    z1 = (int)hex1;
    z2 = (int)hex2;
    if (z2 < 65 | z2 > 70)
        dec = 16*(z1 - 48) + (z2 - 48);
    else
        dec = 16*(z1 - 48) + (z2 - 55);
    cout << dec << endl;
    cout << (char)dec << endl;
}
