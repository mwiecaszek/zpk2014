#include<iostream>
using namespace std;

int main() {
    char a, b;
    cin >> a >> b;
    if (int(b) > 64) {
    cout << 16 * (int(a) - 48) + int(b) - 55 << endl;
    cout << char(16 * (a - 48) +int(b) - 55) << endl;
    }
    else {
        cout << 16 * (int(a) - 48) + int(b) - 48 << endl;
        cout << char(16 * (a - 48) + int(b) - 48) << endl;
    }
}
