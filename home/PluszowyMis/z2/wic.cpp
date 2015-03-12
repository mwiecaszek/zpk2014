#include<iostream>

using namespace std;

int main(){
	int in, first = 0, second = 0, temp;
	
	cin >> in;
	
	for(int i = 0; i < in; i++){
		cin >> temp;
		if(temp > first){
			second = first;
			first = temp;
		} else if(temp > second){
			second = temp;
		}
	}
	
	cout << second;
}
