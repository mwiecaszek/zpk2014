#include<iostream>
#include<string>
using namespace std;

struct zestaw{
    int liczbaklatek;
    int dlugoscskoku;
    int uwolnione;
};

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
    zestaw t[n];
    for(int i=0; i<n; i++){
        cin >> t[i].liczbaklatek >> t[i].dlugoscskoku;
    }

    for(int i=0; i<n; i++){
        t[i].uwolnione=t[i].liczbaklatek/nwd(t[i].liczbaklatek,t[i].dlugoscskoku);
    }

    for(int i=0; i<n; i++){
        cout << t[i].uwolnione << endl;
    }

}
