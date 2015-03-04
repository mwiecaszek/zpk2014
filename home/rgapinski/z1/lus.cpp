#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int liczba;
    double z;
    int lustrzana = 0;
    cin >> liczba;
    while (liczba > 0){
    lustrzana = 10*lustrzana + liczba%10;
    z = liczba/10;
    liczba = floor(z);
    }
    cout << lustrzana << endl;
}
