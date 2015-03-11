#include <iostream>
#include <string>
using namespace std;

int main(){
    unsigned int n = 0;
    int k = 0, dlugosc = 0;
    string tekst;
    cin >> n >> k;
    cin >> tekst;
    if(n == 2)
        k = -k;
    dlugosc = tekst.length();
    for(int i = 0; i < dlugosc; i++){
        if(k >= 0){
            if(int(tekst[i]) > 64 && int(tekst[i]) < 91){
                if(int(tekst[i]) + k < 91)
                    tekst[i] = char(int(tekst[i]) + k);
                else
                    tekst[i] = char(int(tekst[i]) - 26 + k);
            }
            if(int(tekst[i]) > 96 && int(tekst[i]) < 123){
                if(int(tekst[i]) + k < 123)
                    tekst[i] = char(int(tekst[i]) + k);
                else
                    tekst[i] = char(int(tekst[i]) - 26 + k);
            }
        }else{
            if(int(tekst[i]) > 64 && int(tekst[i]) < 91){
                if(int(tekst[i]) + k > 64)
                    tekst[i] = char(int(tekst[i]) + k);
                else
                    tekst[i] = char(int(tekst[i]) + 26 + k);
            }
            if(int(tekst[i]) > 96 && int(tekst[i]) < 123){
                if(int(tekst[i]) + k > 96)
                    tekst[i] = char(int(tekst[i]) + k);
                else
                    tekst[i] = char(int(tekst[i]) + 26 + k);
            }
        }
        cout << tekst[i];
    }
    cout << endl;
}
