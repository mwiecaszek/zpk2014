#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.length() / 2;
    bool czyPali = true;
    for (int i = 0; i < n; i++) {
        if (s[i] != s[s.length() - (i + 1)]) {
            czyPali = false;
            break;
        }
    }
    if (czyPali)
        cout << "TAK" << endl;
    else
        cout << "NIE" << endl;
}
