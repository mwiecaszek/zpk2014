#include <iostream>
using namespace std;
int main(){
long a,b,k,ile;
cin >> a >> b >> k;
if(a % k == 0 || b % k ==0){
    ile = 1 + (b-a)/k;
}else{
    ile = 1 + (b - b%k - (a - a%k + k))/k;
}
cout << ile << endl;
}





