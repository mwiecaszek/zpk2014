#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    bool czypierwsza=true;

    for(int i=2; i*i<=n; i++){

        if (n%i==0)
            czypierwsza=false;

    }

    if(czypierwsza)
        cout << "pierwsza";
    else
        cout << "zlozona";

}
