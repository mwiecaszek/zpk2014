#include <iostream>
using namespace std;

int NWD(unsigned int a, unsigned int b) {
    unsigned int p;
    if(a < b){
        p = a;
        a = b;
        b = p;
    }
    unsigned int r = a % b;
    while (r != 0) {
        a = b;
        b = r;
        r = a % b;
    }
    return b;
}

int main(){
    unsigned int n = 2;
    unsigned int wynik = 1;
    cin >> n;
    unsigned int t[n];
    for(unsigned int i = 0; i < n; i++)
        cin >> t[i];
    wynik = NWD(t[0], t[1]);
    for(unsigned int i = 2; i < n && wynik != 1; i++)
        wynik = NWD(wynik, t[i]);
    cout << wynik << endl;
}
