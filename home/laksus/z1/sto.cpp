#include<iostream>

using namespace std;

long long a,b,k,wynik1,wynik2,guard1=2,guard2=0;

int main(){
    cin >> a >> b >> k;
    wynik1 = (a/k)*min((b/k),guard1) + max((b/k)-2,guard2)*min((a/k),guard1);
    wynik2 = (b/k)*min((a/k),guard1) + max((a/k)-2,guard2)*min((b/k),guard1);
    cout << max(wynik1,wynik2) << endl;
}
