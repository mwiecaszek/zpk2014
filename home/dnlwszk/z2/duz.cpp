
#include <math.h>

#include <iostream>
using namespace std;

bool porownanie(string czemu, int a, int b){

    if(czemu=="==") if(a==b) return true;

    if(czemu=="!=") if(a!=b) return true;

    if(czemu==">=") if(a>=b) return true;

    if(czemu=="<=") if(a<=b) return true;

    if(czemu==">") if(a>b) return true;

    if(czemu=="<") if(a<b) return true;


    return false;
}
int main() {

    int a;
    cin>>a;
    string czemu;
    cin>>czemu;
    int b;
    cin>>b;
    if(porownanie(czemu,a,b)==true) cout<<"TAK";
    if(porownanie(czemu,a,b)==false) cout<<"NIE";


    return 0;

}