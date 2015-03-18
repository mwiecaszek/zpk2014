#include<iostream>
#include<string>
using namespace std;

int wieksza(string x, string y){
    int wynik;
    int rozmiarx=x.length();
    int rozmiary=y.length();
    if(rozmiarx>rozmiary)
        return -1;
    else if(rozmiarx<rozmiary)
        return 1;
    else{
        for(int i=0; i<rozmiarx; i++){
            if(x[i]>y[i])
                return -1;
            if (x[i]<y[i])
                return 1;
        }
    }
    return 0;
}

int main() {

    string x;
    getline(cin, x);
    int dlugoscnapisu;
    dlugoscnapisu=x.length();

    int pierwszaspacja=0, drugaspacja=0;

    for(int i=0; i<dlugoscnapisu ; i++){
        bool czy = x[i]==32;
        if(czy && drugaspacja==0)
            pierwszaspacja=i;
        if (czy && pierwszaspacja!=0)
            drugaspacja=i;
    }

    string a, znak, b;
    a = x.substr (0,pierwszaspacja);
    znak = x.substr (pierwszaspacja+1,drugaspacja-pierwszaspacja-1);
    b = x.substr (drugaspacja+1);

    if (znak=="<"){
        if (wieksza(a,b)==1)
            cout << "TAK";
        else
            cout << "NIE";
    }

    if (znak==">"){
        if (wieksza(a,b)==-1)
            cout << "TAK";
        else
            cout << "NIE";
    }

    if (znak==">="){
        if (wieksza(a,b)==-1 || wieksza(a,b)==0)
            cout << "TAK";
        else
            cout << "NIE";
    }

    if (znak=="<="){
        if (wieksza(a,b)==1 || wieksza(a,b)==0)
            cout << "TAK";
        else
            cout << "NIE";
    }

    if (znak=="=="){
        if (wieksza(a,b)==0)
            cout << "TAK";
        else
            cout << "NIE";
    }

    if (znak=="!="){
        if (wieksza(a,b)==0)
            cout << "NIE";
        else
            cout << "TAK";
    }

}
