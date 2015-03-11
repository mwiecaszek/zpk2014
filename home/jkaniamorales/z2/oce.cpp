#include<iostream>
using namespace std;

int main(){

    int n, x;
    cin >>n;

    int koszyki[6];
    for(int i=0; i<6; i++){
        koszyki[i]=0;
    }

    for(int i=0; i<n; i++){
        cin >> x;
        koszyki[x-1]+=1;
    }

    for(int i=0; i<6; i++){
        cout << koszyki[i] << " ";
    }

}
