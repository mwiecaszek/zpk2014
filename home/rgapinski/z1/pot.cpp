#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int pot_2 = 1;
    while( pot_2 < (n+1) ){
        cout << pot_2 << endl;
        pot_2 = 2*pot_2;
    }
}
