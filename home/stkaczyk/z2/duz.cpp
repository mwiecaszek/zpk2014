#include <iostream>
#include <string>
using namespace std;


char porownaj(string a, string b) {
    if(a.size()>b.size())
        return '>';
    else if(a.size()<b.size())
        return '<';
    else {
        for(int i=0; i<=(a.size()-1); i++){
            if(a[i]>b[i])
                return '>';
            if(a[i]<b[i])
                return '<';
        }
        return '=';
    }
}

int main() {
    string x, a, y;
    cin >> x >> a >> y;

    if (a == "=="){
        if(porownaj(x,y) == '=')
            cout << "TAK" << endl;
        else
            cout << "NIE" << endl;
    }
    if (a == "!="){
        if(porownaj(x,y) != '=')
            cout << "TAK" << endl;
        else
            cout << "NIE" << endl;
    }
    if (a == ">"){
        if(porownaj(x,y) == '>')
            cout << "TAK" << endl;
        else
            cout << "NIE" << endl;
    }
    if (a == "<"){
        if(porownaj(x,y) == '<')
            cout << "TAK" << endl;
        else
            cout << "NIE" << endl;
    }
    if (a == ">="){
        if(porownaj(x,y) == '=' || porownaj(x,y) == '>')
            cout << "TAK" << endl;
        else
            cout << "NIE" << endl;
    }
    if (a == "<="){
        if(porownaj(x,y) == '=' || porownaj(x,y) == '<')
            cout << "TAK" << endl;
        else
            cout << "NIE" << endl;

    }
}
