#include<iostream>

using namespace std;

int n, pom, T[7];

int main(){
    ios_base::sync_with_stdio(0);
    cin >> n;
    for(int i =1; i <= n; i++){
        cin >> pom;
        T[pom]++;
    }
    for(int i =1; i <= 6; i++)
        cout << T[i] << " ";
}
