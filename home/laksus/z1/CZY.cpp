#include<iostream>

using namespace std;

long long n;

int main(){

    cin >> n;
    while(n!=1)
        if(n%2==0)
            n/=2;
        else{
            cout << "NIE\n";
            return 0;
        }
    cout << "TAK\n";
}
