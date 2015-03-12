#include <iostream>
using namespace std;

int main() {
    int n, k, l, jed=0, dwu=0, tro=0, czw=0, pia=0, szo=0;
    cin >> n;
    int t[n];

for (k=0 ; k < n ; k++) {
   cin >> t[k];
}

  for (l=0 ; l < n ; l++) {
   if (t[l]==1) jed++;
   else if (t[l]==2) dwu++;
   else if (t[l]==3) tro++;
   else if (t[l]==4) czw++;
   else if (t[l]==5) pia++;
   else if (t[l]==6) szo++;
   }
cout << jed << " " << dwu << " " << tro << " " << czw << " " << pia << " " << szo << " ";
}
