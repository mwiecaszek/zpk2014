#include<iostream>

using namespace std;

int main(){
	int n, x, temp;
	int firstDay = -1, secondDay = -1;
	
	cin >> n >> x;
	
	for(int i = 0; i < n; i++){
		cin >> temp;
		if(temp == x){
			if(firstDay == -1){
				firstDay = i + 1;
			} else{
				secondDay = i + 1;
			}
		} 
	}
	
	
	if(firstDay != -1 && secondDay == -1){
		secondDay = firstDay;
	}
	
	
	cout << firstDay << " " << secondDay;
}
