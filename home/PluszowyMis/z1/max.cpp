#include<iostream>

using namespace std;

int main(){
	int qw, qe;
	cin >> qw >> qe;
	qw = qw < qe ? qe : qw;
	cout << qw;
}
