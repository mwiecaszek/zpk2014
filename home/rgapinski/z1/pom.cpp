#include <iostream>
using namespace std;

int main(){
    int pomiar = 0;
    int odwiedzajacy = 0;
    int stan_czujnika = 0;
    while(pomiar >= 0){
        cin >> pomiar;
        if (pomiar > stan_czujnika){
            odwiedzajacy++; //+1
            stan_czujnika = pomiar;
        }
    }
    cout << odwiedzajacy << endl;
}
