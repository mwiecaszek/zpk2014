#include<iostream>
using namespace std;

int main(){

    int n;
    int a;

    cin>>n;
    int t[n];
    for(int i=0; i<n; i++){
        cin>>a;
        t[i]=a;
    }

    for(int j=0;j<n;j=j+2){
        cout<<t[j]<<" ";
    }

    cout<<endl;

    for(int k=1;k<n;k=k+2){
        cout<<t[k]<<" ";
    }

}
