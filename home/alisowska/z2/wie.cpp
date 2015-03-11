#include <iostream>
using namespace std;

int main() {
   int r, A, B;
    cin >> r;
    if(r >1799 && r < 1900){
        A = 23;
        B = 4;}
    if(r >1899 & r < 2100){
        A = 24;
        B = 5;}
    if(r >2099 && r < 2200){
        A = 24;
        B = 6;}
    int a,b,c,d,e;
    a = r%19;
    b = r%4;
    c = r%7;
    d = (a*19+A)%30;
    e = (b*2+4*c +d*6+B)%7;
    int dz, mi;
    if(d==29 && e==6){
        dz=19;
        mi=4;}
    else{
        if(d==28 && e==6 && a>10){
            dz=18;
            mi=4;}
        else{
            if(d+e < 10){
                dz=d+e+22;
                mi=3;}
                else{
                dz=d+e+22-31;
                mi=4;}
            }
        }
    cout<<dz<<" "<<mi<<endl;
}
