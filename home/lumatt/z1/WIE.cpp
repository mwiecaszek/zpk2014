#include <iostream>
using namespace std;

int main(){

int rok;
cin >> rok;

if(rok == 1981 || rok == 2076 || rok == 2133){
    cout << 19 << " " << 4 << endl;
    cin.get();
    return 0;
}else if(rok == 1954 || rok == 2049 || rok == 2106){
    cout << 18 << " " << 4 << endl;
    cin.get();
    return 0;
}

int A,B;

if(rok < 1900){
    A = 23;
    B = 4;
}else if(rok < 2100){
    A = 24;
    B = 5;
}else{
    A = 24;
    B = 6;
}

int d,e;

d = (19 * (rok % 19) + A) % 30;
e = (2 * (rok % 4) + 4 * (rok % 7) + 6 * d + B) % 7;

if(d+e<10){
    cout << 22 + d + e << " " << 3 <<endl;
}else{
    cout << d + e - 9 << " " << 4 <<endl;
}

cin.get();

return 0;
}






