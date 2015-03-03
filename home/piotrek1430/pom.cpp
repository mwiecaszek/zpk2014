#include <iostream>
using namespace std;

int main() {
    int a, b, wynik;
    b=0;
    wynik=0;
    while(a!=-1){
    cin >> a;
    if(a!=b && a!=0 && a>-1){
    wynik=wynik+1;
    }
    b=a;
    }
    cout << wynik<< endl;

}
