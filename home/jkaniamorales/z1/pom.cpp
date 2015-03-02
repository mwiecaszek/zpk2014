#include<iostream>
using namespace std;

int main(){

    int odczyt1, odczyt2, zwiedzajacych;
    zwiedzajacych=0;
    odczyt1=0;
    odczyt2=0;
    while(odczyt1!=-1){
            if(odczyt1!=odczyt2){
                zwiedzajacych++;
            }
            odczyt2=odczyt1;
            cin >> odczyt1;
    }
    cout << zwiedzajacych;
}
