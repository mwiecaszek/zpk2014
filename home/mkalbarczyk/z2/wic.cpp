#include<iostream>
using namespace std;

int main(){

int n,a;
cin>>n;
int najlepszy=0;
int wice=0;

for (int i=0;i<n;i++){
    cin>>a;
    if (a>najlepszy) {
            wice=najlepszy;
            najlepszy=a;
    }
    if (a<najlepszy && a>wice) wice=a;
}

cout<<wice;

}
