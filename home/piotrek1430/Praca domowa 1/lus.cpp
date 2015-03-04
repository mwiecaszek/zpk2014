#include <iostream>
using namespace std;

int main() {
    unsigned int a, i;
    cin >> a;
    i=0;
    while(a>0){
    if(a%10!=0 || i==1){
    cout << a%10;
    i=1;
    }else{
        //cout << a%10;


    }
    a=a/10;
    }

}
