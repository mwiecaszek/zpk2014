#include <iostream>
using namespace std;

int main() {
    int a, b, k;
    cin >> a >> b >> k;

    int x, y, z;

    if (a%k != 0){
        x = ((a/k)+1)*k;
    }
    else
        x = a;

    if (b%k != 0){
        y = (b/k)*k;
    }
    else
        y = b;

    z = ((y-x)/k) + 1;
    cout << z << endl;
}
