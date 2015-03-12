#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n, k;
    cin >> n;
    for(k = 2; pow(k,2) <= n; k++){
        if(n % k == 0){
            cout << " zlozona " << endl;
            return 0;
            }
        }
    cout << " pierwsza " << endl;
}
