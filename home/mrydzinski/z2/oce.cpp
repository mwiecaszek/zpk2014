#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int oceny[n];
	int a=0;
	int b=0;
	int c=0;
	int d=0;
	int e=0;
	int f=0;
	for(int i = 0; i < n; i++){
        oceny[i]=0;
	}
    for(int i = 0; i < n; i++){
        cin >> oceny[i];
	}
	for(int j = 0; j < n; j++){
	if(oceny[j]==1){
		a++;
	}
	if(oceny[j]==2){
		b++;
	}
	if(oceny[j]==3){
		c++;
	}
	if(oceny[j]==4){
		d++;
	}
	if(oceny[j]==5){
		e++;
	}
	if(oceny[j]==6){
		f++;	
	}
	}
	cout << a << " " << b << " " << c << " " << d << " " << e << " " << f;
}
