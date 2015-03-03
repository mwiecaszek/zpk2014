#include <iostream>
using namespace std;

int main() {
    char t, s;
    unsigned int litera;
    cin >> t >> s;
    if ((int)s >= 65 && (int)s <= 70) /*warunek na litere na drugie pozycji kodu */
        litera = ((int)t - 48) * 16 + ((int)s-55);
    else
        litera = ((int)t - 48) * 16 + ((int)s-48);

    cout << litera << endl << (char)litera << endl;
}
