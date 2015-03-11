#include <iostream>
using namespace std;

int main(){
    int A, B, K, krawA, krawB, wynik;
    cin >> A >> B >> K;
    krawA = A / K;
    krawB = B / K;
    if(A >= K && B >= K){
        wynik = krawA*krawB;
        if(krawA > 2 && krawB > 2)
            wynik = wynik - (krawA - 2)*(krawB - 2);
        cout << wynik << endl;
    }
    else{
    cout << 0 << endl;
    }
}
