#include <iostream>
using namespace std;

int main(){
    int n;
    int x;
    cin >> n >> x;

    int t[n];
    for( int i=0; i < n; i++) {
        cin >> t[i];
    }

    int minimum = -1;
    int maximum = -1;
    for( int i = 0; i < n; i++) {
        if( t[i] == x && minimum == -1){
            minimum = i+1;
            maximum = i+1;
        }
        if( t[i] == x && minimum != -1)
            maximum = i+1;
    }

    cout << minimum << " " << maximum << endl;

}
