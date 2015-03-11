#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int t[6]={0,0,0,0,0,0};
    int x;
    for (int i=0; i<n; i++){
        cin >> x;
        t[x-1]++;}
    for (int i=0; i<6;i++)
        cout<<t[i]<<" ";
}
