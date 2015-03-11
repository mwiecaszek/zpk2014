#include <iostream>
using namespace std;

main () {
    int a,b,k;
    cin >> a >> b >> k;
    int i=0;
    // zmienna i zlicza podzielne liczby
    if (a%k==0) i++;
    // przesunê liczby a,b mo¿liwie blisko pocz¹tku osi tak, aby zosta³o tyle samo liczb podzielnych wewn¹trz przedzia³u
    b = a%k + (b-a);
    a = a%k;
    i += b/k;
    cout << i << endl;
}
