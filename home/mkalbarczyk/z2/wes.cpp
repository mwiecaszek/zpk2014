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


int ile(int n,int skok){
    int t[n];
    int j=0;
    int skoki=0;

    skoki = n/nwd(n,skok);
    return skoki;

}

int main(){

int z, n, skok;

cin>>z;
int wyniki[z];

for(int i=0;i<z;i++){
    cin>>n>>skok;;
    wyniki[i]=ile(n,skok);
}

for(int j=0;j<z;j++){

    cout<<wyniki[j]<<endl;
}
}
