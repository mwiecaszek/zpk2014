#include <iostream>
using namespace std;

int main(){
long n;
cin >> n;
long r, w;
bool f = 0;
w = n / 10;
if(w == 0 && n != 0){
    cout << n;
    return 0;
}
while(w != 0){
    r = n % 10;
    if(r != 0){
        cout << r;
        f = 1;
    }
    if(r == 0 && f == 1){
        cout << r;
    }
    w = n / 10;
    n = (n - r) / 10;
}
}





