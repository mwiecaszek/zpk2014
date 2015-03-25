#include<iostream>
#include<cstring>

using namespace std;

int pol,k;
string tekst;

void szyfruj(int x){
    for(int i=0; i < tekst.length(); i++)
        if((int)tekst[i]>=65 && (int)tekst[i]<=90)
            cout << (char)(65+((((int)tekst[i]-65)+x)%26));
        else if((int)tekst[i]>=97 && (int)tekst[i]<=122)
            cout << (char)(97+((((int)tekst[i]-97)+x)%26));
        else
            cout << tekst[i];
    cout << endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin >> pol >> k >> tekst;
    if(pol==1)
        szyfruj(k);
    else
        szyfruj(26-k);
}
