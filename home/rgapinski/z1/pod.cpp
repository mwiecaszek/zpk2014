#include <iostream>
using namespace std;

int main(){
    int a, b, k, x1, x2, ile_bylo;
    cin >> a >> b >> k;
     if(b == a && b % k == 0)
        ile_bylo = 1;
    if(b < a | (b == a && b % k != 0 ) )
        cout << "Niepoprawne dane" << endl;
    if(b > a){
        if(a % k == 0)
            x1 = a/k;
        else
            x1 = (a/k + 1);
        x2 = b/k;
        ile_bylo = x2 - x1 + 1;
    }
    if( k > b )
        ile_bylo = 0;
    cout << ile_bylo << endl;
}


