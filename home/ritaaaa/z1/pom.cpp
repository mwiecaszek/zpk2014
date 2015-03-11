#include <iostream>
using namespace std;
int main() {
    int licznik = 0;

    int g, g_pomoc;

    cin >> g;
    g_pomoc=g;

    while (g != -1) {
        cin >> g;
        if(g > g_pomoc)
        {
            licznik++;


            g_pomoc=g;
        }
    }

    cout << licznik << endl;
}
