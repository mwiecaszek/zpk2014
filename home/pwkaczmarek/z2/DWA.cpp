#include <iostream>
using namespace std;

int main(){
    int n = 1, m = 1;
    int min_koszt, pomoc = 0;
    cin >> n >> m;
    int t[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++)
            cin >> t[i][j];
    }
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            for(int z = 0; z < m; z++){
                if(t[i][z] < t[j][z])
                    pomoc += t[i][z];
                else
                    pomoc += t[j][z];
            }
         if(i == 0 && j == 1)
                min_koszt = pomoc;
         if(pomoc < min_koszt)
            min_koszt = pomoc;
            pomoc = 0;
        }
    }
    cout << min_koszt << endl;
}
