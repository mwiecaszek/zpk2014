#include <iostream>
using namespace std;

int n;

int najwieksza (int t[]) {
    int wyn = t[0];
    for (int i = 1; i < n; i++)
        if (t[i] > wyn)
            wyn = t[i];
    return wyn;
}

int najwieksza_mniejsza (int t[], int m) {
    int wyn2;
    if (t[0] < m) {
        wyn2 = t[0];
        for (int i = 1; i < n; i++)
            if (t[i] > wyn2 && t[i] < m)
                wyn2 = t[i];
    }
    else {
        wyn2 = t[1];
        for (int i = 2; i < n; i++)
            if (t[i] > wyn2 && t[i] < m)
                wyn2 = t[i];
    }
    return wyn2;
}

int main() {
    cin >> n;
    int t[n];
    for (int i = 0; i < n; i++)
        cin >> t[i];
    cout << najwieksza_mniejsza (t, najwieksza(t)) << endl;
}
