#include<iostream>

using namespace std;

int nextCage(int jump, int position, int cages){
	if(position + jump > cages){
		position = (position + jump)%cages;
	} else{
		position = position + jump;
	}
	return position;
}

int freeAnimal(int cages, int jump){
	int animals = 0;
	
	bool tabFreeCages[cages];
	for(int i = 0; i < cages; i++){
		tabFreeCages[i] = false;
	}
	
	//ma³pka stoi na pierwszej dowolnej klatce
	int currentCage = 1;
	do{
		tabFreeCages[currentCage - 1] = true;
		currentCage = nextCage(jump, currentCage, cages);
		animals++;
	} while(!tabFreeCages[currentCage - 1]);
	
	return animals;
}


int main(){
	int z, n, d;
	
	cin >> z;
	
	int result[z];
	for(int i = 0; i < z; i++){
		cin >> n >> d;
		//funkcja zwracaj¹ca liczbê
		result[i] = freeAnimal(n,d);
	}
	
	for(int i = 0; i < z; i++){
		cout << result[i] << endl;
	}
		
}
