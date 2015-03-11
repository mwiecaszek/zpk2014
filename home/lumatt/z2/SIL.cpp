#include <iostream>
using namespace std;

int silnia(int n);

int main(){

int n;
cin >> n;
int sil = silnia(n);

cout << sil << endl;

return 0;

}

int silnia(int n){

if(n==0){
    return 1;
}else{
    return n*silnia(n-1);
}

}
