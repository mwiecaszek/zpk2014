#include<iostream>

using namespace std;

int main(){
	int n, note;
	int tab[6];
	
	for(int i = 0; i < 6; i++){
		tab[i] = 0;
	}
	
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cin >> note;
		tab[note - 1]++;
	}
	
	for(int i = 0; i < 6; i++){
		cout << tab[i] << " ";
	}
	
}
