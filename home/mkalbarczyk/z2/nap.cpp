#include<iostream>
using namespace std;

int main(){

    int n;
    string a;
    string zuza;
    string antek;
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>a;
        if(i==0) zuza = a;
        else{
            if(i%2==0) zuza = zuza+" "+a;
            if(i==1) antek = a;
            if(i%2==1 && i!=1) antek = antek+" "+a;
    }}

    cout<<zuza<<endl<<antek;
}
