#include <iostream>
#include <string>

using namespace std;

int main(){

int komenda,kod;
string txt;
cin >> komenda >> kod >> txt;

string new_txt = txt;

if(komenda == 1){

    for(int i = 0; i < new_txt.length();i++){

        if(int(new_txt[i])>64 && int(new_txt[i])<91){

            if(int(new_txt[i])+kod < 91){
                new_txt[i] = char(int(new_txt[i])+kod);
            }else{
                new_txt[i] = char(int(new_txt[i])+kod-26);
            }

        }

        if(int(new_txt[i])>96 && int(new_txt[i])<123){

            if(int(new_txt[i])+kod < 123){
                new_txt[i] = char(int(new_txt[i])+kod);
            }else{
                new_txt[i] = char(int(new_txt[i])+kod-26);
            }

        }

    }

}else{

    for(int i = 0; i < new_txt.length();i++){

        if(int(new_txt[i])>64 && int(new_txt[i])<91){

            if(int(new_txt[i])-kod > 64){
                new_txt[i] = char(int(new_txt[i])-kod);
            }else{
                new_txt[i] = char(int(new_txt[i])-kod+26);
            }

        }

        if(int(new_txt[i])>96 && int(new_txt[i])<123){

            if(int(new_txt[i])-kod > 96){
                new_txt[i] = char(int(new_txt[i])-kod);
            }else{
                new_txt[i] = char(int(new_txt[i])-kod+26);
            }

        }

    }

}

cout << new_txt << endl;

return 0;

}






