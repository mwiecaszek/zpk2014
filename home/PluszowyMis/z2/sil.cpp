#include<iostream>

using namespace std;

int main(){
	int n, result = 1;
	cin >> n;
	
	if(n >= 0 && n <= 12){
		for(int i = 1; i <= n; i++){
			result *= i;		
		}		
	}
	cout << result;
	
}
