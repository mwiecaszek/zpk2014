#include <iostream>
#include <string>

using namespace std;

int main(){

int n;
cin >> n;

int first = 0, second = 0;
int temp = 0;
// int tab[n-1];

for (int i = 0; i < n; ++i){
    //cin >> tab[i];
    cin >> temp;
    if(temp >= first){
        second = first;
        first = temp;
    }else if(temp < first && temp >= second){
        second = temp;
    }
}

cout << second << endl;

return 0;

}






