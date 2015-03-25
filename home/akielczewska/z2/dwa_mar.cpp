#include <iostream>
using namespace std;

main() {
    int n, m;
    cin >> n >> m;
    int t[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> t[i][j];
        }
    }
    cout << min(,2);

}


// funkcja wybieraj¹ca z dwóch wskazanych sklepów o numerach a,b
    int min(int a[m], int b[m]) {
    for (int j = 0; j < m; j++) {
        c[j] = t[0][j];
        nr[j] = 1;
        k += c[j];
        cout << c[j] << " " << nr[j] << endl;
    }

    // wybór pomiêdzy sklepami nr 1 i 2
    for (int j = 0; j < m; j++) {
        if (t[1][j] < c[j]) {
            nr[j] = 2;
            int r = t[1][j] - c[j];
            c[j] = t[1][j];
            k += r;
        }
        cout << c [j] << " " << nr[j] << endl;
    }
    }


