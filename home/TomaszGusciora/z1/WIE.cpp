#include <iostream>
using namespace std;
int main(){
int rok,a,b,c,d;
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
if(rok < 1900){
    a = 23;
    b = 4;
}else if(rok < 2100){
    a = 24;
    b = 5;
}else{
    a = 24;
    b = 6;
}
c = (19 * (rok % 19) + a) % 30;
d = (2 * (rok % 4) + 4 * (rok % 7) + 6 * c + b) % 7;
if(c+d<10){
    cout << 22 + c + d << " " << 3 <<endl;
}else{
    cout << c + d - 9 << " " << 4 <<endl;
}
}












