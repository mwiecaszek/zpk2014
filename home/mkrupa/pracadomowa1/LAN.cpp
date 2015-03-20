#include <iostream>
using namespace std;

int main() {
        int a , b;
        cin >> a >> b;
        a %= 10;
        a *= 2;
        a += 5;
        a *= 50;
        a += 1764;
        a -= b;

        cout << a << endl;

}
