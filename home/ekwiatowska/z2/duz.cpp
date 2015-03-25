#include <iostream>
#include <cstring>
using namespace std;

int sprawdz (string n1, string n2){
    if (n1.size()<n2.size())
        return 1;
    else if (n1.size()>n2.size())
        return 2;
    else {
         for (int i=0; i<n1.size(); i++){
            if (n1[i]<n2[i])
                return 1;
            else if (n1[i]>n2[i])
                return 2;
        }
        return 0;
    }
}

int main() {
    string n1, znak, n2;
    cin >> n1 >> znak >> n2;
    bool tak;

    if (znak=="=="){
        if (sprawdz(n1,n2)==0)
            tak=true;
        else
            tak=false;
    }
    else if (znak=="!="){
        if (sprawdz(n1,n2)==0)
            tak=false;
        else
            tak=true;
    }
    else if (znak=="<"){
        if (sprawdz(n1,n2)==1)
            tak=true;
        else
            tak=false;
    }
    else if (znak==">"){
        if (sprawdz(n1,n2)==2)
            tak=true;
        else
            tak=false;
    }
    else if (znak=="<="){
        if (sprawdz(n1,n2)==2)
            tak=false;
        else
            tak=true;
    }
    else if (znak==">="){
        if (sprawdz(n1,n2)==1)
            tak=false;
        else
            tak=true;
    }

    if (tak)
        cout << "TAK" << endl;
    else
        cout << "NIE" << endl;
}
