#include<iostream>

using namespace std;

int nwd(int a, int b){
	if(a < b){
		int temp = a;
		a = b;
		b = temp;
	}
	
	return a%b == 0 ? b : nwd(b, a%b);
	
}

int main(){
	int n, q1, q2;
	cin >> n;
	cin >> q1;
	for(int i = 1; i < n; i++){
		cin >> q2;
		q1 = nwd(q1, q2);
	}
	cout << q1;
}
