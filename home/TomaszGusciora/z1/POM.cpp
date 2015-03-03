#include <iostream>
using namespace std;
int main(){
long n = 0;
long p = 0;
long t = 0;
while(p != -1){
    t = p;
    cin >> p;
    if(p != 0 && p > t){
        n++;
    }
}
cout << n << endl;
}

