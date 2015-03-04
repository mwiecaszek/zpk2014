#include <iostream>
using namespace std;

int main() {
    int a, b, c, k=0;
    cin  >> a >> b >> c;
    if(a >= b && a >= c){
        if(a < b + c){
            k=1;
        }
        else
            k=0;
        }
    if(b >= a && b >= c){
        if(b < a + c){
            k=1;
        }
        else
            k=0;
        }
    if(c >= b && c >= a){
        if(c < a + b){
            k=1;
        }
        else
            k=0;
        }
    if(k == 1){
        cout << "TAK" << endl;
    } 
    else
        cout << "NIE" << endl;
}
