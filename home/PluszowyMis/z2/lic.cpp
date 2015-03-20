#include<iostream>

using namespace std;

int main(){
	int n;
	bool a = true;
	
	cin >> n;
	if(n >=2 && n <= 1000000){
		for(int i = 2; i*i < n; i++){
			if(n%i == 0){
				cout << "zlozona";
				a = false;
				break;
			}
		}
		if (a){
			cout << "pierwsza";
		}
	}
	
	
}
