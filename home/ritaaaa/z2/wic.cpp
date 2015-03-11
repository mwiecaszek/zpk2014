#include<iostream>
using namespace std;

int main(){
int n,a;
cin>>n;
int wice=0;
int naj=0;
for (int i=0;i<n;i++){
    cin>>a;
    if (a>naj) {
            wice=naj;
            naj=a;
    }
    if (a<naj && a>wice) wice=a;
}

cout<<wice;

}
