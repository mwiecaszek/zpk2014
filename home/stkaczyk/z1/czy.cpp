#include <iostream>
using namespace std;

int main() {
    long long int a;
    cin >> a;

    while (a != 1) {

        if (a%2 == 0)
            a /= 2;
        else {
            cout << "NIE" << endl;
            break;
        }
    }
    if (a == 1)
        cout << "TAK" << endl;
}
