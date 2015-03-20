#include<iostream>

using namespace std;

int main(){
	int n;
	
	cin >> n;
	
	if(n >= 2 && n <= 100000  && n%2 == 0){
		 int a[n/2], z[n/2];
		 for(int i = 0; i < n; i++){
		 	if(i%2 == 0){
		 		cin >> a[i/2];
		 	} else{
		 		cin >> z[i/2];
		 	}
		 }	
		 for(int i = 0; i < n/2; i++){
		 	cout << a[i] << " ";
		 }
		 cout << endl;
		 for(int i = 0; i < n/2; i++){
		 	cout << z[i] << " ";
		 } 
	}
}
