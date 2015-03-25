#include <iostream>
#include <string>
using namespace std;

char czy(string x, string y) {
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
    string x, znak, y;
    cin >> x >> znak >> y;

    if (znak == "=="){
        if (czy(x,y) == '=')
            cout << "TAK" << endl;
        else
            cout << "NIE" << endl;
    }
    if (znak == "!="){
        if (czy(x,y) != '=')
            cout << "TAK" << endl;
        else
            cout << "NIE" << endl;
    }
    if (znak == ">"){
        if (czy(x,y) == '>')
            cout << "TAK" << endl;
        else
            cout << "NIE" << endl;
    }
    if (znak == "<"){
       if (czy(x,y) == '<')
            cout << "TAK" << endl;
        else
            cout << "NIE" << endl;
    }
    if (znak == ">="){
        if (czy(x,y) == '=' || czy(x,y) == '>')
            cout << "TAK" << endl;
        else
            cout << "NIE" << endl;
    }
    if (znak == "<="){
        if(czy(x,y) == '=' || czy(x,y) == '<')
            cout << "TAK" << endl;
        else
            cout << "NIE" << endl;
    }
}
