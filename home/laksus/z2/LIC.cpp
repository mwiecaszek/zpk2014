#include<iostream>
#include<cmath>
using namespace std;

int n;

int main(){
    ios_base::sync_with_stdio(0);
    cin >> n;
    for(int i = 2; i <= sqrt(n); i++)
        if(n%i==0){
            cout << "zlozona" << endl;
            return 0;
        }
    cout << "pierwsza" << endl;
}
