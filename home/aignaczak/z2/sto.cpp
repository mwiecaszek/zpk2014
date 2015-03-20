#include <iostream>
using namespace std;

int main() {
    int a, b, k, i;
    cin >> a >> b >> k;

    i= 2 * (a / k) + 2 * ((b - 2 * k) / k);

    cout << i;
}
