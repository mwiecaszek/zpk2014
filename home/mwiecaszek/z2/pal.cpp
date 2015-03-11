#include <iostream>
#include <string>
using namespace std;

int main() {
    string slowo;
    cin >> slowo;
    int n = slowo.size();
    bool palindrom = true;
    for (int i = 0; i <= n / 2; i++) {
        if (slowo[0] != slowo[n - 1])
            palindrom = false;
    }
    if (palindrom)
        cout << "TAK" << endl;
    else
        cout << "NIE" << endl;
}
