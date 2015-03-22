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

int main() {
    int n;
    cin >> n;
    int t[n];
    for(int i=0; i<n; i++)
        cin >> t[i];
    int a = t[0];
    int b = t[1];
    for(int i = 2; i <= n; i++){
        a = nwd(a,b);
        b = t[i];
    }
    cout << a << endl;
}
