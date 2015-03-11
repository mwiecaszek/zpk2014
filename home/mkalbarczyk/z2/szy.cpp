#include<iostream>

using namespace std;

int main(){

string slowo;
string wynik;
int co;
int n;

cin>>co>>n>>slowo;

for(int i=0; i<slowo.length();i++){
    if(co==1){
    if(int(slowo[i])>=65 && int(slowo[i])<=90){
        int a=int(slowo[i])+n;
        if(a>90) a=a-26;
        wynik += char(a);
    }
    else if (int(slowo[i])>=97 && int(slowo[i])<=122){
        int a=int(slowo[i])+n;
        if(a>122) a=a-26;
        wynik += char(a);
    }
    else{
        wynik +=slowo[i];
    }

    }
    else if (co==2){
    if(int(slowo[i])>=65 && int(slowo[i])<91){
        int a=int(slowo[i])-n;
        if(a<65) a=a+26;
        wynik += char(a);
    }
    else if (int(slowo[i])>=97 && int(slowo[i])<=122){
        int a=int(slowo[i])-n;
        if(a<97) a=a+26;
        wynik += char(a);
    }
    else{
        wynik +=slowo[i];
    }

    }
}
cout<<wynik;
}
