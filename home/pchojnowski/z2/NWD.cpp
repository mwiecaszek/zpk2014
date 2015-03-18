#include <iostream>
using namespace std;
int NWD(int a, int b){
int r=a%b;
while(r!=0){
    a=b;
    b=r;
    r=a%b;
} return b;
}
int main(){
int n,a;
cin>>n;
int t[n];
for(int i=0;i<n;i++)
    cin>>t[i];
for(int i=0; i<n-1;i++){

     a= t[i+1]= NWD(t[i],t[i+1]);

}
cout<<a;



}
