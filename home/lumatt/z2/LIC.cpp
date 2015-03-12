#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){

int k;
cin >> k;

string typ = "pierwsza";
int koniec = sqrt(k) + 1;

if(k > 2){
    for(int i = 2; i < koniec; i++){
        if(k%i==0) typ = "zlozona";
    }
}



cout << typ;

return 0;

}



