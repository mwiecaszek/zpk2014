#include<iostream>

using namespace std;

int akt=0, pop=0, licz=0;

int main(){

    while(pop != -1){
        cin >> akt;
        if(akt>pop)
            licz++;
        pop = akt;
    }
    cout << licz << endl;
}
