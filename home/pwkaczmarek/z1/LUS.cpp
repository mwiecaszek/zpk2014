#include <iostream>
using namespace std;

int main() {
    int i = 0, n = 1, z = 0;
    cin >> n;

    while (n!= 0){
    i = n%10;
    n /= 10;
    z += i;
    if(n != 0)
        z *= 10;
    }
    cout << z << endl;
}
