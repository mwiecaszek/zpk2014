#include <iostream>
using namespace std;

int main(){
    string s;
    bool p = true;
    int i = 0;
    cin >> s;

    while( i < s.length()/2 && p == true) {
        if( s[i] != s[s.length()- 1 - i] ) {
            p=false;
        }
        i = i+1;
    }

    if( p == true)
        cout << "TAK" << endl;
    else
        cout << "NIE" << endl;

}
