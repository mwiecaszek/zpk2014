#include <iostream>
using namespace std;

int main() {
    unsigned int n;
    bool zero = true;
    cin >> n;
    while (zero){
        if (n % 10 != 0)
            zero = false;
        else n /= 10;
    }
    while (n > 0) {
        cout << n % 10;
        n /= 10;
    }
}
