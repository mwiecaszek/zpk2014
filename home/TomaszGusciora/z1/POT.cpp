#include <iostream>
#include <cmath>
using namespace std;
int main(){
long n;
cin >> n;
cout.setf(ios_base::fixed);
cout.precision(0);
int iter = 0;
while(pow(2,iter) <= n){
    cout << pow(2,iter) << endl;
    iter++;
}
}



