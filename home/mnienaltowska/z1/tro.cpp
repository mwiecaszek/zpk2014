#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    if ( a > b ){
    	if ( a > c ){
    		if ( b + c > a){
    			cout << "TAK" << endl;
			}
			else{
				cout << "NIE" << endl;
			}
		}else{
		if ( b + a > c){
    			cout << "TAK" << endl;
			}
			else{
				cout << "NIE" << endl;
			}
		}
	}else{
		if ( b > c ){
    		if ( a + c > b){
    			cout << "TAK" << endl;
			}
			else{
				cout << "NIE" << endl;
			}
		}else{
		if ( b + a > c){
    			cout << "TAK" << endl;
			}
			else{
				cout << "NIE" << endl;
			}
		}
	}
}
