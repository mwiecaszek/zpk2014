#include <iostream>
using namespace std;

int main() {
    int n, x, a = -1, b = -1;
    cin >> n >> x;
    int t[n];

    for(int i=0; i<n; i++){
        cin >> t[i];
        if (a == -1 && t[i] == x)
            a = i+1;
        if (t[i] == x)
            b = i+1;
    }
    cout << a << " " << b << endl;
}
