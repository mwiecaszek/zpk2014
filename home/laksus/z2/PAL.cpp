#include<iostream>
#include<cstring>

using namespace std;

string a;

int main(){
    ios_base::sync_with_stdio(0);
    cin >> a;
    for(int i=0; i < a.length(); i++)
        if(a[i]!=a[a.length()-1-i]){
            cout << "NIE\n";
            return 0;
        }
    cout << "TAK\n";
}
