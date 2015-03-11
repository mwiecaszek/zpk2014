#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    if( n == 0) {
        cout << 1;
    }
    else {
        if( (n-1)%4 == 0){
            cout << 2;
        }
        if( (n-2)%4 == 0){
            cout << 4;
        }
        if( (n-3)%4 == 0){
            cout << 8;
        }
        if( n%4 == 0){
            cout << 6;
        }
    }
}
