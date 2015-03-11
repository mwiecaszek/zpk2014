#include<iostream>

using namespace std;

int main(){
	int k, p, temp = 2, result;
	int tab[k+1];
	
	cin >> k;
	
	for(int i = 0; i < k + 1; i++){
		cin >> tab[i];
	}
	
	//je¿eli pierwszy jest zerem to nie ma sensu szukaæ dalej
	if(tab[0] != 0){
		int i = 0;
		int temp = 1;
		do{
			tab[i+1] += tab[i]/2;
			tab[i] = tab[i]%2;
			result += tab[i] * temp;
			i++;
			temp *= 2;
			
		} while(i < k+1 && tab[i]!=0);
		//dodanie ostatniego:
		result += tab[i] * temp;
		cout << result + 1;
	} else{
		cout << 0;
	}
}
