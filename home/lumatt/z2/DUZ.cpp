#include <iostream>
#include <string>

using namespace std;

string odp(bool cond);

int main(){

string liczba1, liczba2, znak;

cin >> liczba1 >> znak >> liczba2;

int count1 = 0;
int count2 = 0;

while(liczba1[count1] == '0' && count1 < liczba1.length()){
    ++count1;
}

if(liczba1=="0") count1 = 0;

while(liczba2[count2] == '0' && count2 < liczba2.length()){
    ++count2;
}

if(liczba2=="0") count2 = 0;

bool czy_rowne, czy_nierowne, czy_mniejsze, czy_wieksze, czy_niewieksze, czy_niemniejsze;
bool flaga = false;

if(liczba1.length() - count1 == liczba2.length() - count2){
    for(int i = 0; i < liczba1.length() - count1; ++i){
        if(liczba1[count1 + i] > liczba2[count2 + i]){
            czy_nierowne = czy_wieksze = czy_niemniejsze = true;
            czy_rowne = czy_mniejsze = czy_niewieksze = false;
            flaga = true;
            break;
        }else if(liczba1[count1 + i] < liczba2[count2 + i]){
            czy_nierowne = czy_mniejsze = czy_niewieksze = true;
            czy_rowne = czy_wieksze = czy_niemniejsze = false;
            flaga = true;
            break;
        }
    }
    if (!flaga){
            czy_rowne = czy_niewieksze = czy_niemniejsze = true;
            czy_nierowne = czy_mniejsze = czy_wieksze = false;
        }
}

if(liczba1.length() - count1 > liczba2.length() - count2){
    czy_nierowne = czy_wieksze = czy_niemniejsze = true;
    czy_rowne = czy_mniejsze = czy_niewieksze = false;
} else if(liczba1.length() - count1 < liczba2.length() - count2){
    czy_nierowne = czy_mniejsze = czy_niewieksze = true;
    czy_rowne = czy_wieksze = czy_niemniejsze = false;
}

if(znak == "=="){
    cout << odp(czy_rowne) << endl;
}else if(znak == "!="){
    cout << odp(czy_nierowne) << endl;
}else if(znak == "<"){
    cout << odp(czy_mniejsze) << endl;
}else if(znak == ">"){
    cout << odp(czy_wieksze) << endl;
}else if(znak == "<="){
    cout << odp(czy_niewieksze) << endl;
}else{
    cout << odp(czy_niemniejsze) << endl;
}

return 0;

}

string odp(bool cond){

    if(cond){
        return "TAK";
    }else{
        return "NIE";
    }

}






