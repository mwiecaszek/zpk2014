#include <iostream>

using namespace std;

int main(){

int n,price;

cin >> n >> price;
cin.ignore();

int temp = -1;
int first = -1,last = -1;

for(int i = 1; i <= n; i++){
    cin >> temp;
    if(temp==price){
        if(first==-1){
            first = last = i;
        }else{
            last = i;
        }
    }
}

cout << first << " " << last;

return 0;

}

