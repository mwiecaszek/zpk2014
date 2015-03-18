#include<iostream>
using namespace std;

int main(){

    int n,a;
    cin>>n;
    int t[6];
    for (int j=0;j<6;j++){
        t[j]=0;
    }

    for(int i=0;i<n;i++){
        cin>>a;
        switch (a){
        case 1:
            t[0] = t[0]+1;
            break;
        case 2:
            t[1] = t[1]+1;
            break;
        case 3:
            t[2] = t[2]+1;
            break;
        case 4:
            t[3] = t[3]+1;
            break;
        case 5:
            t[4] = t[4]+1;
            break;
        case 6:
            t[5] = t[5]+1;
            break;
    }}

    cout<<t[0]<<" "<<t[1]<<" "<<t[2]<<" "<<t[3]<<" "<<t[4]<<" "<<t[5];

}
