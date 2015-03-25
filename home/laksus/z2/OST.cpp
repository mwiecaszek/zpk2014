#include<iostream>

using namespace std;

int n;

int main(){
    ios_base::sync_with_stdio(0);
    
    cin >> n;
    if(n==0)
        cout << "1" << endl;
    else if(n%4==0)
        cout << "6" << endl;
    else if(n%4==1)
        cout << "2" << endl;
    else if(n%4==2)
        cout << "4" << endl;
    else if (n%4==3)
        cout << "8" << endl;
    
}
