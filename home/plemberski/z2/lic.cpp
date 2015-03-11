#include <iostream>
#include <math.h>
using namespace std;

int main() {

long long liczba;
cin >> liczba;
long long r = sqrt(liczba);
long long i;
bool pierw = true;

for (i =2; i <= r; i++) {
    if (liczba%i ==0 ) {
        pierw=false;
    }
}
    if (pierw==false)
        cout <<"zlozona"<< endl;
    else
        cout <<"pierwsza"<< endl;




}
