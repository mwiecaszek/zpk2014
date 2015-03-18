#include <iostream>

using namespace std;

int NWD(int a, int b) {
    int c = a % b;
    while (c != 0) {
        a = b;
        b = c;
        c = a % b;
    }
    return b;
}

int main() {
    int n;
    cin>>n;
    int tablica[n];
    for (int i=0;i<n;i++)
        cin>>tablica[i];

    int nw=tablica[0];

    for(int k=1;k<n;k++)
        {nw=NWD(tablica[k],nw);}

    cout<<nw;

}
