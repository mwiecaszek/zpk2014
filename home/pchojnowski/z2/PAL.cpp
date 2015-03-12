#include <iostream>
using namespace std;

int main() {

string s;
cin>>s;
int n=s.length();
bool palindrom=1;


for(int i=0;i<n;i++){
    if(i<=n-i)
    if(s[i]!=s[n-i-1]) palindrom=0;


}

if(palindrom) cout<<"TAK";
else cout<<"NIE";

}
