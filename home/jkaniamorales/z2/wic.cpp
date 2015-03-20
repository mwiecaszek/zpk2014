#include<iostream>
using namespace std;

struct element{
    int element;
    int miejsce;
};

element max (int t[], int n){
    element wynik;
    wynik.element=t[0];
    wynik.miejsce=0;
    for(int i=0; i<n; i++){
        if(wynik.element<t[i]){
            wynik.element=t[i];
            wynik.miejsce=i;
        }
    }

    return wynik;
}

int main() {
    int n;
    cin >> n;
    int t[n];
    for(int i=0; i<n; i++){
        cin >> t[i];
    }

    int wynik=0;
    for(int i=0; i<n; i++){
        if(t[i]>wynik && i!=max(t, n).miejsce)
            wynik=t[i];
    }


    cout << wynik;
}
