#include <iostream>
#include <string>
using namespace std;




int main() {
    int n, m, suma1, suma2=0;
    cin >> n >> m;
    int t[n][m];

    for(int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cin >> t[i][j];
        }
    }
    for(int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            suma1=0;
            for (int k=0; k<m; k++){
                if(t[i][k]>=t[j][k])
                    suma1 += t[j][k];
                else
                    suma1 += t[i][k];
            }
            if (suma2==0)
                suma2 = suma1;
            else if (suma1<=suma2)
                suma2 = suma1;
        }
    }
    cout << suma2 << endl;
}
