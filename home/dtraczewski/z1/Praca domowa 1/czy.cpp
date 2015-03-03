#include <iostream>
using namespace std;

int main() {
    unsigned long long i;
    bool reszta = false;
    cin >> i;
    while (!reszta && i > 1){
        if (i % 2 != 0) /* nie mo¿emy nigdy wpaœæ w przypadek, gdy nie da sie podzieliæ i przez 2 */
            reszta = true;
        else
            i /= 2;
    }
    if (reszta)
        cout << "NIE" << endl;
    else
        cout << "TAK" << endl;
}
