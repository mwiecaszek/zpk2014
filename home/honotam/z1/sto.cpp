#include <iostream>
using namespace std;

int main()  {
    unsigned int A, B, K, lewkraw, dolkraw, wynik;
    cin >> A >> B >> K;
    if (A < K || B < K)
        cout << 0 << endl;
    else
    {
        lewkraw = A / K;
        dolkraw = B / K;
        wynik = lewkraw*dolkraw;
        if (lewkraw > 2 && dolkraw > 2)
            wynik = wynik - (lewkraw - 2)*(dolkraw - 2);
        cout << wynik << endl;
    }
}
