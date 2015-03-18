#include <iostream>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    int t[n];
    for (int i=0; i<n; i++)
        cin >> t[i];
    int p=-1;
    int k=-1;
    for (int j=0; j<n; j++){
        if (p==-1 && t[j]==x){
            p=j+1;
            k=j+1;
        }
        if (p!=-1 && t[j]==x)
            k=j+1;
    }
    cout << p << " " << k << endl;

}
