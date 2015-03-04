#include <iostream>
using namespace std;

int main() {
    char znak1, znak2;
    cin >> znak1 >> znak2;
    int nowy = znak2;

    if (nowy > 65)
        nowy -= 55;
    else
        nowy -= 48;

    int kod = (znak1 - 48) * 16 + nowy;
    cout << kod << endl;
    cout << char(kod) << endl;
}
