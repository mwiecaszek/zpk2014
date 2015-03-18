#include <iostream>
using namespace std;

unsigned int wice (unsigned int x, unsigned int max, unsigned int wic) {
    if (x < max && x > wic)
        return x;
    else if ( x > max)
        return max;
    else
        return wic;
}

unsigned int mistrz (unsigned int x, unsigned int max) {
    if (x > max)
        return x;
    else
        return max;
}

int main() {
    unsigned short n;
    cin >> n;
    unsigned int max = 0, wic = 0, x;
    for (unsigned short i = 1; i <= n; i++) {
        cin >> x;
        wic = wice (x, max, wic);
        max = mistrz (x, max);
    }
    cout << wic << endl;
}
