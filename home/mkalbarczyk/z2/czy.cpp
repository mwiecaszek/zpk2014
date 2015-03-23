#include <iostream>
#include <cmath>
using namespace std;

int main(){

long long n;
bool t=0;
cin>>n;
int i=0;

while(i<60){
    if(n==pow(2,i)){
       t=1;
       break;
       }
    i++;
}

if(t==0) cout<<"NIE";
else cout<< "TAK";

}
