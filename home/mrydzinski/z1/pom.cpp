#include<iostream>
using namespace std;

int main() {
    int x,y,z;
    x = 0;
    y = 0;
    z = 0;
    while(x >= 0){
        if(x > y){
            z++;
        }
        y = x;
        cin >> x;
    }
    cout << z;
} 
