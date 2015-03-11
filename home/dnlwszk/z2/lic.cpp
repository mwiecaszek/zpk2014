
#include <math.h>

#include <iostream>
using namespace std;

int main() {

    int a;
    cin>>a;
    int c=0;

    for(int i=2; i<=sqrt(a); i++)
    {
        if(a%i==0) {cout<<"zlozona";c++; break;}
    }
    if(c==0) cout<<"pierwsza";
    return 0;

}