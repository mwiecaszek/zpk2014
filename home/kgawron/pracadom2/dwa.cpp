#include <iostream>
using namespace std;

int main(){
int n = 1, m = 1;
int koszt, x = 0;

cin >> n >> m;
int t[n][m];

    for(int i = 0; i < n; i++)
{
    for(int j = 0; j < m; j++)
    cin >> t[i][j];
}
    for(int i = 0; i < n - 1; i++){
    for(int j = i + 1; j < n; j++){
    for(int k = 0; k < m; k++){

        if(t[i][k] < t[j][k])
        x += t[i][k];
        else
        x += t[j][k];
}
        if(i == 0 && j == 1)
    koszt = x;
        if(x < koszt)
    koszt = x;
    x = 0;
}
}
    cout << koszt << endl;
}
