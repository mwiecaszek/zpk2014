#include<iostream>

using namespace std;

int main(){
	int A,B,K, temp;
	
	cin >> A >> B >> K;
	
	// zapewnienie, ¿e A jest d³u¿szym bokiem
	if(A < B){
		temp = A;
		A = B;
		B = temp;
	}
	
	if(B < 2*K){
		cout << A/K;
	} else{
	  cout << 2 * ((A+B)/K - 2 );//A/K * 2 + (B/K - 2) * 2;
	}
	
	
}
