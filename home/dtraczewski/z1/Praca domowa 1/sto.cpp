#include <iostream>
using namespace std;

int main() {
    unsigned int A, B, K;
    unsigned int x, y, krzesla;
    cin >> A >> B >> K;
    if (A < K || B < K)
        cout << 0 << endl;
    else {
        x = A/K;
        y = B/K;
        krzesla = x * y;
        if (x > 2 && y > 2) /* mo¿emy mieæ tylko 4 krzes³a 2x2 */
            krzesla = krzesla - (x - 2) * (y - 2);
        cout << krzesla << endl;
    }
}
