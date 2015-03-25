#include<iostream>

using namespace std;

int n,x,m1=-1,m2;

int main(){
    ios_base::sync_with_stdio(0);
    cin >> n;
    for(int i=1; i <= n; i++){
        cin >> x;
        if(x>m1){
            m2=m1; m1=x;
        }
        else if(x>m2)
            m2=x;
    }
    cout << m2 << endl;
}
