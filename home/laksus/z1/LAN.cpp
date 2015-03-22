#include<iostream>
#include<cstring>

using namespace std;

string tel;
int rok;

int main(){

    cin >> tel >> rok;
    cout << ((((((int) tel[8]-48) *2 ) +5) *50) +1764) - rok<< endl;

}
