#include <iomanip>
#include <math.h>

#include <iostream>
using namespace std;

int main() {

    int a;
    cin>>a;

    if(a%4==1) cout<<2;
    if(a%4==2) cout<<4;
    if(a%4==3) cout<<8;
    if(a%4==0) cout<<6;

    return 0;

}
