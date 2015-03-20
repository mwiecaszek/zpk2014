#include <iostream>
#include <string>
using namespace std;

char porownanie(string x, string y) {
    if (x.size() > y.size())
        return '>';
    else if (x.size() < y.size())
        return '<';
    else {
        for (int i = 0; i< x.size(); ++i){
            if (x[i] > y[i]) return '>';
            if (x[i] < y[i]) return '<';
        }
        return '=';
    }
}

int main() {
    string x, a, y;
    cin >> x >> a >> y;

    if (a == "=="){
        if (porownanie(x,y) == '=')
            cout << "TAK" << endl;
        else
            cout << "NIE" << endl;
    }
    if (a == "!="){
        if (porownanie(x,y) != '=')
            cout << "TAK" << endl;
        else
            cout << "NIE" << endl;
    }
    if (a == ">"){
        if (porownanie(x,y) == '>')
            cout << "TAK" << endl;
        else
            cout << "NIE" << endl;
    }
    if (a == "<"){
       if (porownanie(x,y) == '<')
            cout << "TAK" << endl;
        else
            cout << "NIE" << endl;
    }
    if (a == ">="){
        if (porownanie(x,y) == '=' || porownanie(x,y) == '>')
            cout << "TAK" << endl;
        else
            cout << "NIE" << endl;
    }
    if (a == "<="){
        if(porownanie(x,y) == '=' || porownanie(x,y) == '<')
            cout << "TAK" << endl;
        else
            cout << "NIE" << endl;
    }
}
