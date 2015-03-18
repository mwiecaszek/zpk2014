#include <iostream>
using namespace std;

int main () {
    int n, x, pierwszy = -1, ostatni = -1;
    cin >> n >> x;
    int t[n];
    for (unsigned int i = 0; i < n; i++) {
        cin >> t[i];
        if (t[i] == x && pierwszy == -1)
            pierwszy = i + 1;
        else if (t[i] == x)
            ostatni = i + 1;
    }
    if (pierwszy != -1 && ostatni == -1)
        ostatni = pierwszy;
    cout << pierwszy << " " << ostatni << endl;
}
