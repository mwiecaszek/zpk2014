#include<iostream>
using namespace std;

int main(){
	
	int a, b, k;
	cin >> a >> b >> k;
	
	cout << (a/k)*(b/k)-max(0, (a/k-2))*max(0, (b/k-2));
	
	/*if (a<k || b<k)
		cout << 0;
	else if (a>=b)
		cout << (a/k)*(b/k)-max(0, (a/k-2))*max(0, (b/k-2));
	else
		cout << (a/k)*(b/k)-max(0, (a/k-2))*max(0, (b/k-2));
	*/
	
	/*
	if (a>=b)
	cout << max(0,a/k) + max(0,a/k) + max(0,(b-2*k)/k);
	*/
}
