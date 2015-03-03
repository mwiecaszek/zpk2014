#include <iostream>
using namespace std;
int main(){
long a,b,k,krzesla;
cin >> a >> b >> k;
if(a < k || b < k){
                    krzesla = 0;
                    }else if(a < 2*k || b < 2*k){
                    krzesla = max(a/k,b/k);
                    }else{
                    krzesla = max(a/k*2+(b-2*k)/k*2,b/k*2+(a-2*k)/k*2);
                    }
cout << krzesla << endl;
}
