#include<iostream>

using namespace std;

int main(){
	int input = 0, prev = 0, counter = 0;
	
	cin >> input;
	
	while(input >= 0){
		if(input != prev){
			counter++;
			prev = input;
		}
		cin >> input;
	}
	
	cout << counter;
}
