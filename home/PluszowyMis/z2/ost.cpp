#include<iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	
	int ost[] = {6, 2, 4, 8};
	
	if(n == 0){
		cout << 1;
	} else{
		cout << ost[n%4];
	}
	
}
