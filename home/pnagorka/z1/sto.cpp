#include <iostream>
using namespace std;

int main()
{
    unsigned int A, B, K, lewa_krawedz, dolna_krawedz, wynik;

    cin >> A >> B >> K;

    if (A < K || B < K)
        cout << 0 << endl;
    else
    {
        lewa_krawedz = A / K;
        dolna_krawedz = B / K;

        wynik = lewa_krawedz * dolna_krawedz;

        if (lewa_krawedz > 2 && dolna_krawedz > 2)
            wynik = wynik - (lewa_krawedz - 2) * (dolna_krawedz - 2);

        cout << wynik << endl;
    }
}
