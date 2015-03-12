#include<iostream>

using namespace std;

int main(){

    int n,a;

    int wynik1=0;
    int wynik2=0;
    int ostateczny;

    cin>>n;
    int t[n];

    for(int i=0;i<n;i++){
        cin>>a;
        t[i]=a;
    }

    for(int i=n-1;i>0;i--){

        if(t[i]!=t[0]) {
                wynik1=i;
                break;
        }
        else continue;
        }



    for(int i=0;i<n;i++){

        if(t[i]!=t[n-1]){
            wynik2=n-1-i;
            break;
        }
        else continue;
    }

    if(wynik1>wynik2) ostateczny=wynik1;
    else ostateczny=wynik2;

    if (ostateczny==0) cout<<"BRAK";
    else cout<<ostateczny;

}
