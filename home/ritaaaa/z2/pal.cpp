#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int z = s.length();
    bool palindrom = true;
    for (int i = 0; i < z/2; i++) {
        if (s[i] != s[s.length() - (i + 1)]) {
            palindrom = false;
            break;
        }
    }
    if (palindrom)
        cout << "TAK" << endl;
    else
        cout << "NIE" << endl;
}
