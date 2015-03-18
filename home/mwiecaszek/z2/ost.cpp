#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ost;
    if (n == 0)
        ost = 1;
    else {
        switch (n % 4) {
        case 0:
            ost = 6;
            break;
        case 1:
            ost = 2;
            break;
        case 2:
            ost = 4;
            break;
        case 3:
            ost = 8;
            break;
        }
    }
    cout << ost << endl;
}
