#include<iostream>
using namespace std;

int main(){

    int n, x, e;
    int pie = -1;
    int ost = -1;
    cin >> n >> x;

    for(int i = 0; i < n; i++){
        cin >> e;
        if (pie == -1 && e == x)
            pie = i + 1;
        if (e == x)
            ost = i + 1;
    }
    cout << pie << " " << ost;
}
