#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int t[n];
    for (int i = 0; i < n; i++)
    {
        cin >> t[i];
    }

   for (int p=0; p<n;p=p+2)
    {
        cout<<t[p]<<" ";
    }
    cout<<endl;

    for (int np=1; np<n;np=np+2)
    {
        cout<<t[np]<<" ";
    }
}

