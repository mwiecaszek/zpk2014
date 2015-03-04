#include<iostream>
using namespace std;

int main() {
    int n,x;
    x = 0;
    cin >> n;
    while(n != 0){
        x = x*10;
        x = x + n%10;
        n = n/10;
    }
    cout << x << endl;
}
