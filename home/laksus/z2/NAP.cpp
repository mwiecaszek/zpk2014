#include<iostream>
#include<cstring>

using namespace std;

int n;

int main(){
    ios_base::sync_with_stdio(0);
    cin >> n;
    int T[n];
    for(int i=1; i <= n; i++)
        cin >> T[i];
    for(int i=1; i <= n; i+=2)
        cout << T[i] << " ";
    cout << endl;
    for(int i=2; i <= n; i+=2)
        cout << T[i] << " ";
    cout << endl;
}
