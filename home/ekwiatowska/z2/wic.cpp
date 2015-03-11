#include <iostream>
using namespace std;

int najwieksza_mniejsza(int t[], int n, int m) {
    int naj=0;
    for (int i=0; i<n; i++)
        if (t[i]>naj && t[i]<m)
            naj=t[i];
    return naj;
}

int main() {
    int n;
    cin >> n;
    int t[n];
    for (int j=0; j<n; j++)
        cin >> t[j];
    cout << najwieksza_mniejsza(t, n, najwieksza_mniejsza(t,n,1000001)) << endl;
}
