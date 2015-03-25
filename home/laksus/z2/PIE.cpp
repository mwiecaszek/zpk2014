#include<iostream>

using namespace std;

int n, x, first=-1, last=-1, pom;

int main(){
    ios_base::sync_with_stdio(0);
    cin >> n >> x;
    for(int i=1; i <= n; i++){
        cin >> pom;
        if(pom==x && first == -1)
            first = last = i;
        else if (pom == x && i >= last)
            last = i;
    }
    cout << first << " " << last << endl;
}
