#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size();
    bool pal = true;

    for(int i = 0; i < n; i++)
        pal = pal && (s[i] == s[n - 1 - i]);

    if(pal)
        cout << "TAK" << endl;
    else
        cout << "NIE" << endl;
}
