#include <iostream>
#include <string>
using namespace std;

int main(){

long a,b,k;
cin >> a >> b >> k;

long liczba;

if(a < k || b < k){
    liczba = 0;
}else if(a < 2*k || b < 2*k){
    liczba = max(a/k,b/k);
}else{
    liczba = max(a/k*2+(b-2*k)/k*2,b/k*2+(a-2*k)/k*2);
}


cout << liczba << endl;

cin.get();

return 0;
}



