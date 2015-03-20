#include <iostream>

using namespace std;

int NWD (int a, int b) {
    int r=a%b;
    while (r!=0){
        a=b;
        b=r;
        r=a%b;
    }
    return b;
}

int main() {
    int n;
    cin >> n;
    int a, b;
    cin >> a >> b;
    int wyn=NWD(a,b);
    for (int i=2; i<n; i++){
        int c;
        cin >> c;
        wyn=NWD(wyn,c);
    }
    cout << wyn << endl;
}
