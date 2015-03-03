#include <iostream>
#include <cmath>
using namespace std;
int main(){
long long n;
cin >> n;
for(int i=0; i < 60; i++){
    if(n == pow(2,i)){
        cout << "TAK" << endl;
        return 0;
    }
}
cout << "NIE" << endl;
}






