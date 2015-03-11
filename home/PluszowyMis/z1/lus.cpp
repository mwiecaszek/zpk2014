#include<iostream>

using namespace std;

int main(){
	unsigned int number, temp;
	
	cin >> number;
	
	while(number){
		temp = temp*10 + number%10;
		number = number / 10;
	}
	
	cout << temp;
}
