#include<iostream>
using namespace std;

int main(){
	int A, B, K;
	cin >> A >> B >> K;
	int Krzesla=(A/K)*(B/K)-max(0,(A/K-2))*max(0,(B/K-2));
	cout << Krzesla;
}
