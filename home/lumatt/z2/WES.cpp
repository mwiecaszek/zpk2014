#include <iostream>

using namespace std;

int NWD(int tab[]);

int main(){

int n;
cin >> n;
cin.ignore();

int tab[2*n];

for (int i = 0; i < 2*n; ++i){
    cin >> tab[i];
}

int j = 0;
int temp[2];

while(j < 2*n){
    temp[0] = tab[j];
    temp[1] = tab[j+1];
    j = j + 2;
    cout << temp[0] / NWD(temp) << endl;
}

return 0;

}

int NWD(int tab[]){

    while(tab[0]!=tab[1]){
        if(tab[1]>tab[0]){
            tab[1] = tab[1] - tab[0];
        }else{
            tab[0] = tab[0] - tab[1];
        }
    }

    return tab[0];

}






