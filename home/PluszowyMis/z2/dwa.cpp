#include<iostream>

using namespace std;

int smaller(int a, int b){
	return a > b ? b : a;
}



int main(){
	int marketsNum, productsNum, minValue = 0, sum = 0;
	
	cin >> marketsNum >> productsNum;
	
	int productsInMarkets[marketsNum][productsNum];
	
	for(int i = 0; i < marketsNum; i++){
		for(int j = 0; j < productsNum; j++){
			cin >> productsInMarkets[i][j];
		}
	}
	
	for(int i = 0; i < marketsNum - 1; i++){
		for(int j = i + 1; j < marketsNum; j++){
			sum = 0;
			for(int p = 0; p < productsNum; p++){
				sum += smaller(productsInMarkets[i][p], productsInMarkets[j][p]);
			}
			if(minValue > sum || minValue == 0){
				minValue = sum;
			}
		}
	}
	
	cout << minValue;
}
