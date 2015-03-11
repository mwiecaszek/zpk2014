#include<iostream>
#include<string>
using namespace std;

int main(){

    int corobic, przesuniecie;
    string napis;
    cin >> corobic >> przesuniecie >> napis;
    int dlugoscnapisu = napis.size();
    char temp[dlugoscnapisu];
    if (corobic==1){
        for (int i=0; i<dlugoscnapisu; i++){
            if(napis[i]>=97 & napis[i]<=122)
                temp[i]=97+((int)(napis[i])+przesuniecie-97)%26;
            else if(napis[i]>=65 & napis[i]<=90)
                temp[i]=65+((int)(napis[i])+przesuniecie-65)%26;
            else
                temp[i]=napis[i];
        }
    }

    else if (corobic==2){
        for (int i=0; i<dlugoscnapisu; i++){
            if(napis[i]>=97 & napis[i]<=122){
                if((int)(napis[i])-przesuniecie>=97)
                    temp[i]=((int)(napis[i])-przesuniecie);
                else
                    temp[i]=123-(97+przesuniecie-(int)(napis[i]));
            }
            else if(napis[i]>=65 & napis[i]<=90)
                if((int)(napis[i])-przesuniecie>=65)
                    temp[i]=((int)(napis[i])-przesuniecie);
                else
                    temp[i]=91-(65+przesuniecie-(int)(napis[i]));
            else
                temp[i]=napis[i];
        }
    }


    for (int i=0; i<dlugoscnapisu; i++){
        cout<<temp[i];
    }

}
