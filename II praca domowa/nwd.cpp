#include <iostream>
using namespace std;
int nwd(int x, int y){

    while (x!=y){
    if(y<x)
        x-=y;
    else
        y-=x;}
    return y;}

int main(){
int n,x,y;

cin>>n>>x>>y;
    int wynik = nwd(x,y);
    for (int i=2; i<n; i++){
        int a;
    cin >> a;
        wynik = nwd(wynik,a);}
        cout<< wynik<< endl;
}
