
#include <iostream>
using namespace std;

int main(){

long a,b,k;
cin >> a >> b >> k;

long liczba;

if(a % k == 0 || b % k ==0){
    liczba = 1 + (b-a)/k;
}else{
    liczba = 1 + (b - b%k - (a - a%k + k))/k;
}

cout << liczba << endl;

cin.get();

return 0;
}





