#include<iostream>
#include<cmath>

using namespace std;

double a,b,k;

int main(){
    cin >> a >> b >> k;
    cout << (int)(((floor(b/k)*k - ceil(a/k)*k)/k)+1)<< endl;

}
