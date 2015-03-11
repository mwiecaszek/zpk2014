#include <iostream>
using namespace std;

int main(){
int n,l=0;
cin>>n;
int t[n];
int t2[6];

for(int i=0;i<n;i++)
    cin>>t[i];

for(int j=0; j<6; j++)
    t2[j]=0;


for(int i=0; i<n; i++){
        for(int j=1; j<7; j++){
            if(t[i]==j) t2[j-1]++;
        }
}
for(int j=0; j<6; j++)
    cout<<t2[j]<<" ";


}






