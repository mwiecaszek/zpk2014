#include <iostream>
using namespace std;

string a, b;
string spr_zaleznosci () {
    if (a.size() > b.size())
        return "wieksza";
    else if (a.size() < b.size())
        return "mniejsza";
    else if (a.size() == b.size()) {
        for (int i = 0; i < a.size(); i++) {
            if (a[i] > b[i])
                return "wieksza";
            if (a[i] < b[i])
                return "mniejsza";
        }
        return "rowne";
    }
}

int main() {
    string znak;
    cin >> a >> znak >> b;

    if (znak == "==") {
        if (spr_zaleznosci() == "rowne")
            cout << "TAK" << endl;
        else
            cout << "NIE" << endl;
    }
    else if (znak == "!=") {
        if (spr_zaleznosci() != "rowne")
            cout << "TAK" << endl;
        else
            cout << "NIE" << endl;
    }
    else if (znak == ">=") {
        if (spr_zaleznosci() == "rowne" || spr_zaleznosci() == "wieksza")
            cout << "TAK" << endl;
        else
            cout << "NIE" << endl;
    }
    else if (znak == "<=") {
        if (spr_zaleznosci() == "rowne" || spr_zaleznosci() == "mniejsza")
            cout << "TAK" << endl;
        else
            cout << "NIE" << endl;
    }
    else if (znak == ">") {
        if (spr_zaleznosci() == "wieksza")
            cout << "TAK" << endl;
        else
            cout << "NIE" << endl;
    }
    else if (znak == "<") {
        if (spr_zaleznosci() == "mniejsza")
            cout << "TAK" << endl;
        else
            cout << "NIE" << endl;
    }
}
