
#include <math.h>

#include <iostream>
using namespace std;

int main() {

    string a;
    cin>>a;
int n=a.size();
       int c = 0;
    for(int i=0; i<(n-1)/2; i++)
    {
       
         if(a[i]!= a[n-i-1]) {cout<<"NIE"; c++; break; }
    }
    if(c==0) cout<<"TAK";
    return 0;

}
