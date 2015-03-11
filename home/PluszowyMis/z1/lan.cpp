#include<iostream>

using namespace std;

int main(){
	int phoneNumber, ageY;
	
	cin >> phoneNumber >> ageY;
	
	cout << 100*(phoneNumber%10) + 2014 - ageY;
	
}
