#include<iostream>

using namespace std;


int main(){
	int x, y;
	cin >> x >> y;
	
	if( x < 0 && y < 0){
		cout << "III";
	} else if( x < 0 && y > 0){
		cout << "II";
	} else if( x > 0 && y < 0){
		cout << "IV";
	} else if( x > 0 && y > 0){
		cout << "I";
	} else if ( x == 0 ){
		if( y == 0){
			cout << "O";
		} else{
			cout << "OY";
		}
	} else {
		cout << "OX";
	}
	
}
