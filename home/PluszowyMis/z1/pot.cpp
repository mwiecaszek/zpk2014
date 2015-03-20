#include<iostream>

using namespace std;

int main(){
	unsigned int n, temp = 1;
	
	cin >> n;
	
	if(n >= 1 && n <= 1000000000){
		while(n >= temp){
			cout << temp << endl;
			temp *= 2;
		}
	}
}
