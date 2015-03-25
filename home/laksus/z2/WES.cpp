#include<iostream>

using namespace std;

int n,x1,x2;

int NWD(int a, int b){
    int c;
    while(b!=0){
        c = a%b;
        a = b;
        b = c;
    }
    return a;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin >> n;
    for(int i=1; i <= n; i++){
            cin >> x1 >> x2;
            cout << x1 / NWD(x1,x2) << endl;
    }
}
