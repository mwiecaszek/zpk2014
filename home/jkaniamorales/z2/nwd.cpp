#include<iostream>
using namespace std;

int nwd(int a, int b){
    int r;
    r=a%b;
    while(r!=0){
        a=b;
        b=r;
        r=a%b;
    }
    return b;
}

int main() {
    int n;
    cin >> n;
    int t[n];
    for(int i=0; i<n; i++){
        cin >> t[i];
    }
    int wynik;
    for(int i=1; i<n; i++){
        if(i==1)
            wynik=nwd(t[0],t[1]);
        else
            wynik=nwd(wynik,t[i]);
    }
    cout << wynik;
}
