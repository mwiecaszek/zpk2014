#include <iostream>
using namespace std;

int main () {

    int A;
    int B;
    int K;

    cin >> A >> B >> K;

    int ileKrzesel = 0;
    int ileA = A/K;
    int ileB = B/K;

    if ( ileA < 1 && ileB < 1 )
    {
        ileKrzesel = 0;
    }

    if (ileA > 2 && ileB >2 )
    {
        ileKrzesel = ileA*ileB - (ileA - 2)*(ileB - 2);
    }

    else
        ileKrzesel = ileA * ileB;

    cout << ileKrzesel << endl;
}
