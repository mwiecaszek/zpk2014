#include <iostream>
#include <string>
using namespace std;

int najwieksza_mniejsza(int n, int t[], int m) {
int drugi=0;

for (int i=0; i<n; i++) {
   if (t[i]>drugi && t[i]<m)
   drugi=t[i];
}
return drugi;
}

int main() {
    int n, maksi=0;
    cin >> n;
    int t[n];

    for (int i = 0; i < n; i++) {
        cin >> t[i];

   if (t[i]>maksi)
    maksi=t[i];
    }
    cout << najwieksza_mniejsza(n,t, maksi) << endl;

}
