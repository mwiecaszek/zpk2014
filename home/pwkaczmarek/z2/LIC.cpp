#include <iostream>
using namespace std;

int main(){
    unsigned int n;
    bool pomoc = true;
    cin >> n;
    if(n == 2){}
    else{
        for(unsigned int i = 2; i * i <= n; i++){
            if(n%i == 0){
                cout << "zlozona" << endl;
                pomoc = false;
                break;
            }
        }
    }
    if(pomoc)
        cout << "pierwsza" << endl;
}
