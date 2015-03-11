#include <iostream>
using namespace std;

int main(){
    unsigned long long i;
    cin >> i;
    while(i != 1){
        if(i % 2 != 0){
            cout << " NIE " << endl;
            i = 1;
        }
        else{
            if(i == 2)
                cout << " TAK " << endl;
            i = i / 2;
        }
    }
}
