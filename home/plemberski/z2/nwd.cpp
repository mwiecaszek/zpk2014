#include <iostream>
using namespace std;

//funkcja nwd z samouczka
int NWD (int a, int b) {
    int r=a%b;
    while (r!=0){
        a=b;
        b=r;
        r=a%b;
    }
    return b;
}


int main() {
    unsigned int n, a, b;
    cin >> n >> a >> b;

    int wynik =NWD(a,b);

    for (int k=2; k<n; k++){
        int c;
        cin >> c;
        wynik=NWD(wynik,c);
    }
    cout << wynik << endl;
}
