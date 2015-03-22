#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int tab[n];
    for (int i = 0; i < n; i++){
        cin >> tab[i];
    }
    for(int h=0;h<n;h++){
        if(h%2==0){
        cout << tab[h] << " ";
        }
    }
    endl (cout);
    for(int j=0;j<n;j++){
        if(j%2!=0){
        cout << tab[j] << " ";
        }
    }
}
