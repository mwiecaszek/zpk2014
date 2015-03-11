#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    for(int i=0; i<s.size(); i++){
        if (s[i] != s[s.size()-1-i]){
            cout << "NIE" << endl;
            return 0;
        }
    }
    cout << "TAK" << endl;
}
