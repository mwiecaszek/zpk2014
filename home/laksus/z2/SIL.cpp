#include<iostream>

using namespace std;

int n,wynik=1;

int main(){
    cin >> n;
    for(int i=1;i <= n; i++)
        wynik*=i;
    cout << wynik << endl;
}
