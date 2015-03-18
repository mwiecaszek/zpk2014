#include <iostream>
using namespace std;

int main() {
    int n, k, suma;
    suma = 1;
    cin >> n;


   if (n != 0){

        for (k=1 ; k <= n; k++)
        suma *= k;
   }
    cout << suma << endl;
}
