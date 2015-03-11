#include <iostream>
using namespace std;
int main(){
    unsigned long long i;
    cin >> i;
    while (i != 1){
        if (i % 2 == 0){
            if (i == 2){
                cout << "TAK" << endl;
                break;
            }
            i = i / 2;
        }else{
            cout << "NIE" << endl;
            break;
        }
    }
}
