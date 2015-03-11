#include<iostream>
using namespace std;

int main(){

    int n, price,a;
    int pierwszy=-1;
    int ostatni=-1;
    cin>>n>>price;

    for(int i=0; i<n; i++){
        cin>>a;
        if (pierwszy==-1 && a==price) pierwszy=i+1;
        if (a==price) ostatni =i+1;
    }
    cout<<pierwszy<<" "<<ostatni;
}
