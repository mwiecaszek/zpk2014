#include <iostream>
using namespace std;

int main() {
    int p, w;
    char a, b;
    w =0;
    cin >> a >> b;
    p=a-48;
    if((b!='A')&&(b!='B')&&(b!='C')&&(b!='D')&&(b!='E')&&(b!='F')){
        w=b-48;}
    else if (b=='A')
        w=10;
    else if (b=='B')
        w=11;
    else if (b=='C')
        w=12;
    else if (b=='D')
        w=13;
    else if (b=='E')
        w=14;
    else if (b=='F')
        w=15;
    w += p*16;
    char zmienna;
    zmienna = w;
    cout << w <<endl << zmienna <<endl;
}
