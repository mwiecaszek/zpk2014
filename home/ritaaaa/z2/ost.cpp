#include <iostream>
using namespace std;
int main(){
    int n;
    int z;
    cin>> n;
    if(n==0)
        z=1;
    else if(n%4==0)
        z=6;
    else if(n%4==1)
        z=2;
    else if(n%4==2)
        z=4;
    else if(n%4==3)
        z=8;
    cout<< z <<endl;
}
