#include <iostream>
using namespace std;

int main() {
    int n, k, i;
    n = 0;
    i = 0;

    while(n != -1) {
        cin >> k;
        if (k != n && k != -1)
            i++;
        else ;
        n = k;
    }
    cout << "ilosc: " << i;
}

