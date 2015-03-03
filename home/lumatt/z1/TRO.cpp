#include <iostream>
#include <string>
using namespace std;

int main(){

long a,b,c;
cin >> a >> b >> c;

string odp;

if(a + b <= c || a + c <= b || b + c <= a){
    odp = "NIE";
}else{
    odp = "TAK";
}

cout << odp << endl;

cin.get();

return 0;
}

