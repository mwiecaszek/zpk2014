#include <iostream>
#include <string>

using namespace std;

int main(){

string napis;
cin >> napis;

string odp = "TAK";

for(int i = 0; i < napis.length()-1; i++){
    if(napis[i] != napis[napis.length()- 1 - i]) odp = "NIE";
}

cout << odp;

return 0;

}




