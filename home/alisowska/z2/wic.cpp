#include <iostream>
using namespace std;
int main() {
    int wic=-1;
    int n;
    cin >> n;
    int p[n];
    for (int i=0; i<n; i++)
        cin >> p[i];
    int maks=p[0];
    for (int i=0; i<n; i++){
        if (p[i]>maks){
            wic=maks;
            maks=p[i];
        }
        if(p[i]<maks && p[i]>wic){
        wic=p[i];}
    }
    cout<<wic<<endl;
}
