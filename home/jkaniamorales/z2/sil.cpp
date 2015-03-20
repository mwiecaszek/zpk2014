#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    if (n==0)
        cout << 1;
    else{
        int i=1;
        int wynik=1;
        while(i<=n){
            wynik*=i;
            i++;
        }
        cout << wynik;
    }

}
