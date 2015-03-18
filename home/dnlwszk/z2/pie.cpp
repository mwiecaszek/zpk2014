#include <iostream>
using namespace std;

int main() {

    int a,b;
    int c,d;
    c=-1;
    d=0;
    cin>>a;
    cin>>b;

    for(int i=0; i<a; i++)
    {
        int k; cin>>k;
        if(k==b) {c=i+1;d++; if(d==1) cout<<c<<" ";  }
    }
    cout<<c;
    return 0;

}