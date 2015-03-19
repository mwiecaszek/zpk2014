#include <iostream>
using namespace std;

int main() {
    int i, n, a;
    cin >> n;
    if(n==0){
    a=1;
    }
    a=1;
    if (n>1){
        for(i=1;i<=n;i++)
        a=a*i;
    }
        cout << a << endl;
}
