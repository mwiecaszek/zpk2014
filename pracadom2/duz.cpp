#include<iostream>
#include<typeinfo>
using namespace std;

bool wynik(string liczba1,string znak,string liczba2,int wieksza){
    if(liczba1.length()==liczba2.length()){
        for(int i=0;i<liczba1.length();i++){
    if (liczba1[i]==liczba2[i]) continue;
else{
    if(int(liczba1[i])>int(liczba2[i])){
        wieksza=1;
break; }
    if(int(liczba2[i])>int(liczba1[i])){
        wieksza=2;
break; }
}
}
}
    if(liczba1.length()>liczba2.length()) wieksza=1;
    if(liczba1.length()<liczba2.length()) wieksza=2;
    if(znak=="=="){
    if(wieksza==0) return 1;
else return 0;}
    if(znak=="!="){
    if(wieksza!=0) return 1;
else return 0;}
    if(znak==">"){
    if(wieksza==1) return 1;
else return 0;}
    if(znak=="<"){
    if(wieksza==2) return 1;
else return 0;}
    if(znak==">="){
    if(wieksza==0 || wieksza==1) return 1;
else return 0;}
    if(znak=="<="){
    if(wieksza==0 || wieksza==2) return 1;
else return 0;}
}
int main(){

string liczba1;
string liczba2;
string znak;

int wieksza=0;
int odpowiedz;

    cin>>liczba1>>znak>>liczba2;
odpowiedz=wynik(liczba1,znak,liczba2,wieksza);
    if(odpowiedz==0) cout<<"NIE";
    if(odpowiedz==1) cout<<"TAK";
}
