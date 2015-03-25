#include <iostream>
#include <cstring>
using namespace std;

string a,b,op;

bool operator==(string a,string b){
    if(a.length()!=b.length())
        return false;
    else
        for(int i=0; i < a.length();i++)
            if(a[i]!=b[i]) return false;
    return true;
}

bool operator!=(string a,string b){
    if(a.length()!=b.length())
        return true;
    else
        for(int i=0; i < a.length();i++)
            if(a[i]!=b[i]) return true;
    return false;
}

bool operator<(string a,string b){
    if(a.length()<b.length())
        return true;
    else if(a.length()>b.length())
        return false;
    else
        for(int i=0; i < a.length();i++)
            if(a[i]<b[i]) return true;
    return false;
}

bool operator>(string a,string b){
    if(a.length()>b.length())
        return true;
    else if(a.length()<b.length())
        return false;
    else
        for(int i=0; i < a.length();i++)
            if(a[i]>b[i]) return true;
    return false;
}



int main() {
    ios_base::sync_with_stdio(0);
    cin >> a >> op >> b;
    if (op=="=="){
        if(a==b)
            cout << "TAK\n";
        else
            cout << "NIE\n";
    }
    else if(op=="!="){
        if(a!=b)
            cout << "TAK\n";
        else
            cout << "NIE\n";
    }
    else if(op==">"){
        if(a>b)
            cout << "TAK\n";
        else
            cout << "NIE\n";
    }
    else if(op=="<"){
        if(a<b)
            cout << "TAK\n";
        else
            cout << "NIE\n";
    }
    else if(op==">="){
        if(a>b || a==b)
            cout << "TAK\n";
        else
            cout << "NIE\n";
    }
    else if(op=="<="){
        if(a<b || a==b)
            cout << "TAK\n";
        else
            cout << "NIE\n";
    }
    return 0;
}
