#include<iostream>
#include<cstring>

using namespace std;

string a;

int main(){

    cin >> a;
    int pom=a.length()-1;
    while(a[pom]=='0')
        pom--;
    for(int i=pom;i>=0;i--)
        cout << a[i];
}
