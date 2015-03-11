#include<iostream>

using namespace std;

int main(){
	int timeInSec;
	cin >> timeInSec;
	cout << timeInSec / 3600 << "g" << (timeInSec%3600)/60 << "m" << timeInSec%60 << "s";
}
