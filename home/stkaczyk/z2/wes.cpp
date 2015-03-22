#include <iostream>
#include <string>
using namespace std;

int nwd (int a, int b){
    if(a==0)
        return b;
    if(b==0)
        return a;
    if(a==b)
        return a;

    while (a != b){
        if (a>b)
            a = a - b;
        else
            b = b - a;
    }
    return a;
}

int ile(int n, int d) {

    d=d%n;
    return n/nwd(n,d);
}

int main() {
    int z;
    cin >> z;
    int t[z][2];

    for(int i=0; i<z; i++){
        for (int j=0; j<2; j++){
            cin >> t[i][j];
        }
    }
    for(int i=0; i<z; i++)
        cout << ile(t[i][0],t[i][1]) << endl;
}
