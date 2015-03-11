#include<iostream>
using namespace std;

int nwd(int a, int b){
    int NWD=0;
    int r=1;

    if(a==b ||b==0) NWD=a;
    if(a==0) NWD=b;
    else{
        if(b>a){
            while(r!=0){
                r=b%a;
                if(r==0) NWD=a;
                b=a;
                a=r;

        }
        return NWD;
        }

        if(a>b){
            while(r!=0){
                r=a%b;
                if(r==0) NWD=b;
                a=b;
                b=r;

        }
        return NWD;
        }
    }
}

int main(){

    int a;
    int b;
    int n;
    cin>>n;
    int NWD;

    cin>>a>>b;
    NWD=nwd(a,b);
    if(n>2){
    for(int i=0;i<n-2;i++){
        cin>>a;
        NWD=nwd(a,NWD);
    }
    }
    cout<<NWD;
}

