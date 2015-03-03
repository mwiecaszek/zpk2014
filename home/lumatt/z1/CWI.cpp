#include <iostream>
#include <string>
using namespace std;

int main(){

long a,b;
cin >> a >> b;

string odp;

if(a > 0 && b > 0){
    odp = "I";
}else if(a < 0 && b > 0){
    odp = "II";
}else if(a < 0 && b < 0){
    odp = "III";
}else if(a > 0 && b < 0){
    odp = "IV";
}else if(a == 0 && b != 0){
    odp = "OY";
}else if(a != 0 && b == 0){
    odp = "OX";
}else{
    odp = "0";
}

cout << odp << endl;

cin.get();

return 0;
}


