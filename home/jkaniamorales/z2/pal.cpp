#include<iostream>
#include<string>
using namespace std;

int main(){

    string slowo;
    cin >> slowo;
    int dlugosc;
    dlugosc = slowo.size();
    bool czypalindrom = true;

    for(int mniejszy = 0, wiekszy = dlugosc-1; mniejszy<wiekszy; mniejszy++, wiekszy--){

        if (slowo[mniejszy]!=slowo[wiekszy])
            czypalindrom=false;

    }

    if(czypalindrom)
        cout << "TAK";
    else
        cout << "NIE";


}
