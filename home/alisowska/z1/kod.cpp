#include <iostream>
using namespace std;

int main() {
    int a, w;
    char b;
    cin >> a >> b;
    if (b=='A')
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
    w += a*16;
    char zmienna;
    zmienna = w;
    cout << w <<endl << zmienna <<endl;
}
