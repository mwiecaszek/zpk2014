#include<iostream>
#include<string>

using namespace std;

char signCompareNumber(string a, string b){
	char result = '=';
	if(a.length() > b.length()){
		result = '>';
	} else if(a.length() < b.length()){
		result = '<';
	} else{
		for(int i = 0; i < a.length(); i++){
			if((int)a[i] > (int)b[i]){
				result = '>';
			} else if((int)a[i] < (int)b[i]){
				result = '<';
			}
		}
	}
	return result;
}

int main(){
	string firstNumber, secondNumber, sign;
	
	cin >> firstNumber >> sign >> secondNumber;
	sign = sign[0];
	if(sign == "!"){
		if(signCompareNumber(firstNumber, secondNumber) != '=')
  		    cout << "TAK";
		else cout << "NIE";
	} else{
		if(signCompareNumber(firstNumber, secondNumber) == (char)sign[0]) cout << "TAK";
		else cout << "NIE";
	}
	
}
