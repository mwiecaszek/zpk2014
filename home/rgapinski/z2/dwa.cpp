#include <iostream>
using namespace std;

int main(){
    int min_koszt,n ,m ,i ,k ,l , x = 0;
    cin >> n >> m;
    int koszyk[n][m];
    for(i = 0; i < n; i++){
        for(k = 0; k < m; k++)
            cin >> koszyk[i][k];
        }
    for(int i = 0; i < n - 1; i++){
        for(int k = i + 1; k < n; k++){
            for(int l = 0; l < m; l++){
                if(koszyk[i][l] < koszyk[k][l])
                    x = x + koszyk[i][l];
                else
                    x = x + koszyk[k][l];
                }
            if(i == 0 && k == 1)
                min_koszt = x;
            if(x < min_koszt)
                min_koszt = x;
                x = 0;
            }
        }
    cout << min_koszt << endl;
}
