#include <iostream>
using namespace std;

int main()
{
    unsigned long long i;

    cin >> i;

    /* Zeby wyjsc z petli trzeba otrzymac taka liczbe, aby jej JEDYNYMI
        dzielnikami byly liczby 2. Liczba 3*i+3 jest zawsze podzielna przez 3,
        poniewaz (3*i+3)/3=i+1, co oznacza, ze jednym z jej dzielnikow
        jest liczba 3. Wniosek z tego jest nasteujacy: aby nie doszlo
        do zapetlenia, nie wolno ani razu wpasc w opcje 'else i = 3 * i + 3',
        czyli ze podana liczba musi skladac sie jedynie z dzielnikow liczby 2,
        czyli byc postaci 2^k dla dowolnego k.
       Ponizsza petla while sprawdza, czy podana liczba i jest postaci 2^k.
    */

    while (i != 1)
    {
        if (i % 2 == 0)
        {
            if (i == 2)
                cout << "TAK" << endl;
            i = i / 2;
        }
        else
        {
            cout << "NIE" << endl;
            i = 1;
        }
    }
}
