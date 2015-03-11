#include <iostream>
using namespace std;

int main(){
    unsigned int n, x, k;
    int pierwszy = -1, ostatni = -1;
    cin >> n >> x;
    for(unsigned int i = 1; i <= n; i++){
        cin >> k;
        if(k == x){
            if(pierwszy == -1)
                pierwszy = ostatni = i;
            if(pierwszy != -1)
                ostatni = i;
        }
    }
    cout << pierwszy << " " << ostatni << endl;
}
