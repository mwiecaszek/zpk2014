#include <iostream>
using namespace std;

int main() {
    int l = 0;
    int a = 0;
    int p = 0;

    while (a != (-1)) {
        cin >> a;
        if (a != p)
            l++;
        p = a;
    }

    cout << l - 1 << endl;
}
