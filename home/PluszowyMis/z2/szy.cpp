#include<iostream>
#include<string>

using namespace std;

int main(){
	int k = 0;
	int mode;
	string crypt;
	
	cin >> mode >> k >> crypt;
	if(k >= 1 && k <= 25){
		
		
		if(mode == 1){
			//szyfrowanie:
			for(int i = 0; i < crypt.length(); i++){
				if(crypt[i] >= 97 && crypt[i <= 122]){
					crypt[i] = crypt[i] + k > 122 ? crypt[i] - 26 + k : crypt[i] + k;
				} else if(crypt[i] >= 65 && crypt[i] <= 90 ){
					crypt[i] = crypt[i] + k > 90 ? crypt[i] - 26 + k : crypt[i] + k;
				} 
			}
			
			cout << crypt;
		} else if( mode == 2){
			//odszyfrowanie:
			for(int i = 0; i < crypt.length(); i++){
				if(crypt[i] >= 97 && crypt[i <= 122]){
					crypt[i] = crypt[i] - k < 97 ? crypt[i] + 26 - k : crypt[i] - k;
				} else if(crypt[i] >= 65 && crypt[i] <= 90 ){
					crypt[i] = crypt[i] + k < 65 ? crypt[i] + 26 - k : crypt[i] - k;
				} 
			}
			
			cout << crypt;
		}
		
		
	}
	
}
