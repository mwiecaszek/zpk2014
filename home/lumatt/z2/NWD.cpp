#include <iostream>
#include <string>

using namespace std;

int NWD(int tab[], int n);

int main(){

int n;
cin >> n;
cin.ignore();

int tab[n-1];

for (int i = 0; i < n; ++i){
    cin >> tab[i];
}

cout << NWD(tab,n) << endl;

return 0;

}

int NWD(int tab[], int n){

    if(n==2){
            while(tab[0]!=tab[1]){
                if(tab[1]>tab[0]){
                    tab[1] = tab[1] - tab[0];
                }else{
                    tab[0] = tab[0] - tab[1];
                }
            }

            return tab[0];

    }else{

        int temp[n-2];
        for(int i = 0; i < n-1; ++i){
            temp[i] = tab[i];
        }
        int temp2[2] = {NWD(temp,n-1),tab[n-1]};
        return NWD(temp2,2);
    }
}





