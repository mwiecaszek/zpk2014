#include <iostream>

using namespace std;

int main() {
    int a,b,k,x,y,c;
    cin >> a >> b >> k;
    y = b - b%k;
    x = ((a+k-1)/k)*k;

    c=((y-x)/k)+1;

    cout << c << endl;

}

