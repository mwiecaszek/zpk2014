#include <iostream>
#include<cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    int pierw;
    pierw=sqrt(n);
    bool pierwsza=true;

    for (int i=2; i<=pierw;i++)
        if(n%i==0) pierwsza=false;

    if (pierwsza==true)
        cout<<"pierwsza";
    else
        cout<<"zlozona";
}
