#include<iostream>

using namespace std;

int main(){
	int temp;
	int len;
	int max = 0;
	int tab[10];
	
	cin >> len;
	
	for(int i = 0; i < 10; i++ ){
		//pozycja
		tab[i] = -1;
	}
	
	for(int i = 0; i < len; i++){
		cin >> temp;
		
		if(max < i - tab[temp] && tab[temp] != -1){
			max = i - tab[temp];
		}
		tab[temp] = i;
	}
	
	if(max < 2){
		cout << "BRAK";
	} else{
		cout << max - 1;
	}
	
}
