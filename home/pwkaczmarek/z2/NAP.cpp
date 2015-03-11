#include <iostream>
using namespace std;

int main(){
    unsigned int n = 2;
    cin >> n;
    unsigned int t[n];
    for(unsigned int i = 0; i < n; i++)
        cin >> t[i];
    for(unsigned int i = 0; i < n; i += 2)
        cout << t[i] << " ";
    cout << endl;
    for(unsigned int i = 1; i < n; i += 2)
        cout << t[i] << " ";
    cout << endl;
}
