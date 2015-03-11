#include <iostream>
using namespace std;

int main() {
    short int r, dm, m, A, B, a, b, c, d, e;
    cin >> r;
    if(r >= 1800 && r < 1900){
        A = 23;
        B = 4;}
    if(r >= 1900 & r < 2100){
        A = 24;
        B = 5;}
    if(r >= 2100 && r < 2200){
        A = 24;
        B = 6;}
    a = r%19;
    b = r%4;
    c = r%7;
    d = (19*a + A)%30;
    e = (2*b + 4*c + 6*d + B)%7;

    if(d == 29 && e == 6){
        dm = 19;
        m = 4;
    }else{
        if(d == 28 && e == 6 && a > 10){
            dm = 18;
            m = 4;
        }else{
            if(d + e < 10){
                dm = d + e + 22;
                m = 3;
            }else{
                dm = d + e - 9;
                m = 4;
    }}}
    cout << dm << " " << m << endl;
}
