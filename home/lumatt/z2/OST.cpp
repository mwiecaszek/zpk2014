#include <iostream>
#include <cmath>

using namespace std;

int main(){

int n;

cin >> n;

if(n==0){
    cout << 1 << endl;
    return 0;
}

int reszta = (n-1)%4;

switch(reszta){

case 0:
    cout << 2 << endl;
    break;

case 1:
    cout << 4 << endl;
    break;

case 2:
    cout << 8 << endl;
    break;

case 3:
    cout << 6 << endl;
    break;

}

return 0;

}






