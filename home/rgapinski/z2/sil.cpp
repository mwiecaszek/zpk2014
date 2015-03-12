#include <iostream>
using namespace std;

int main(){
    int n, k, silnia = 1;
    cin >> n;
    if (n > 1){
        for(k = 2; k <= n ; k++){
            silnia = silnia * k;
        }
        cout << silnia << endl;
    }
    else{
        cout << silnia << endl;
    }
}
