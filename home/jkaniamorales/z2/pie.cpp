#include<iostream>
using namespace std;

int main(){

    int n, x;
    cin >> n >> x;
    int t[n];

    for(int i=0; i<n; i++){

        cin >> t[i];

    }

    int pierwsze=-1;
    int ostatnie=-1;
    int ilerazy=0;

    for(int j=0; j<n; j++){

        if (t[j]==x){
            ilerazy++;
            if(ilerazy==1){
                pierwsze=j+1;
            }
            ostatnie=j+1;
        }

    }

    cout << pierwsze << " " << ostatnie;

}
