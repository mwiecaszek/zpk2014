#include<iostream>
#include<typeinfo>
using namespace std;

bool czy_prawda(string pierwsza,string znak,string druga,int ktora){

    if(pierwsza.length()==druga.length()){
    for(int i=0;i<pierwsza.length();i++){
        if (pierwsza[i]==druga[i]) continue;
        else{
            if(int(pierwsza[i])>int(druga[i])){
                ktora=1;
                break;
            }
            if(int(druga[i])>int(pierwsza[i])){
                ktora=2;
                break;
            }
        }

    }
    }

    if(pierwsza.length()>druga.length()) ktora=1;
    if(pierwsza.length()<druga.length()) ktora=2;
        if(znak=="=="){
            if(ktora==0) return 1;
            else return 0;}
        if(znak==">="){
            if(ktora==0 || ktora==1) return 1;
            else return 0;}
        if(znak=="<="){
            if(ktora==0 || ktora==2) return 1;
            else return 0;}
        if(znak==">"){
            if(ktora==1) return 1;
            else return 0;}
        if(znak=="<"){
            if(ktora==2) return 1;
            else return 0;}
        if(znak=="!="){
            if(ktora!=0) return 1;
            else return 0;}
    }



int main(){
string pierwsza;
string druga;
string znak;
int ktora=0;
int wynik;

cin>>pierwsza>>znak>>druga;

wynik=czy_prawda(pierwsza,znak,druga,ktora);

if(wynik==1) cout<<"TAK";
if(wynik==0) cout<<"NIE";

}
