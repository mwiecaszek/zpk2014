#include<iostream>

using namespace std;

int main(){
	char firstS, secondS;
	
	cin >> firstS >> secondS;
	
	if(firstS > 49 && firstS < 56 ){
		if(secondS > 64 && secondS < 71){
  		    cout << (firstS - 48) * 16 + (secondS - 65) + 10;
		} else if( secondS > 47 && secondS < 58){
			cout << (firstS - 48) * 16 + ( secondS - 48);
		}
	}
	
}
