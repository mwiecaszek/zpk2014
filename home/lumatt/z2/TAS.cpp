#include <iostream>
#include <cmath>

using namespace std;

int main(){

int n;
cin >> n;

int tab[n];
bool staly = true;

cin >> tab[0];

for(int i = 1; i < n; ++i){
        cin >> tab[i];
         if(tab[i]!=tab[i-1]) staly = false;
}

if(staly){
    cout << "BRAK" << endl;
    return 0;
}

int max1=1, max2=1;

for(int i = n - 1; i > 0; --i){
    if(tab[i]!=tab[0]){
        max1 = i;
        break;
    }
}

for(int i = 0; i < n - 1; ++i){
    if(tab[i]!=tab[n-1]){
        max2 = n - 1 - i;
        break;
    }
}

if(max1 >= max2){
    cout << max1 << endl;
}else{
    cout << max2 << endl;
}

return 0;

}








