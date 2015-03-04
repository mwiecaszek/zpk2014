#include <iostream>
using namespace std;

int main() {
    int wynik, a, b, k;
    wynik = 0;

    cin >> a >> b >> k;

    for(int i = a; i <= b; i++){
        if(i % k == 0)
            wynik++;
        else ;
    }
    cout << wynik << endl;
}


