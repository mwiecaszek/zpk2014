#include<iostream>
using namespace std;

int main(){
    unsigned int a,b,k,i,j;
    j = 0;
    cin >> a >> b >> k;
    i = a;
    while(i <= b){
        if(i%k == 0){
            j++;
        }
        i++;
    }
    cout << j << endl;
}
