#include <iostream>
using namespace std;

int main(){
int licznik,p,a;
licznik = 0;
p = 0;

cin >> a;

while(a != -1){
if(a!=p && a > 0){
licznik = licznik + 1;
p = a;
cin >> a;
}
else{
p = a;
cin >> a;
}
}
cout << licznik << endl;

}
