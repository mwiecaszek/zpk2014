#include<iostream>
#include<string>

using namespace std;

int main(){
	string a;
	bool res = true;
	
	cin >> a;
	int temp = a.length();
	
	for(int i = 0; i < temp / 2; i++){
		if(a[i] != a[temp - i - 1]){
			res = false;
			cout << "NIE";
			break;
		}
	}
	
	if(res){
		cout << "TAK";
	}
	
}
