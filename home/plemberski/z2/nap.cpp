#include <iostream>
using namespace std;

int main() {
    int n, k, l, m;
    cin >> n;
    int t[n];

for (k=0 ; k < n ; k++) {
   cin >> t[k];
}

  for (l=0 ; l < n ; l += 2) {
   cout <<  t[l] << " " ;
}
cout << " " << endl;

   for (m=1 ; m < n ; m += 2) {
   cout <<  t[m] << " ";
}

}

