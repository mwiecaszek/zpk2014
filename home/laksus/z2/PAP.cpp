#include<iostream>
#include<cmath>

using namespace std;

int k, x, waga;

int main(){
    ios_base::sync_with_stdio(0);
    cin >> k;
    for(int i=0; i <= k; i++){
        cin >> x;
        waga+=x*pow(2,i);
    }
    cout << waga + 1 << endl;
}
